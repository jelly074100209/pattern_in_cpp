/*
 * Composite.cpp
 *
 *  Created on: 2016年10月20日
 *      Author: JSS
 */

#include "Composite.h"

Composite::Composite() {
	// TODO Auto-generated constructor stub

}

Composite::~Composite() {
	// TODO Auto-generated destructor stub
}

void Composite::Add(Component* c) {
	this->m_ComVec.push_back(c);
}

void Composite::Remove(Component* c) {
	//this->m_ComVec.erase(this->m_ComVec.end());
	this->m_ComVec.pop_back();
}

void Composite::Operation() {
	cout<<"Composite::Operation"<<endl;
	vector<Component*>::iterator iter = this->m_ComVec.begin();
	for(; iter!=this->m_ComVec.end(); iter++) {
		(*iter)->Operation();
	}
}

Component* Composite::GetChild(int index) {
	if (index<0 || index>(int)this->m_ComVec.size()) {
		return NULL;
	}
	return this->m_ComVec[index];
}
