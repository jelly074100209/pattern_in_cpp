/*
 * mongo.h
 *
 *  Created on: 2016年10月19日
 *      Author: JSS
 */

#ifndef PATTERN_FACTORY_METHOD_MONGO_H_
#define PATTERN_FACTORY_METHOD_MONGO_H_

#include "database.h"

class mongo: public database {
public:
	mongo();
	virtual ~mongo();
	virtual void display();
};

#endif /* PATTERN_FACTORY_METHOD_MONGO_H_ */
