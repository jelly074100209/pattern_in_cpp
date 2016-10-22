/*
 * ConcreteCommandB.h
 *
 *  Created on: 2016年10月21日
 *      Author: JSS
 */

#ifndef PATTERN_COMMAND_CONCRETECOMMANDB_H_
#define PATTERN_COMMAND_CONCRETECOMMANDB_H_

#include "Command.h"
#include "Receiver.h"

class ConcreteCommandB: public Command {
public:
	ConcreteCommandB();
	ConcreteCommandB(Receiver* pReceiver);
	virtual ~ConcreteCommandB();
	virtual void Execute();
private:
	Receiver* _recv;
};

#endif /* PATTERN_COMMAND_CONCRETECOMMANDB_H_ */
