/*
 * mysql.h
 *
 *  Created on: 2016年10月19日
 *      Author: JSS
 */

#ifndef PATTERN_FACTORY_METHOD_MYSQL_H_
#define PATTERN_FACTORY_METHOD_MYSQL_H_

#include "database.h"

class mysql: public database {
public:
	mysql();
	virtual ~mysql();
	virtual void display();
};

#endif /* PATTERN_FACTORY_METHOD_MYSQL_H_ */
