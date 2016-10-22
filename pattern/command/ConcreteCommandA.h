/*
 * ConcreteCommand.h
 *
 *  Created on: 2016年10月21日
 *      Author: JSS
 */

#ifndef PATTERN_COMMAND_CONCRETECOMMANDA_H_
#define PATTERN_COMMAND_CONCRETECOMMANDA_H_

#include "Command.h"
#include "Receiver.h"

class ConcreteCommandA: public Command {
public:
	ConcreteCommandA(Receiver* pReceiver);
	ConcreteCommandA();
	virtual ~ConcreteCommandA();
	virtual void Execute();
private:
	Receiver* _recv;
};

#endif /* PATTERN_COMMAND_CONCRETECOMMANDA_H_ */
