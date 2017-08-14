/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: alfred.qiao
	Component	: SensorSubscribingApplication_Listener 
	Configuration 	: rti_linux
	Model Element	: rti_linux
//!	Generated Date	: Tue, 8, Aug 2017  
	File Path	: SensorSubscribingApplication_Listener/rti_linux/MainSensorSubscribingApplication_Listener.cpp
*********************************************************************/

//## auto_generated
#include "MainSensorSubscribingApplication_Listener.h"
//## auto_generated
#include "SensorSubscriber.h"
//#[ ignore
SensorSubscribingApplication_ListenerDP::SensorSubscribingApplication_ListenerDP() {
    DDS::DomainParticipantFactory* dpf = DDS::DomainParticipantFactory::get_instance();
    if (dpf != NULL)
    {
    	domainParticipant = dpf->create_participant(0, DDS::PARTICIPANT_QOS_DEFAULT, NULL, 0);
    	if (domainParticipant != NULL) 
    	{
    		SensorTopicStructTypeSupport::register_type(domainParticipant, SensorTopicStructTypeSupport::get_type_name());
    		domainParticipant->create_topic("SensorTopic", SensorTopicStructTypeSupport::get_type_name(), DDS::TOPIC_QOS_DEFAULT, NULL, 0);
    	}
    }
}

SensorSubscribingApplication_ListenerDP::~SensorSubscribingApplication_ListenerDP() {
    if (domainParticipant != NULL) {
    	domainParticipant->delete_contained_entities();
    }
}

DDS::DomainParticipant* SensorSubscribingApplication_ListenerDP::getDomainParticipant() {
    return domainParticipant;
}

DDS::TopicDescription* SensorSubscribingApplication_ListenerDP::lookupTopicDescription(char* topicName) {
    DDS::TopicDescription* retVal = NULL;
    if (domainParticipant != NULL)
    {
    	retVal = domainParticipant->lookup_topicdescription(topicName);
    }
    return retVal;
}

SensorSubscribingApplication_ListenerDP* SensorSubscribingApplication_ListenerDP::instance() {
    static SensorSubscribingApplication_ListenerDP rhpDomainParticipant;
    return &rhpDomainParticipant;
}
//#]

int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            SensorSubscriber * p_SensorSubscriber;
            p_SensorSubscriber = new SensorSubscriber;
            //#[ configuration SensorSubscribingApplication_Listener::rti_linux 
            //#]
            OXF::start();
            delete p_SensorSubscriber;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: SensorSubscribingApplication_Listener/rti_linux/MainSensorSubscribingApplication_Listener.cpp
*********************************************************************/
