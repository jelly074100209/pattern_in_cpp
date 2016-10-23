/*
 * TerminalExpression.cpp
 *
 *  Created on: 2016年10月23日
 *      Author: jss
 */

#include "TerminalExpression.h"

TerminalExpression::TerminalExpression(int i) {
	// TODO Auto-generated constructor stub
	this->i = i;
}

TerminalExpression::~TerminalExpression() {
	// TODO Auto-generated destructor stub
}

int TerminalExpression::interpret(Context* context) {
	return this->i;
}

