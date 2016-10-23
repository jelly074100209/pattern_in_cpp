/*
 * Expression.h
 *
 *  Created on: 2016年10月23日
 *      Author: jss
 */

#ifndef PATTERN_EXPRESSION_EXPRESSION_H_
#define PATTERN_EXPRESSION_EXPRESSION_H_

#include <iostream>
#include <string>
using namespace std;

class Expression {
public:
	Expression();
	virtual ~Expression();
	virtual bool interpret(string context) = 0;
};

#endif /* PATTERN_EXPRESSION_EXPRESSION_H_ */
