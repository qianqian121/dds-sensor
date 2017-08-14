/*********************************************************************
	Rhapsody	: 8.2.1 
	Login		: alfred.qiao
	Component	: SensorPublishingApplication 
	Configuration 	: rti_linux
	Model Element	: SensorPublisher
//!	Generated Date	: Tue, 8, Aug 2017  
	File Path	: SensorPublishingApplication/rti_linux/SensorPublisher.h
*********************************************************************/

#ifndef SensorPublisher_H
#define SensorPublisher_H

//## auto_generated
#include <oxf/oxf.h>
//##   ignore
#include "DDSSensorTopicStructLib.h"
//##   ignore
#include "DDSSensorTopicStructLibSupport.h"
//##   ignore
#include "ndds/ndds_namespace_cpp.h"
//## attribute SensorDataWriter
class SensorTopicStructDataWriter;

//## package PublisherPkg

//## class SensorPublisher
// publisher term is defined in DDS profile and represents a DDS Publisher.
class SensorPublisher {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    SensorPublisher();
    
    //## auto_generated
    ~SensorPublisher();
    
    ////    Operations    ////
    
    // Sending data updates. the code contains "ifdef" conditions to separate API that is DDS-implementation based for handling DDS data structs.
    //## operation publishData()
    void publishData();
    
    //## operation publishSensorDataWriter(SensorTopicStruct)
    DDS::ReturnCode_t publishSensorDataWriter(const SensorTopicStruct& data);
    
    ////    Additional operations    ////
    
    //## auto_generated
    SensorTopicStructDataWriter* getSensorDataWriter() const;
    
//#[ ignore
    DDS::Publisher* getPublisher();
//#]

private :

//#[ ignore
    void initPublisher();
    
    void cleanupPublisher();
//#]

    ////    Attributes    ////

protected :

    SensorTopicStructDataWriter* SensorDataWriter;		//## attribute SensorDataWriter
    
    ////    Framework operations    ////
    
    ////    Framework    ////

private :

//#[ ignore
    DDS::Publisher* publisher;
//#]
};

#endif
/*********************************************************************
	File Path	: SensorPublishingApplication/rti_linux/SensorPublisher.h
*********************************************************************/
