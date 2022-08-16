//============================================================================
// Name        : miniproject.cpp
// Author      : Ahmed Gamal
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "BaseEvent.h"
#include "EventGenerator.h"

#include "HardwareReceivePacket.h"
#include "HardwareSendPacket.h"
#include "SystemWakeup.h"
#include "SystemSleep.h"
#include "SystemShutdown.h"

#include "EventManager.h"
using namespace std;

#define Event_Manager_Frequency    5000    // event manager Frequency in ms
#define Event_Generator_Frequency  2000    // event Generator Frequency in ms


int main() {
	EventManager &eventmanager=EventManager::creatObject();//singleton object
	cout<<"==========================================================="<<endl;
	cout<<"   Project starting, wait seconds to print the output:"<<endl;
	cout<<"==========================================================="<<endl;
		while(1)
		{

			eventmanager.postEvent(Event_Generator_Frequency);
			eventmanager.startHandlingEvents(Event_Manager_Frequency);
			eventmanager.stopHandlingEvents();
		}
		return 0;
}
