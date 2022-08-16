/*
 * EventManager.h
 *
 *  Created on: Jul 21, 2022
 *      Author: HP
 */

#ifndef EVENTMANAGER_H_
#define EVENTMANAGER_H_
#include <thread>
#include<time.h>
#include<ctime>
#include <vector>
#include <queue>
#include "BaseEvent.h"
#include "EventGenerator.h"
#include "comparator.h"
class EventManager {
	EventManager(const EventManager& other)= delete;
private:
	std:: priority_queue<BaseEvent*,std::vector<BaseEvent*>,comparator>list;

	BaseEvent* genevent=nullptr;
	std::thread* thread=nullptr;
	int close=0;
	clock_t now1=clock();
	int count=0;
	EventManager();

public:
	virtual ~EventManager();

	static EventManager& creatObject();
	void postEvent(const int EventGeneratorFr);
	void startHandlingEvents(const int EventManagerFr);
	void startevent();
	void stopHandlingEvents();
};

#endif /* EVENTMANAGER_H_ */
