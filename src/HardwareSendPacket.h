/*
 * HardwareSendPacket.h
 *
 *  Created on: Jul 21, 2022
 *      Author: HP
 */

#ifndef HARDWARESENDPACKET_H_
#define HARDWARESENDPACKET_H_
class BaseEvent;

class HardwareSendPacket : public BaseEvent{
public:
	HardwareSendPacket();
	virtual ~HardwareSendPacket();

	void executeEvent() override;


};

#endif /* HARDWARESENDPACKET_H_ */
