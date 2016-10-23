/*
 * Originator.h
 *
 *  Created on: 2016年10月23日
 *      Author: JSS
 */

#ifndef PATTERN_MEMENTO_ORIGINATOR_H_
#define PATTERN_MEMENTO_ORIGINATOR_H_

#include "Memento.h"

class Originator {
public:
	Originator();
	virtual ~Originator();
	void SetMemento(Memento *m);
	Memento* CreateMeneto();
	void setState(int state);
	int getState();
protected:
	int state;
};

#endif /* PATTERN_MEMENTO_ORIGINATOR_H_ */
