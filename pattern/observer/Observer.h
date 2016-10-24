/*
 * Observer.h
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#ifndef PATTERN_OBSERVER_OBSERVER_H_
#define PATTERN_OBSERVER_OBSERVER_H_

#include <iostream>
#include <string>

using namespace std;
class Observer {
public:
	Observer();
	virtual ~Observer();
	virtual void Update() = 0;
};

#endif /* PATTERN_OBSERVER_OBSERVER_H_ */
