/*
 * Subjector.cpp
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#include "Subjector.h"

Subjector::Subjector() {
	// TODO Auto-generated constructor stub

}

Subjector::~Subjector() {
	// TODO Auto-generated destructor stub
}

void Subjector::Attach(Observer* o) {
	this->observer_list.push_back(o);
}

void Subjector::Detach(Observer* o) {
	list<Observer*>::iterator iter;
	iter = find(observer_list.begin(), observer_list.end(), o);
	if (iter != observer_list.end()) {
		observer_list.erase(iter);
	}
	cout<<"Detach an Observer"<<endl;
}

void Subjector::Notify() {
	list<Observer*>::iterator iter;
	for(iter=observer_list.begin(); iter!=observer_list.end(); iter++) {
		(*iter)->Update();
	}
}
