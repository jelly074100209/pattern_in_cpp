/*
 * Caretaker.h
 *
 *  Created on: 2016年10月23日
 *      Author: JSS
 */

#ifndef PATTERN_MEMENTO_CARETAKER_H_
#define PATTERN_MEMENTO_CARETAKER_H_

#include "Memento.h"

class Caretaker {
private:
	Memento* memento;
public:
	Caretaker();
	virtual ~Caretaker();
	Memento* getMemento();
	void setMemento(Memento* memento);
};

#endif /* PATTERN_MEMENTO_CARETAKER_H_ */
