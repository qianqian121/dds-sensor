/*********************************************************************
	Rhapsody	: 8.2.1 
	Login		: alfred.qiao
	Component	: SensorPublishingApplication 
	Configuration 	: rti_windows
	Model Element	: rti_windows
//!	Generated Date	: Mon, 7, Aug 2017  
	File Path	: SensorPublishingApplication\rti_windows\MainSensorPublishingApplication.h
*********************************************************************/

#ifndef MainSensorPublishingApplication_H
#define MainSensorPublishingApplication_H

//## auto_generated
#include <oxf\oxf.h>
//##   ignore
#include "DDSSensorTopicStructLibSupport.h"
//##   ignore
#include "ndds\ndds_namespace_cpp.h"
//#[ ignore
class SensorPublishingApplicationDP {
    ////    Constructors and destructors    ////
    
private :

    SensorPublishingApplicationDP();

public :

    virtual ~SensorPublishingApplicationDP();
    
    ////    Framework operations    ////
    
    DDS::DomainParticipant* getDomainParticipant();
    
    DDS::TopicDescription* lookupTopicDescription(char* topicName);
    
    static SensorPublishingApplicationDP* instance();
    
    ////    Framework    ////

private :

    DDS::DomainParticipant* domainParticipant;
};
//#]

#endif
/*********************************************************************
	File Path	: SensorPublishingApplication\rti_windows\MainSensorPublishingApplication.h
*********************************************************************/
