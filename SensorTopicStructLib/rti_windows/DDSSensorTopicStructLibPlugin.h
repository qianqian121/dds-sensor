

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DDSSensorTopicStructLib.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DDSSensorTopicStructLibPlugin_13381160_h
#define DDSSensorTopicStructLibPlugin_13381160_h

#include "DDSSensorTopicStructLib.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

extern "C" {

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct SensorTopicStruct
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct SensorTopicStruct)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * SensorTopicStruct must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct SensorTopicStruct.
    */
    typedef  class SensorTopicStruct SensorTopicStructKeyHolder;

    #define SensorTopicStructPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define SensorTopicStructPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define SensorTopicStructPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define SensorTopicStructPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define SensorTopicStructPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define SensorTopicStructPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define SensorTopicStructPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern SensorTopicStruct*
    SensorTopicStructPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern SensorTopicStruct*
    SensorTopicStructPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern SensorTopicStruct*
    SensorTopicStructPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    SensorTopicStructPluginSupport_copy_data(
        SensorTopicStruct *out,
        const SensorTopicStruct *in);

    NDDSUSERDllExport extern void 
    SensorTopicStructPluginSupport_destroy_data_w_params(
        SensorTopicStruct *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    SensorTopicStructPluginSupport_destroy_data_ex(
        SensorTopicStruct *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    SensorTopicStructPluginSupport_destroy_data(
        SensorTopicStruct *sample);

    NDDSUSERDllExport extern void 
    SensorTopicStructPluginSupport_print_data(
        const SensorTopicStruct *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern SensorTopicStruct*
    SensorTopicStructPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern SensorTopicStruct*
    SensorTopicStructPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    SensorTopicStructPluginSupport_destroy_key_ex(
        SensorTopicStructKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    SensorTopicStructPluginSupport_destroy_key(
        SensorTopicStructKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    SensorTopicStructPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    SensorTopicStructPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    SensorTopicStructPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    SensorTopicStructPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    SensorTopicStructPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        SensorTopicStruct *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    SensorTopicStructPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        SensorTopicStruct *out,
        const SensorTopicStruct *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    SensorTopicStructPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const SensorTopicStruct *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    SensorTopicStructPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        SensorTopicStruct *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    SensorTopicStructPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const SensorTopicStruct *sample); 

    NDDSUSERDllExport extern RTIBool 
    SensorTopicStructPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        SensorTopicStruct **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    SensorTopicStructPlugin_deserialize_from_cdr_buffer(
        SensorTopicStruct *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    SensorTopicStructPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    SensorTopicStructPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    SensorTopicStructPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    SensorTopicStructPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    SensorTopicStructPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const SensorTopicStruct * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    SensorTopicStructPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    SensorTopicStructPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    SensorTopicStructPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    SensorTopicStructPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const SensorTopicStruct *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    SensorTopicStructPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        SensorTopicStruct * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    SensorTopicStructPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        SensorTopicStruct ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    SensorTopicStructPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        SensorTopicStruct *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    SensorTopicStructPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        SensorTopicStructKeyHolder *key, 
        const SensorTopicStruct *instance);

    NDDSUSERDllExport extern RTIBool 
    SensorTopicStructPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        SensorTopicStruct *instance, 
        const SensorTopicStructKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    SensorTopicStructPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const SensorTopicStruct *instance);

    NDDSUSERDllExport extern RTIBool 
    SensorTopicStructPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    SensorTopicStructPlugin_new(void);

    NDDSUSERDllExport extern void
    SensorTopicStructPlugin_delete(struct PRESTypePlugin *);

    #define SensorWapperTopicStructPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define SensorWapperTopicStructPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define SensorWapperTopicStructPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define SensorWapperTopicStructPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define SensorWapperTopicStructPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern SensorWapperTopicStruct*
    SensorWapperTopicStructPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern SensorWapperTopicStruct*
    SensorWapperTopicStructPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern SensorWapperTopicStruct*
    SensorWapperTopicStructPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    SensorWapperTopicStructPluginSupport_copy_data(
        SensorWapperTopicStruct *out,
        const SensorWapperTopicStruct *in);

    NDDSUSERDllExport extern void 
    SensorWapperTopicStructPluginSupport_destroy_data_w_params(
        SensorWapperTopicStruct *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    SensorWapperTopicStructPluginSupport_destroy_data_ex(
        SensorWapperTopicStruct *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    SensorWapperTopicStructPluginSupport_destroy_data(
        SensorWapperTopicStruct *sample);

    NDDSUSERDllExport extern void 
    SensorWapperTopicStructPluginSupport_print_data(
        const SensorWapperTopicStruct *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    SensorWapperTopicStructPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    SensorWapperTopicStructPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    SensorWapperTopicStructPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    SensorWapperTopicStructPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    SensorWapperTopicStructPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        SensorWapperTopicStruct *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    SensorWapperTopicStructPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        SensorWapperTopicStruct *out,
        const SensorWapperTopicStruct *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    SensorWapperTopicStructPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const SensorWapperTopicStruct *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    SensorWapperTopicStructPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        SensorWapperTopicStruct *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    SensorWapperTopicStructPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const SensorWapperTopicStruct *sample); 

    NDDSUSERDllExport extern RTIBool 
    SensorWapperTopicStructPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        SensorWapperTopicStruct **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    SensorWapperTopicStructPlugin_deserialize_from_cdr_buffer(
        SensorWapperTopicStruct *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    SensorWapperTopicStructPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    SensorWapperTopicStructPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    SensorWapperTopicStructPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    SensorWapperTopicStructPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    SensorWapperTopicStructPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const SensorWapperTopicStruct * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    SensorWapperTopicStructPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    SensorWapperTopicStructPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    SensorWapperTopicStructPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    SensorWapperTopicStructPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const SensorWapperTopicStruct *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    SensorWapperTopicStructPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        SensorWapperTopicStruct * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    SensorWapperTopicStructPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        SensorWapperTopicStruct ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    SensorWapperTopicStructPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        SensorWapperTopicStruct *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    SensorWapperTopicStructPlugin_new(void);

    NDDSUSERDllExport extern void
    SensorWapperTopicStructPlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* DDSSensorTopicStructLibPlugin_13381160_h */

