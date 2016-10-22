/*
 * Invoker.cpp
 *
 *  Created on: 2016年10月22日
 *      Author: Cherish
 */

#include "Invoker.h"


Invoker::Invoker() {
	// TODO Auto-generated constructor stub

}

Invoker::~Invoker() {
	// TODO Auto-generated destructor stub
}

void Invoker::setCommand(Command *cmd) {
	cmd_list.push_back(cmd);
}

void Invoker::Notify() {
	//this->cmd->Execute();
	vector<Command*>::iterator iter;
	for(iter=cmd_list.begin(); iter!=cmd_list.end(); iter++) {
		(*iter)->Execute();
	}
}

