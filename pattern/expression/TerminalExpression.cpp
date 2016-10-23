/*
 * TerminalExpression.cpp
 *
 *  Created on: 2016年10月23日
 *      Author: jss
 */

#include "TerminalExpression.h"

TerminalExpression::TerminalExpression(string data) {
	// TODO Auto-generated constructor stub
	this->data = data;
}

TerminalExpression::~TerminalExpression() {
	// TODO Auto-generated destructor stub
}

bool TerminalExpression::TerminalExpression(string context) {
	if (context.find(data)) {
		return true;
	} else {
		return false;
	}
}

