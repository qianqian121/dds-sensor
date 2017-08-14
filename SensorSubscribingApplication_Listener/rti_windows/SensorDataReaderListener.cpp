/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: alfred.qiao
	Component	: SensorSubscribingApplication_Listener 
	Configuration 	: rti_windows
	Model Element	: SensorDataReaderListener
//!	Generated Date	: Mon, 7, Aug 2017  
	File Path	: SensorSubscribingApplication_Listener\rti_windows\SensorDataReaderListener.cpp
*********************************************************************/

//## auto_generated
#include "SensorDataReaderListener.h"
//## package SubscriberPkg_Listener

//## class SensorDataReaderListener
SensorDataReaderListener::SensorDataReaderListener() {
}

SensorDataReaderListener::~SensorDataReaderListener() {
}

void SensorDataReaderListener::on_data_available(DDS::DataReader* reader) {
    //#[ operation on_data_available(DataReader)
    SensorTopicStructDataReader* sensorTopicStructDataReader = dynamic_cast<SensorTopicStructDataReader*>(reader);
    if (sensorTopicStructDataReader != NULL)
    {
    	DDS::SampleInfo info;
    	DDS::ReturnCode_t retcode;
    	SensorTopicStruct sensorTopicStruct;
    	for(;;)
    	{
    		SensorTopicStruct_initialize(&sensorTopicStruct);
    		retcode = sensorTopicStructDataReader->take_next_sample(sensorTopicStruct, info);				
    		if (retcode == DDS::RETCODE_NO_DATA)
    		{
    			break;
    		} 
    		else if (retcode != DDS::RETCODE_OK) 
    		{
    			printf("take_next_sample returned error %d\n", retcode);
                return;		
       		}
       		if (info.valid_data)
       		{   			
    			//Copy the sequence elements to a local array.
    			signed int ar[3];
    			sensorTopicStruct.SensorLongSequenceAttribute.to_array(ar, 3);			
    			printf("SensorKeyAttribute: %ld, SensorLongAttribute: %ld, SensorBooleanAttribute: %d, SensorDoubleAttribute: %.3f, SensorStringAttribute: %s, SensorLongSequence: {%ld, %ld, %ld}\n", SensorTopicStruct.SensorKeyAttribute, SensorTopicStruct.SensorLongAttribute, SensorTopicStruct.SensorBooleanAttribute, SensorTopicStruct.SensorDoubleAttribute, SensorTopicStruct.SensorStringAttribute, ar[0], ar[1], ar[2]);
       		}
       		SensorTopicStruct_finalize(&sensorTopicStruct);
       	}
    }
    
    //#]
}

void SensorDataReaderListener::on_liveliness_changed(DDS::DataReader* reader, const DDS::LivelinessChangedStatus& status) {
    //#[ operation on_liveliness_changed(DataReader,LivelinessChangedStatus)
    //#]
}

void SensorDataReaderListener::on_requested_deadline_missed(DDS::DataReader* reader, const DDS::RequestedDeadlineMissedStatus& status) {
    //#[ operation on_requested_deadline_missed(DataReader,RequestedDeadlineMissedStatus)
    //#]
}

void SensorDataReaderListener::on_requested_incompatible_qos(DDS::DataReader* reader, const DDS::RequestedIncompatibleQosStatus& status) {
    //#[ operation on_requested_incompatible_qos(DataReader,RequestedIncompatibleQosStatus)
    //#]
}

void SensorDataReaderListener::on_sample_lost(DDS::DataReader* reader, const DDS::SampleLostStatus& status) {
    //#[ operation on_sample_lost(DataReader,SampleLostStatus)
    printf("sample lost\n");
    //#]
}

void SensorDataReaderListener::on_sample_rejected(DDS::DataReader* reader, const DDS::SampleRejectedStatus& status) {
    //#[ operation on_sample_rejected(DataReader,SampleRejectedStatus)
    printf("sample rejected\n");
    //#]
}

void SensorDataReaderListener::on_subscription_matched(DDS::DataReader* reader, const DDS::SubscriptionMatchedStatus& status) {
    //#[ operation on_subscription_matched(DataReader,SubscriptionMatchedStatus)
    //#]
}

/*********************************************************************
	File Path	: SensorSubscribingApplication_Listener\rti_windows\SensorDataReaderListener.cpp
*********************************************************************/
