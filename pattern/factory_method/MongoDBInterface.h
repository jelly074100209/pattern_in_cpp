/*
 * MongoDB.h
 *
 *  Created on: 2016年10月19日
 *      Author: JSS
 */

#ifndef PATTERN_FACTORY_METHOD_MONGODB_H_
#define PATTERN_FACTORY_METHOD_MONGODB_H_

#include "DBInterface.h"
#include "mongo.h"
class MongoDBInterface: public DBInterface {
public:
	MongoDBInterface();
	virtual ~MongoDBInterface();
	virtual database* createDB();
};

#endif /* PATTERN_FACTORY_METHOD_MONGODB_H_ */
