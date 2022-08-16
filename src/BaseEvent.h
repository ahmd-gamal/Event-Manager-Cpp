/*
 * BaseEvent.h
 *
 *  Created on: Jul 21, 2022
 *      Author: HP
 */

#ifndef BASEEVENT_H_
#define BASEEVENT_H_
#define High    3
#define Medium  2
#define Low     1

//abstract class
class BaseEvent {
protected:
	int periority;
public:
	BaseEvent();
	virtual ~BaseEvent();

	virtual void executeEvent()=0;//pure virtual function

	void setupHardware();
	void setupSystem();
	int getPeriority() const;
};

#endif /* BASEEVENT_H_ */
