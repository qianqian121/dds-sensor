
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug=-g
CPPCompileRelease=-O
LinkDebug=-g -ldl -lnsl -lm -lpthread -lrt
LinkRelease=-O -ldl -lnsl -lm -lpthread -lrt

ConfigurationCPPCompileSwitches=   -I. -I. -I$(OMROOT) -I$(OMROOT)/LangCpp -I$(OMROOT)/LangCpp/oxf $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) -DUSE_IOSTREAM $(CPPCompileDebug) -c   -DRTI_UNIX

#########################################
###### Predefined macros ################
RM=/bin/rm -rf
MD=/bin/mkdir -p
INCLUDE_QUALIFIER=-I
CC=gcc -DUSE_IOSTREAM
LIB_CMD=ar
LINK_CMD=$(CC)
LIB_FLAGS=rvu
LINK_FLAGS=-lpthread -lstdc++ -lrt $(LinkDebug)  

#########################################
####### Context macros ##################

FLAGSFILE=
RULESFILE=
OMROOT="C:/Users/alfred.qiao/IBM/Rational/Rhapsody/8.2.1/Share"
RHPROOT="C:/Program Files (x86)/IBM/Rational/Rhapsody/8.2.1"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.o
EXE_EXT=
LIB_EXT=.a

INSTRUMENTATION=None

TIME_MODEL=RealTime

TARGET_TYPE=Library

TARGET_NAME=SensorTopicStructLib

all : $(TARGET_NAME)$(LIB_EXT) SensorTopicStructLib.mak

TARGET_MAIN=MainSensorTopicStructLib

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/Linux \
  $(INCLUDE_QUALIFIER)$(NDDSHOME)/include \
  $(INCLUDE_QUALIFIER)$(NDDSHOME)/include/ndds

ADDITIONAL_OBJS=

OBJS= \
  DDSSensorTopicStructLib.o \
  DDSSensorTopicStructLibSupport.o \
  DDSSensorTopicStructLibPlugin.o




#########################################
####### Predefined macros ###############
$(OBJS) :  $(INST_LIBS) $(OXF_LIBS)

OBJ_DIR=

ifeq ($(OBJ_DIR),)
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
else
CREATE_OBJ_DIR= $(MD) $(OBJ_DIR)
CLEAN_OBJ_DIR=  $(RM) $(OBJ_DIR)
endif


ifeq ($(INSTRUMENTATION),Animation)

INST_FLAGS=-DOMANIMATOR
INST_INCLUDES=-I$(OMROOT)/LangCpp/aom -I$(OMROOT)/LangCpp/tom
INST_LIBS= $(OMROOT)/LangCpp/lib/linuxaomanim$(LIB_EXT)
OXF_LIBS=$(OMROOT)/LangCpp/lib/linuxoxfinst$(LIB_EXT) $(OMROOT)/LangCpp/lib/linuxomcomappl$(LIB_EXT) $(OMROOT)/LangCpp/lib/linuxoxsiminst$(LIB_EXT)
SOCK_LIB=

else
ifeq ($(INSTRUMENTATION),Tracing)

INST_FLAGS=-DOMTRACER
INST_INCLUDES=-I$(OMROOT)/LangCpp/aom -I$(OMROOT)/LangCpp/tom
INST_LIBS=$(OMROOT)/LangCpp/lib/linuxtomtrace$(LIB_EXT) $(OMROOT)/LangCpp/lib/linuxaomtrace$(LIB_EXT)
OXF_LIBS= $(OMROOT)/LangCpp/lib/linuxoxfinst$(LIB_EXT) $(OMROOT)/LangCpp/lib/linuxomcomappl$(LIB_EXT) $(OMROOT)/LangCpp/lib/linuxoxsiminst$(LIB_EXT)
SOCK_LIB=

else
ifeq ($(INSTRUMENTATION),None)

INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
OXF_LIBS=$(OMROOT)/LangCpp/lib/linuxoxf$(LIB_EXT) $(OMROOT)/LangCpp/lib/linuxoxsim$(LIB_EXT)
SOCK_LIB=

else
	@echo An invalid Instrumentation $(INSTRUMENTATION) is specified.
	exit
endif
endif
endif

.SUFFIXES: $(CPP_EXT)



#####################################################################
##################### Context dependencies and commands #############




DDSSensorTopicStructLib.o : DDSSensorTopicStructLib.cxx DDSSensorTopicStructLib.h
	@echo Compiling DDSSensorTopicStructLib.cxx
	$(CC) $(ConfigurationCPPCompileSwitches)  -o DDSSensorTopicStructLib.o DDSSensorTopicStructLib.cxx
DDSSensorTopicStructLibSupport.cxx : DDSSensorTopicStructLibSupport.h DDSSensorTopicStructLibPlugin.h
DDSSensorTopicStructLibSupport.h : DDSSensorTopicStructLib.h
DDSSensorTopicStructLibSupport.cxx : DDSSensorTopicStructLib.h
DDSSensorTopicStructLibSupport.o : DDSSensorTopicStructLibSupport.cxx DDSSensorTopicStructLib.h
	@echo Compiling DDSSensorTopicStructLibSupport.cxx
	$(CC) $(ConfigurationCPPCompileSwitches)  -o DDSSensorTopicStructLibSupport.o DDSSensorTopicStructLibSupport.cxx
DDSSensorTopicStructLibPlugin.cxx : DDSSensorTopicStructLibPlugin.h
DDSSensorTopicStructLibPlugin.h : DDSSensorTopicStructLib.h
DDSSensorTopicStructLibPlugin.cxx : DDSSensorTopicStructLib.h
DDSSensorTopicStructLibPlugin.o : DDSSensorTopicStructLibPlugin.cxx DDSSensorTopicStructLibPlugin.h
	@echo Compiling DDSSensorTopicStructLibPlugin.cxx
	$(CC) $(ConfigurationCPPCompileSwitches)  -o DDSSensorTopicStructLibPlugin.o DDSSensorTopicStructLibPlugin.cxx
DDSSensorTopicStructLib.cxx : DDSSensorTopicStructLib.h
DDSSensorTopicStructLib.h : DDSSensorTopicStructLib.idl
	@echo IDL Compiling DDSSensorTopicStructLib.idl
	rtiddsgen -replace -namespace -language C++ DDSSensorTopicStructLib.idl
IDL_FILES : DDSSensorTopicStructLib.h







$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
		@$(CC) $(ConfigurationCPPCompileSwitches) -o  $(TARGET_MAIN)$(OBJ_EXT) $(TARGET_MAIN)$(CPP_EXT)

####################################################################################
#                    Predefined linking instructions                               #
# INST_LIBS is included twice to solve bi-directional dependency between libraries #
####################################################################################
$(TARGET_NAME)$(EXE_EXT): IDL_FILES $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) SensorTopicStructLib.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	@$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(SOCK_LIB) \
	$(LINK_FLAGS) -o $(TARGET_NAME)$(EXE_EXT)

$(TARGET_NAME)$(LIB_EXT) : IDL_FILES $(OBJS) $(ADDITIONAL_OBJS) SensorTopicStructLib.mak
	@echo Building library $@
	@$(LIB_CMD) $(LIB_FLAGS) $(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)



clean:
	@echo Cleanup
	
	$(RM) $(TARGET_MAIN)$(OBJ_EXT) $(ADDITIONAL_OBJS)
	$(RM) *$(OBJ_EXT)	
	$(RM) $(TARGET_NAME)$(LIB_EXT)
	$(RM) $(TARGET_NAME)$(EXE_EXT)
	$(CLEAN_OBJ_DIR)
	$(RM) DDSSensorTopicStructLib*.cxx
	$(RM) DDSSensorTopicStructLib*.h