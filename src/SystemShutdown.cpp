/*
 * SystemShutdown.cpp
 *
 *  Created on: Jul 21, 2022
 *      Author: HP
 */
#include <iostream>
using namespace std;
#include "BaseEvent.h"
#include "SystemShutdown.h"

SystemShutdown::SystemShutdown() {
	// TODO Auto-generated constructor stub
	periority =Low;
}

SystemShutdown::~SystemShutdown() {
	// TODO Auto-generated destructor stub
}

void SystemShutdown::executeEvent() {
	BaseEvent::setupSystem();
	cout<<"SystemShutdown is Executing\n";
}

