/*
 * database.h
 *
 *  Created on: 2016年10月19日
 *      Author: JSS
 */

#ifndef PATTERN_FACTORY_METHOD_DATABASE_H_
#define PATTERN_FACTORY_METHOD_DATABASE_H_

#include <iostream>
using namespace std;

class database {
public:
	database();
	virtual ~database();

	virtual void display() = 0;
};

#endif /* PATTERN_FACTORY_METHOD_DATABASE_H_ */
