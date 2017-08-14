
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DDSSensorTopicStructLib.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "DDSSensorTopicStructLibSupport.h"
#include "DDSSensorTopicStructLibPlugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'SensorTopicStruct' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   SensorTopicStructTYPENAME

/* Defines */
#define TDataWriter SensorTopicStructDataWriter
#define TData       SensorTopicStruct

#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   SensorTopicStructTYPENAME

/* Defines */
#define TDataReader SensorTopicStructDataReader
#define TDataSeq    SensorTopicStructSeq
#define TData       SensorTopicStruct

#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    SensorTopicStructTYPENAME
#define TPlugin_new  SensorTopicStructPlugin_new
#define TPlugin_delete  SensorTopicStructPlugin_delete

/* Defines */
#define TTypeSupport SensorTopicStructTypeSupport
#define TData        SensorTopicStruct
#define TDataReader  SensorTopicStructDataReader
#define TDataWriter  SensorTopicStructDataWriter
#define TGENERATE_SER_CODE
#define TGENERATE_TYPECODE

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#undef TGENERATE_TYPECODE
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'SensorWapperTopicStruct' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   SensorWapperTopicStructTYPENAME

/* Defines */
#define TDataWriter SensorWapperTopicStructDataWriter
#define TData       SensorWapperTopicStruct

#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   SensorWapperTopicStructTYPENAME

/* Defines */
#define TDataReader SensorWapperTopicStructDataReader
#define TDataSeq    SensorWapperTopicStructSeq
#define TData       SensorWapperTopicStruct

#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    SensorWapperTopicStructTYPENAME
#define TPlugin_new  SensorWapperTopicStructPlugin_new
#define TPlugin_delete  SensorWapperTopicStructPlugin_delete

/* Defines */
#define TTypeSupport SensorWapperTopicStructTypeSupport
#define TData        SensorWapperTopicStruct
#define TDataReader  SensorWapperTopicStructDataReader
#define TDataWriter  SensorWapperTopicStructDataWriter
#define TGENERATE_SER_CODE
#define TGENERATE_TYPECODE

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#undef TGENERATE_TYPECODE
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

