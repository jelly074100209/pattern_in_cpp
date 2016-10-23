/*
 * Memento.h
 *
 *  Created on: 2016年10月23日
 *      Author: JSS
 */

#ifndef PATTERN_MEMENTO_MEMENTO_H_
#define PATTERN_MEMENTO_MEMENTO_H_

class Memento {
private:
	int state;
public:
	Memento(int state);

	virtual ~Memento();
	int GetState();
	void SetState(int state);
};

#endif /* PATTERN_MEMENTO_MEMENTO_H_ */
