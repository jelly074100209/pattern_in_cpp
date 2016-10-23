/*
 * Context.h
 *
 *  Created on: 2016年10月23日
 *      Author: Cherish
 */

#ifndef PATTERN_EXPRESSION_CONTEXT_H_
#define PATTERN_EXPRESSION_CONTEXT_H_

#include <iostream>
#include <string>
#include <map>
using namespace std;

class Context {
private:
	map<string, int> valueMap;
public:
	Context();
	virtual ~Context();
	void addValue(string key, int value);
	int getValue(string key);
};

#endif /* PATTERN_EXPRESSION_CONTEXT_H_ */
