

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DDSSensorTopicStructLib.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DDSSensorTopicStructLib_13381160_h
#define DDSSensorTopicStructLib_13381160_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

extern "C" {

    extern const char *SensorTopicStructTYPENAME;

}

struct SensorTopicStructSeq;
#ifndef NDDS_STANDALONE_TYPE
class SensorTopicStructTypeSupport;
class SensorTopicStructDataWriter;
class SensorTopicStructDataReader;
#endif

class SensorTopicStruct 
{
  public:
    typedef struct SensorTopicStructSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef SensorTopicStructTypeSupport TypeSupport;
    typedef SensorTopicStructDataWriter DataWriter;
    typedef SensorTopicStructDataReader DataReader;
    #endif

    DDS_Boolean   SensorBooleanAttribute ;
    DDS_Double   SensorDoubleAttribute ;
    DDS_Long   SensorKeyAttribute ;
    DDS_Long   SensorLongAttribute ;
    DDS_LongSeq  SensorLongSequenceAttribute ;
    DDS_Char *   SensorStringAttribute ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* SensorTopicStruct_get_typecode(void); /* Type code */

DDS_SEQUENCE(SensorTopicStructSeq, SensorTopicStruct);                                        

NDDSUSERDllExport
RTIBool SensorTopicStruct_initialize(
    SensorTopicStruct* self);

NDDSUSERDllExport
RTIBool SensorTopicStruct_initialize_ex(
    SensorTopicStruct* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool SensorTopicStruct_initialize_w_params(
    SensorTopicStruct* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void SensorTopicStruct_finalize(
    SensorTopicStruct* self);

NDDSUSERDllExport
void SensorTopicStruct_finalize_ex(
    SensorTopicStruct* self,RTIBool deletePointers);

NDDSUSERDllExport
void SensorTopicStruct_finalize_w_params(
    SensorTopicStruct* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void SensorTopicStruct_finalize_optional_members(
    SensorTopicStruct* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool SensorTopicStruct_copy(
    SensorTopicStruct* dst,
    const SensorTopicStruct* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *SensorWapperTopicStructTYPENAME;

}

struct SensorWapperTopicStructSeq;
#ifndef NDDS_STANDALONE_TYPE
class SensorWapperTopicStructTypeSupport;
class SensorWapperTopicStructDataWriter;
class SensorWapperTopicStructDataReader;
#endif

class SensorWapperTopicStruct 
{
  public:
    typedef struct SensorWapperTopicStructSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef SensorWapperTopicStructTypeSupport TypeSupport;
    typedef SensorWapperTopicStructDataWriter DataWriter;
    typedef SensorWapperTopicStructDataReader DataReader;
    #endif

    DDS_Octet   attribute_2 ;
    SensorTopicStruct   sensor_0 ;
    DDS_Char *   sensor_1 ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* SensorWapperTopicStruct_get_typecode(void); /* Type code */

DDS_SEQUENCE(SensorWapperTopicStructSeq, SensorWapperTopicStruct);                                        

NDDSUSERDllExport
RTIBool SensorWapperTopicStruct_initialize(
    SensorWapperTopicStruct* self);

NDDSUSERDllExport
RTIBool SensorWapperTopicStruct_initialize_ex(
    SensorWapperTopicStruct* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool SensorWapperTopicStruct_initialize_w_params(
    SensorWapperTopicStruct* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void SensorWapperTopicStruct_finalize(
    SensorWapperTopicStruct* self);

NDDSUSERDllExport
void SensorWapperTopicStruct_finalize_ex(
    SensorWapperTopicStruct* self,RTIBool deletePointers);

NDDSUSERDllExport
void SensorWapperTopicStruct_finalize_w_params(
    SensorWapperTopicStruct* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void SensorWapperTopicStruct_finalize_optional_members(
    SensorWapperTopicStruct* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool SensorWapperTopicStruct_copy(
    SensorWapperTopicStruct* dst,
    const SensorWapperTopicStruct* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DDSSensorTopicStructLib */

