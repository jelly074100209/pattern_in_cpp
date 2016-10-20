/*
 * MongoDB.h
 *
 *  Created on: 2016年10月19日
 *      Author: JSS
 */

#ifndef PATTERN_FACTORY_METHOD_MONGODB_H_
#define PATTERN_FACTORY_METHOD_MONGODB_H_

#include "DB.h"
#include "mongo.h"
class MongoDB: public DB {
public:
	MongoDB();
	virtual ~MongoDB();
	virtual database* createDB();
};

#endif /* PATTERN_FACTORY_METHOD_MONGODB_H_ */
