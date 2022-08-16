/*
 * SystemWakeup.h
 *
 *  Created on: Jul 21, 2022
 *      Author: HP
 */

#ifndef SYSTEMWAKEUP_H_
#define SYSTEMWAKEUP_H_

class BaseEvent;
class SystemWakeup: public BaseEvent {
public:
	SystemWakeup();
	virtual ~SystemWakeup();
	void executeEvent() override;
};

#endif /* SYSTEMWAKEUP_H_ */
