/*********************************************************************
	Rhapsody	: 8.2.1 
	Login		: alfred.qiao
	Component	: SensorSubscribingApplication_Listener 
	Configuration 	: rti_linux
	Model Element	: rti_linux
//!	Generated Date	: Tue, 8, Aug 2017  
	File Path	: SensorSubscribingApplication_Listener/rti_linux/MainSensorSubscribingApplication_Listener.h
*********************************************************************/

#ifndef MainSensorSubscribingApplication_Listener_H
#define MainSensorSubscribingApplication_Listener_H

//## auto_generated
#include <oxf/oxf.h>
//##   ignore
#include "DDSSensorTopicStructLibSupport.h"
//##   ignore
#include "ndds/ndds_namespace_cpp.h"
//#[ ignore
class SensorSubscribingApplication_ListenerDP {
    ////    Constructors and destructors    ////
    
private :

    SensorSubscribingApplication_ListenerDP();

public :

    virtual ~SensorSubscribingApplication_ListenerDP();
    
    ////    Framework operations    ////
    
    DDS::DomainParticipant* getDomainParticipant();
    
    DDS::TopicDescription* lookupTopicDescription(char* topicName);
    
    static SensorSubscribingApplication_ListenerDP* instance();
    
    ////    Framework    ////

private :

    DDS::DomainParticipant* domainParticipant;
};
//#]

#endif
/*********************************************************************
	File Path	: SensorSubscribingApplication_Listener/rti_linux/MainSensorSubscribingApplication_Listener.h
*********************************************************************/
