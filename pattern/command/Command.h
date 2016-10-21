/*
 * Command.h
 *
 *  Created on: 2016年10月21日
 *      Author: JSS
 */

#ifndef PATTERN_COMMAND_COMMAND_H_
#define PATTERN_COMMAND_COMMAND_H_

class Command {
public:
	Command();
	virtual ~Command();
	virtual void Execute() = 0;
};

#endif /* PATTERN_COMMAND_COMMAND_H_ */
