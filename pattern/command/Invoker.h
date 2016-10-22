/*
 * Invoker.h
 *
 *  Created on: 2016年10月22日
 *      Author: Cherish
 */

#ifndef PATTERN_COMMAND_INVOKER_H_
#define PATTERN_COMMAND_INVOKER_H_

#include <vector>
#include "Command.h"
using namespace std;
class Invoker {
public:
	Invoker();
	virtual ~Invoker();
	void setCommand(Command *cmd);
	void Notify();
protected:
	vector<Command*> cmd_list;
};

#endif /* PATTERN_COMMAND_INVOKER_H_ */
