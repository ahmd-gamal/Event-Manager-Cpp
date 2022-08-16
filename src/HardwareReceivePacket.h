/*
 * HardwareReceivePacket.h
 *
 *  Created on: Jul 21, 2022
 *      Author: HP
 */

#ifndef HARDWARERECEIVEPACKET_H_
#define HARDWARERECEIVEPACKET_H_
class BaseEvent;

class HardwareReceivePacket : public BaseEvent {
public:
	HardwareReceivePacket();
	virtual ~HardwareReceivePacket();
	void executeEvent() override;
};

#endif /* HARDWARERECEIVEPACKET_H_ */
