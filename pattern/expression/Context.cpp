/*
 * Context.cpp
 *
 *  Created on: 2016年10月23日
 *      Author: Cherish
 */

#include "Context.h"

Context::Context() {
	// TODO Auto-generated constructor stub

}

Context::~Context() {
	// TODO Auto-generated destructor stub
}

void Context::addValue(string key, int value) {
	valueMap.insert(pair<string, int>(key, value));
}

int Context::getValue(string key) {
	return valueMap[key];
}
