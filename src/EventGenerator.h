/*
 * EventGenerator.h
 *
 *  Created on: Jul 21, 2022
 *      Author: HP
 */

#ifndef EVENTGENERATOR_H_
#define EVENTGENERATOR_H_

#include <thread>
#include<time.h>
#include<ctime>
#include "BaseEvent.h"

enum EventTypes {
	HardwareSendPacket_t,
	HardwareReceivePacket_t,
	SystemSleep_t,
	SystemWakeup_t,
	SystemShutdown_t,
};

class EventGenerator {
private:
	BaseEvent* event=nullptr;
	std::thread* thread=nullptr;
	clock_t now=clock();
	int random=5;
	int enable=0;
	int fr;
private:
	// factory function : creates one of several poly-morphic objects
	BaseEvent* createEvent(const EventTypes id);
	EventGenerator();
public:

	virtual ~EventGenerator();

	EventGenerator(const int fr);
	void generationStart();
	void startEvent();
	BaseEvent* stopEvent();
	int getRandom() const;
	int getEnable() const;
};

#endif /* EVENTGENERATOR_H_ */
