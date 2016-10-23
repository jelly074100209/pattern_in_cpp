/*
 * Caretaker.cpp
 *
 *  Created on: 2016年10月23日
 *      Author: JSS
 */

#include "Caretaker.h"

Caretaker::Caretaker() {
	// TODO Auto-generated constructor stub

}

Caretaker::~Caretaker() {
	// TODO Auto-generated destructor stub
}

Memento* Caretaker::getMemento() {
	return memento;
}

void Caretaker::setMemento(Memento* memento) {
	this->memento = memento;
}
