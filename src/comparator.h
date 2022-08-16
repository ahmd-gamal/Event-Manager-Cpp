/*
 * comparator.h
 *
 *  Created on: Jul 21, 2022
 *      Author: HP
 */

#ifndef COMPARATOR_H_
#define COMPARATOR_H_
class BaseEvent;
class comparator {
public:
	comparator();
	virtual ~comparator();
	bool operator()(BaseEvent* ob1 ,BaseEvent* ob2 );
};

#endif /* COMPARATOR_H_ */
