/*
 * SystemSleep.h
 *
 *  Created on: Jul 21, 2022
 *      Author: HP
 */

#ifndef SYSTEMSLEEP_H_
#define SYSTEMSLEEP_H_

class BaseEvent;

class SystemSleep : public BaseEvent {
public:
	SystemSleep();
	virtual ~SystemSleep();
	void executeEvent() override;
};

#endif /* SYSTEMSLEEP_H_ */
