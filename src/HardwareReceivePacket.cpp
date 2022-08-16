/*
 * HardwareReceivePacket.cpp
 *
 *  Created on: Jul 21, 2022
 *      Author: HP
 */
#include <iostream>
using namespace std;
#include "BaseEvent.h"
#include "HardwareReceivePacket.h"

HardwareReceivePacket::HardwareReceivePacket() {
	// TODO Auto-generated constructor stub
	periority =Low;
}

HardwareReceivePacket::~HardwareReceivePacket() {
	// TODO Auto-generated destructor stub
}

void HardwareReceivePacket::executeEvent() {
	BaseEvent::setupHardware();
	cout<<"HardwareReceivePacket is Executing\n";
}
