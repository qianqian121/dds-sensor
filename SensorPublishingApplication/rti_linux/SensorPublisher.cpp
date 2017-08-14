/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: alfred.qiao
	Component	: SensorPublishingApplication 
	Configuration 	: rti_linux
	Model Element	: SensorPublisher
//!	Generated Date	: Tue, 8, Aug 2017  
	File Path	: SensorPublishingApplication/rti_linux/SensorPublisher.cpp
*********************************************************************/

//##   ignore
#include "MainSensorPublishingApplication.h"
//## auto_generated
#include "SensorPublisher.h"
//## attribute SensorDataWriter
#include <DDSSensorTopicStructLibSupport.h>
//## auto_generated
//## package PublisherPkg

//## class SensorPublisher
SensorPublisher::SensorPublisher() {
    initPublisher();
}

SensorPublisher::~SensorPublisher() {
    cleanupPublisher();
}

void SensorPublisher::publishData() {
    //#[ operation publishData()
    /*user should add your own handling code here, or use a callback to handle data*/
    
    char buff[32];
    for (int i = 1; i <= 10; ++i)
    {
//    	OMDelay(1000);
    	SensorTopicStruct sensorTopicStruct;
    	SensorTopicStruct_initialize(&sensorTopicStruct);
    	sensorTopicStruct.SensorKeyAttribute = i;
    	sensorTopicStruct.SensorLongAttribute = i;
    	sensorTopicStruct.SensorBooleanAttribute = (i % 2);
    	sensorTopicStruct.SensorDoubleAttribute = 1./i;
    	
    	//Initializing myStringAttribute
    	sprintf(buff, "message number %d", i);
    
    	size_t buffLength = strlen(buff);
        if (!RTICdrType_copyString(sensorTopicStruct.SensorStringAttribute, buff, buffLength + 1)) 
        {
            return;
        }
    
     	const signed int ar[3] = {i, i+1, i+2};
     	if (!sensorTopicStruct.SensorLongSequenceAttribute.from_array(ar, 3))
     	{                                                  
     		 return;
     	}
    	
    	
    	//publish myTopicStruct
		publishSensorDataWriter(sensorTopicStruct);
    
    	SensorTopicStruct_finalize(&sensorTopicStruct);
    }
    
    //#]
}

DDS::ReturnCode_t SensorPublisher::publishSensorDataWriter(const SensorTopicStruct& data) {
    //#[ operation publishSensorDataWriter(SensorTopicStruct)
    return SensorDataWriter->write(data, DDS::HANDLE_NIL);
    //#]
}

SensorTopicStructDataWriter* SensorPublisher::getSensorDataWriter() const {
    return SensorDataWriter;
}

//#[ ignore
DDS::Publisher* SensorPublisher::getPublisher() {
    return publisher;
}

void SensorPublisher::initPublisher() {
    DDS::DomainParticipant* domainParticipant = SensorPublishingApplicationDP::instance()->getDomainParticipant();
    if (domainParticipant != NULL)
    {
    	publisher = domainParticipant->create_publisher(DDS::PUBLISHER_QOS_DEFAULT, NULL, 0);
    	if (publisher != NULL)
    	{
    		DDS::Topic* SensorTopicTopic = dynamic_cast<DDS::Topic*>(SensorPublishingApplicationDP::instance()->lookupTopicDescription("SensorTopic"));
    		if (SensorTopicTopic!= NULL)
    		{
    			DDS::DataWriterQos SensorDataWriterQos;
    		if (publisher->get_default_datawriter_qos(SensorDataWriterQos) == DDS::RETCODE_OK)
    		{
    			SensorDataWriterQos.deadline.period.sec = 1;
    			SensorDataWriterQos.deadline.period.nanosec = 0;
    			
    		}
    		
    			DDS::DataWriter* dataWriter = publisher->create_datawriter(SensorTopicTopic, SensorDataWriterQos, NULL, 0);
    			SensorDataWriter = dynamic_cast<SensorTopicStructDataWriter*>(dataWriter);		
    		}
    	}
    }
}

void SensorPublisher::cleanupPublisher() {
    if (publisher != NULL) 
    {
    	publisher->delete_contained_entities();
    	DDS::DomainParticipant* domainParticipant = publisher->get_participant();
    	domainParticipant->delete_publisher(publisher);
    	publisher = NULL;
    }
}
//#]

/*********************************************************************
	File Path	: SensorPublishingApplication/rti_linux/SensorPublisher.cpp
*********************************************************************/
