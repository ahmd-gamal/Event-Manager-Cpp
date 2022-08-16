/*
 * comparator.cpp
 *
 *  Created on: Jul 21, 2022
 *      Author: HP
 */
#include <iostream>
using namespace std;
#include "BaseEvent.h"
#include "comparator.h"

comparator::comparator() {
	// TODO Auto-generated constructor stub

}

comparator::~comparator() {
	// TODO Auto-generated destructor stub
}

bool comparator::operator()(BaseEvent* ob1 ,BaseEvent* ob2 ){
		return ob1 ->getPeriority() < ob2->getPeriority();
	}
