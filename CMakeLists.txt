cmake_minimum_required(VERSION 3.0)
project(dds-sensor)

file(GLOB_RECURSE DDS_SOURCES "SensorTopicStructLib/rti_linux/*cxx")

SET(CMAKE_CXX_FLAGS "-std=c++11 -DARCH=x64Linux3gcc4.8.2 -DRTI_UNIX -DRTI_LINUX -DRTI_64BIT -m64 ${CMAKE_CXX_FLAGS}")

find_path(
        NDDS_INCLUDE_DIRS
        ndds/ndds_c.h
        /opt/rti/include
)

find_library(
        NDDS_LIBRARIES
        NAMES nddscore libnddscore
        HINTS "/opt/rti/lib/x64Linux3gcc4.8.2"
)

include_directories(${NDDS_INCLUDE_DIRS} ${NDDS_INCLUDE_DIRS}/ndds "SensorTopicStructLib/rti_linux")
set(LIBS ${LIBS} ${NDDS_LIBRARIES})
#
#message(WARNING "${NDDS_INCLUDE_DIRS}")
#message(WARNING "${INCLUDE_DIRECTORIES}")
#
#get_property(inc_dirs DIRECTORY PROPERTY INCLUDE_DIRECTORIES)
#message("inc_dirs = ${inc_dirs}")

#execute_process(COMMAND mkdir -pv ${CMAKE_SOURCE_DIR}/src/control/generated)
#execute_process(COMMAND /opt/rti/bin/rtiddsgen -d ${CMAKE_SOURCE_DIR}/src/control/generated ${CMAKE_SOURCE_DIR}/src/control/idl/GamePad.idl -replace -language C++)

#add_subdirectory(SensorTopicStructLib/rti_linux/objs)
#add_subdirectory(SensorSubscribingApplication_Listener/rti_linux/objs)
add_subdirectory(SensorPublishingApplication/rti_linux)
