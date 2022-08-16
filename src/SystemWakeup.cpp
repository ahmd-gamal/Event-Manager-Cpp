/*
 * SystemWakeup.cpp
 *
 *  Created on: Jul 21, 2022
 *      Author: HP
 */
#include <iostream>
using namespace std;
#include "BaseEvent.h"
#include "SystemWakeup.h"

SystemWakeup::SystemWakeup() {
	// TODO Auto-generated constructor stub
	periority =Medium;
}

SystemWakeup::~SystemWakeup() {
	// TODO Auto-generated destructor stub
}

void SystemWakeup::executeEvent() {
	BaseEvent::setupSystem();
	cout<<"SystemWakeup is Executing\n";
}
