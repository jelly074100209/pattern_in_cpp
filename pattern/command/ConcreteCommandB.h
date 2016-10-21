/*
 * ConcreteCommandB.h
 *
 *  Created on: 2016年10月21日
 *      Author: JSS
 */

#ifndef PATTERN_COMMAND_CONCRETECOMMANDB_H_
#define PATTERN_COMMAND_CONCRETECOMMANDB_H_

#include "Command.h"

class ConcreteCommandB: public Command {
public:
	ConcreteCommandB();
	virtual ~ConcreteCommandB();
	virtual void Execute();
};

#endif /* PATTERN_COMMAND_CONCRETECOMMANDB_H_ */
