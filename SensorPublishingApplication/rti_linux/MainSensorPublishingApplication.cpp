/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: alfred.qiao
	Component	: SensorPublishingApplication 
	Configuration 	: rti_linux
	Model Element	: rti_linux
//!	Generated Date	: Tue, 8, Aug 2017  
	File Path	: SensorPublishingApplication/rti_linux/MainSensorPublishingApplication.cpp
*********************************************************************/

//## auto_generated
#include "MainSensorPublishingApplication.h"
//## auto_generated
#include "SensorPublisher.h"

//#[ ignore
SensorPublishingApplicationDP::SensorPublishingApplicationDP() {
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

SensorPublishingApplicationDP::~SensorPublishingApplicationDP() {
    if (domainParticipant != NULL) {
    	domainParticipant->delete_contained_entities();
    }
}

DDS::DomainParticipant* SensorPublishingApplicationDP::getDomainParticipant() {
    return domainParticipant;
}

DDS::TopicDescription* SensorPublishingApplicationDP::lookupTopicDescription(char* topicName) {
    DDS::TopicDescription* retVal = NULL;
    if (domainParticipant != NULL)
    {
    	retVal = domainParticipant->lookup_topicdescription(topicName);
    }
    return retVal;
}

SensorPublishingApplicationDP* SensorPublishingApplicationDP::instance() {
    static SensorPublishingApplicationDP rhpDomainParticipant;
    return &rhpDomainParticipant;
}
//#]

int main(int argc, char* argv[]) {
    int status = 0;
//    if(OXF::initialize())
        {
            SensorPublisher * p_SensorPublisher;
            p_SensorPublisher = new SensorPublisher;
            //#[ configuration SensorPublishingApplication::rti_linux 
//            p_MyPublisher->publishData();
            //#]
//            OXF::start();
            delete p_SensorPublisher;
            status = 0;
        }

    return status;
}

/*********************************************************************
	File Path	: SensorPublishingApplication/rti_linux/MainSensorPublishingApplication.cpp
*********************************************************************/
