/*********************************************************************
	Rhapsody	: 8.2.1 
	Login		: alfred.qiao
	Component	: SensorSubscribingApplication_Listener 
	Configuration 	: rti_windows
	Model Element	: SensorSubscriber
//!	Generated Date	: Mon, 7, Aug 2017  
	File Path	: SensorSubscribingApplication_Listener\rti_windows\SensorSubscriber.h
*********************************************************************/

#ifndef SensorSubscriber_H
#define SensorSubscriber_H

//## auto_generated
#include <oxf\oxf.h>
//##   ignore
#include "DDSSensorTopicStructLib.h"
//##   ignore
#include "DDSSensorTopicStructLibSupport.h"
//##   ignore
#include "ndds\ndds_namespace_cpp.h"
//## auto_generated
#include "SubscriberPkg_Listener.h"
//## attribute SensorDataReader
class SensorTopicStructDataReader;

//## package SubscriberPkg_Listener

//## class SensorSubscriber
// subsriber term is defined in DDS profile and represents a DDS Subscriber.
// This subscriber is using asynchronous model (Listener) to receive updates regarding new DDS data.
class SensorSubscriber {
    ////    Constructors and destructors    ////
    
public :

    //## operation SensorSubscriber()
    SensorSubscriber();
    
    //## auto_generated
    ~SensorSubscriber();
    
    ////    Additional operations    ////
    
    //## auto_generated
    SensorTopicStructDataReader* getSensorDataReader() const;
    
//#[ ignore
    DDS::Subscriber* getSubscriber();
//#]

private :

//#[ ignore
    void initSubscriber();
    
    void cleanupSubscriber();
//#]

    ////    Attributes    ////

protected :

    SensorTopicStructDataReader* SensorDataReader;		//## attribute SensorDataReader
    
    ////    Framework operations    ////
    
    ////    Framework    ////

private :

//#[ ignore
    DDS::Subscriber* subscriber;
//#]
};

#endif
/*********************************************************************
	File Path	: SensorSubscribingApplication_Listener\rti_windows\SensorSubscriber.h
*********************************************************************/
