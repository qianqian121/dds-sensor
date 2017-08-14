

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DDSSensorTopicStructLib.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "DDSSensorTopicStructLib.h"

/* ========================================================================= */
const char *SensorTopicStructTYPENAME = "SensorTopicStruct";

DDS_TypeCode* SensorTopicStruct_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode SensorTopicStruct_g_tc_SensorLongSequenceAttribute_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);
    static DDS_TypeCode SensorTopicStruct_g_tc_SensorStringAttribute_string = DDS_INITIALIZE_STRING_TYPECODE((255));
    static DDS_TypeCode_Member SensorTopicStruct_g_tc_members[6]=
    {

        {
            (char *)"SensorBooleanAttribute",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"SensorDoubleAttribute",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"SensorKeyAttribute",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"SensorLongAttribute",/* Member name */
            {
                3,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"SensorLongSequenceAttribute",/* Member name */
            {
                4,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"SensorStringAttribute",/* Member name */
            {
                5,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode SensorTopicStruct_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"SensorTopicStruct", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            6, /* Number of members */
            SensorTopicStruct_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for SensorTopicStruct*/

    if (is_initialized) {
        return &SensorTopicStruct_g_tc;
    }

    SensorTopicStruct_g_tc_SensorLongSequenceAttribute_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    SensorTopicStruct_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

    SensorTopicStruct_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    SensorTopicStruct_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    SensorTopicStruct_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    SensorTopicStruct_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& SensorTopicStruct_g_tc_SensorLongSequenceAttribute_sequence;
    SensorTopicStruct_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&SensorTopicStruct_g_tc_SensorStringAttribute_string;

    is_initialized = RTI_TRUE;

    return &SensorTopicStruct_g_tc;
}

RTIBool SensorTopicStruct_initialize(
    SensorTopicStruct* sample) {
    return SensorTopicStruct_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool SensorTopicStruct_initialize_ex(
    SensorTopicStruct* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return SensorTopicStruct_initialize_w_params(
        sample,&allocParams);

}

RTIBool SensorTopicStruct_initialize_w_params(
    SensorTopicStruct* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (allocParams) {} /* To avoid warnings */

    if (!RTICdrType_initBoolean(&sample->SensorBooleanAttribute)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initDouble(&sample->SensorDoubleAttribute)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initLong(&sample->SensorKeyAttribute)) {
        return RTI_FALSE;
    }     

    if (!RTICdrType_initLong(&sample->SensorLongAttribute)) {
        return RTI_FALSE;
    }     

    if (allocParams->allocate_memory) {
        DDS_LongSeq_initialize(&sample->SensorLongSequenceAttribute  );
        if (!DDS_LongSeq_set_maximum(&sample->SensorLongSequenceAttribute , (100))) {
            return RTI_FALSE;
        }
    } else { 
        DDS_LongSeq_set_length(&sample->SensorLongSequenceAttribute, 0);
    }

    if (allocParams->allocate_memory){
        sample->SensorStringAttribute= DDS_String_alloc ((255));
        if (sample->SensorStringAttribute == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->SensorStringAttribute!= NULL) { 
            sample->SensorStringAttribute[0] = '\0';
        }
    }

    return RTI_TRUE;
}

void SensorTopicStruct_finalize(
    SensorTopicStruct* sample)
{

    SensorTopicStruct_finalize_ex(sample,RTI_TRUE);
}

void SensorTopicStruct_finalize_ex(
    SensorTopicStruct* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    SensorTopicStruct_finalize_w_params(
        sample,&deallocParams);
}

void SensorTopicStruct_finalize_w_params(
    SensorTopicStruct* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    DDS_LongSeq_finalize(&sample->SensorLongSequenceAttribute);

    if (sample->SensorStringAttribute != NULL) {
        DDS_String_free(sample->SensorStringAttribute);
        sample->SensorStringAttribute=NULL;

    }
}

void SensorTopicStruct_finalize_optional_members(
    SensorTopicStruct* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool SensorTopicStruct_copy(
    SensorTopicStruct* dst,
    const SensorTopicStruct* src)
{

    if (!RTICdrType_copyBoolean (
        &dst->SensorBooleanAttribute, &src->SensorBooleanAttribute)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyDouble (
        &dst->SensorDoubleAttribute, &src->SensorDoubleAttribute)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLong (
        &dst->SensorKeyAttribute, &src->SensorKeyAttribute)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLong (
        &dst->SensorLongAttribute, &src->SensorLongAttribute)) { 
        return RTI_FALSE;
    }
    if (!DDS_LongSeq_copy(&dst->SensorLongSequenceAttribute ,
    &src->SensorLongSequenceAttribute )) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyStringEx (
        &dst->SensorStringAttribute, src->SensorStringAttribute, 
        (255) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'SensorTopicStruct' sequence class.
*/
#define T SensorTopicStruct
#define TSeq SensorTopicStructSeq
#define T_initialize_w_params SensorTopicStruct_initialize_w_params
#define T_finalize_w_params   SensorTopicStruct_finalize_w_params
#define T_copy       SensorTopicStruct_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

