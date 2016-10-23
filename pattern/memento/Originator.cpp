/*
 * Originator.cpp
 *
 *  Created on: 2016年10月23日
 *      Author: JSS
 */

#include "Originator.h"

Originator::Originator() {
	// TODO Auto-generated constructor stub
	state = 0;
}

Originator::~Originator() {
	// TODO Auto-generated destructor stub
}

void Originator::SetMemento(Memento* m) {
	this->setState(m->GetState());
}

Memento* Originator::CreateMeneto() {
	return new Memento(this->state);
}

int Originator::getState() {
	return state;
}

void Originator::setState(int state) {
	this->state = state;
}
