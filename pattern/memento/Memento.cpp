/*
 * Memento.cpp
 *
 *  Created on: 2016年10月23日
 *      Author: JSS
 */

#include "Memento.h"

Memento::Memento(int state) {
	// TODO Auto-generated constructor stub
	this->state = state;
}

Memento::~Memento() {
	// TODO Auto-generated destructor stub
}

int Memento::GetState() {
	return state;
}

void Memento::SetState(int state) {
	this->state = state;
}
