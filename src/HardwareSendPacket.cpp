/*
 * HardwareSendPacket.cpp
 *
 *  Created on: Jul 21, 2022
 *      Author: HP
 */
#include <iostream>
using namespace std;
#include "BaseEvent.h"
#include "HardwareSendPacket.h"

HardwareSendPacket::HardwareSendPacket() {
	// TODO Auto-generated constructor stub
	periority =High;
}

HardwareSendPacket::~HardwareSendPacket() {
	// TODO Auto-generated destructor stub
}

void HardwareSendPacket::executeEvent() {
	BaseEvent::setupHardware();
	cout<<"HardwareSendPacket is Executing\n";
}
