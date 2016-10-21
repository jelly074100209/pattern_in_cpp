/*
 * ConcreteCommand.h
 *
 *  Created on: 2016年10月21日
 *      Author: JSS
 */

#ifndef PATTERN_COMMAND_CONCRETECOMMANDA_H_
#define PATTERN_COMMAND_CONCRETECOMMANDA_H_

#include "Command.h"

class ConcreteCommandA: public Command {
public:
	ConcreteCommandA();
	virtual ~ConcreteCommandA();
	virtual void Execute();
};

#endif /* PATTERN_COMMAND_CONCRETECOMMANDA_H_ */
