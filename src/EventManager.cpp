/*
 * EventManager.cpp
 *
 *  Created on: Jul 21, 2022
 *      Author: HP
 */
#include <iostream>
using namespace std;
#include "BaseEvent.h"
//#include "EventGenerator.h"
#include "EventManager.h"



EventManager::EventManager() {
	// TODO Auto-generated constructor stub

}

EventManager::~EventManager() {
	// TODO Auto-generated destructor stub
}

EventManager& EventManager::creatObject()
{
	static EventManager object;
	return object;
}

void EventManager::postEvent(const int EventGeneratorFr)
{
	static EventGenerator object(EventGeneratorFr) ;


	object.generationStart();

	if(object.getEnable() !=0)
	{
	EventTypes id=static_cast<EventTypes>(object.getRandom());
	genevent=object.stopEvent();

	if(id == HardwareSendPacket_t )
	{
		cout<<"HardwareSendPacket generated\n";
	}
	else if(id == HardwareReceivePacket_t)
	{
		cout<<"HardwareReceivePacket generated\n";
	}
	else if(id == SystemSleep_t)
	{
		cout<<"SystemSleep generated\n";
	}
	else if(id == SystemWakeup_t)
	{
		cout<<"SystemWakeup generated\n";
	}
	else if(id == SystemShutdown_t)
	{
		cout<<"SystemShutdown generated\n";
	}
	else
	{
	}
	list.push(genevent);
	count ++;
	}
}

void EventManager::startHandlingEvents(const int EventManagerFr)
{


	if((clock() - now1)  >EventManagerFr)
	{
		thread = new std::thread(&EventManager::startevent,this);

		now1 = clock();
	}
}

void EventManager::startevent(){

	if(count>0)
	{
		cout<<endl<<"================================ "<<endl;
		cout<<"        Event Manager"<<endl;
		cout<<"================================ "<<endl;
		for(; count>0;count--)
		{
			BaseEvent* event  = list.top();
			list.pop();
			event->executeEvent();
			cout<<"----------------------------"<<endl;

			//delete objects BaseEvent*
			delete event;
		}
		close=1;
		cout<<"================================ "<<endl;
	}
}


void EventManager::stopHandlingEvents()
{
	if(close!=0)
	{
		thread->join();
		delete thread;
		close=0;
	}
}
