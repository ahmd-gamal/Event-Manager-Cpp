/*
 * SystemSleep.cpp
 *
 *  Created on: Jul 21, 2022
 *      Author: HP
 */
#include <iostream>
using namespace std;
#include "BaseEvent.h"
#include "SystemSleep.h"

SystemSleep::SystemSleep() {
	// TODO Auto-generated constructor stub
	periority =High;
}

SystemSleep::~SystemSleep() {
	// TODO Auto-generated destructor stub
}
void SystemSleep::executeEvent() {
	BaseEvent::setupSystem();
	cout<<"SystemSleep is Executing\n";
}

