/*
 * BaseEvent.cpp
 *
 *  Created on: Jul 21, 2022
 *      Author: HP
 */
#include <iostream>
using namespace std;
#include "BaseEvent.h"


BaseEvent::BaseEvent() :periority(0){
	// TODO Auto-generated constructor stub

}

BaseEvent::~BaseEvent() {
	// TODO Auto-generated destructor stub
}

void BaseEvent::setupHardware(){
	cout<<"setup Hardware Executing\n";
}
void BaseEvent::setupSystem(){
		cout<<"system setup called\n";
	}

int BaseEvent::getPeriority() const {
	return periority;
}
