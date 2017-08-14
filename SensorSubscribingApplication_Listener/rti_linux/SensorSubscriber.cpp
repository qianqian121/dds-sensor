/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: alfred.qiao
	Component	: SensorSubscribingApplication_Listener 
	Configuration 	: rti_linux
	Model Element	: SensorSubscriber
//!	Generated Date	: Tue, 8, Aug 2017  
	File Path	: SensorSubscribingApplication_Listener/rti_linux/SensorSubscriber.cpp
*********************************************************************/

//##   ignore
#include "MainSensorSubscribingApplication_Listener.h"
//##   ignore
#include "SubscriberPkg_Listener.h"
//##   ignore
#include "SensorDataReaderListener.h"
//## auto_generated
#include "SensorSubscriber.h"
//## attribute SensorDataReader
#include "DDSSensorTopicStructLibSupport.h"
//## package SubscriberPkg_Listener

//## class SensorSubscriber
SensorSubscriber::SensorSubscriber() {
    initSubscriber();
    //#[ operation SensorSubscriber()
    printf("ready to receive data\n");
    //#]
}

SensorSubscriber::~SensorSubscriber() {
    cleanupSubscriber();
}

SensorTopicStructDataReader* SensorSubscriber::getSensorDataReader() const {
    return SensorDataReader;
}

//#[ ignore
DDS::Subscriber* SensorSubscriber::getSubscriber() {
    return subscriber;
}

void SensorSubscriber::initSubscriber() {
    DDS::DomainParticipant* domainParticipant = SensorSubscribingApplication_ListenerDP::instance()->getDomainParticipant();
    if (domainParticipant != NULL)
    {
    	subscriber = domainParticipant->create_subscriber(DDS::SUBSCRIBER_QOS_DEFAULT, NULL, 0);
    	if (subscriber != NULL)
    	{		
    		DDS::TopicDescription* SensorTopicTopicDesc = SensorSubscribingApplication_ListenerDP::instance()->lookupTopicDescription("SensorTopic");
    		if (SensorTopicTopicDesc != NULL)
    		{
    			DDS::DataReaderQos SensorDataReaderQos;
    		if (subscriber->get_default_datareader_qos(SensorDataReaderQos) == DDS::RETCODE_OK)
    		{
    			SensorDataReaderQos.deadline.period.sec = 1;
    			SensorDataReaderQos.deadline.period.nanosec = 0;
    			
    		}
    		
    			DDS::DataReaderListener* SensorDataReaderListener = dynamic_cast<DDS::DataReaderListener*>(&itsSensorDataReaderListener);
    		
    			DDS::DataReader* dataReader = subscriber->create_datareader(SensorTopicTopicDesc, SensorDataReaderQos, SensorDataReaderListener, DDS::DATA_AVAILABLE_STATUS | DDS::SAMPLE_LOST_STATUS | DDS::SAMPLE_REJECTED_STATUS);		
    			SensorDataReader = dynamic_cast<SensorTopicStructDataReader*>(dataReader);
    		}
    	}
    }
}

void SensorSubscriber::cleanupSubscriber() {
    if (subscriber != NULL) 
    {
    	subscriber->delete_contained_entities();
    	DDS::DomainParticipant* domainParticipant = subscriber->get_participant();
    	domainParticipant->delete_subscriber(subscriber);
    	subscriber = NULL;
    }
}
//#]

/*********************************************************************
	File Path	: SensorSubscribingApplication_Listener/rti_linux/SensorSubscriber.cpp
*********************************************************************/
