/*
 * EventGenerator.cpp
 *
 *  Created on: Jul 21, 2022
 *      Author: HP
 */
#include <iostream>
using namespace std;
#include "BaseEvent.h"
#include "EventGenerator.h"

#include "HardwareReceivePacket.h"
#include "HardwareSendPacket.h"
#include "SystemWakeup.h"
#include "SystemSleep.h"
#include "SystemShutdown.h"

EventGenerator::EventGenerator():fr(0) {
	// TODO Auto-generated constructor stub

}
EventGenerator::EventGenerator(const int fr):fr(fr) {

}

EventGenerator::~EventGenerator() {
	// TODO Auto-generated destructor stub
}

void EventGenerator::generationStart()
{

	if((clock() - now)  >fr)
	{

	   thread = new std::thread(&EventGenerator::startEvent,this);
		now = clock();

	}


}

BaseEvent* EventGenerator::createEvent(const EventTypes id){
	if(id == HardwareSendPacket_t )
	{
		return new HardwareSendPacket;
	}
	else if(id == HardwareReceivePacket_t)
	{
		return new HardwareReceivePacket;
	}
	else if(id == SystemSleep_t)
	{
		return new SystemSleep;
	}
	else if(id == SystemWakeup_t)
	{
		return new SystemWakeup;
	}
	else if(id == SystemShutdown_t)
	{
		return new SystemShutdown;
	}
	else
	{
		return nullptr;
	}
}

void EventGenerator::startEvent()
{
	srand(time(0));
	random = 0 + (rand() % 5);
	enable=1;

	//EventTypes id=static_cast<EventTypes>(random);
//	event = createEvent(id);

}

BaseEvent* EventGenerator::stopEvent()
{
	if(enable==1)
	{
	thread->join();
	delete thread;
	enable=0;
	EventTypes id=static_cast<EventTypes>(random);
	event = createEvent(id);
	}
	return event;
}

int EventGenerator::getRandom() const {
	return random;
}

int EventGenerator::getEnable() const {
	return enable;
}


