/*
 * Subjector.h
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#ifndef PATTERN_OBSERVER_SUBJECTOR_H_
#define PATTERN_OBSERVER_SUBJECTOR_H_

#include <iostream>
#include <algorithm>
#include <list>
#include "Observer.h"
using namespace std;

class Subjector {
public:
	Subjector();
	virtual ~Subjector();
	void Attach(Observer*);
	void Detach(Observer*);
	void Notify();
protected:
	list<Observer*> observer_list;
};

#endif /* PATTERN_OBSERVER_SUBJECTOR_H_ */
