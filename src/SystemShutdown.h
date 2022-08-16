/*
 * SystemShutdown.h
 *
 *  Created on: Jul 21, 2022
 *      Author: HP
 */

#ifndef SYSTEMSHUTDOWN_H_
#define SYSTEMSHUTDOWN_H_

class BaseEvent;


class SystemShutdown : public BaseEvent{
public:
	SystemShutdown();
	virtual ~SystemShutdown();
	void executeEvent() override;
};

#endif /* SYSTEMSHUTDOWN_H_ */
