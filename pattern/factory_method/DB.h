/*
 * DB.h
 *
 *  Created on: 2016年10月19日
 *      Author: JSS
 */

#ifndef PATTERN_FACTORY_METHOD_DB_H_
#define PATTERN_FACTORY_METHOD_DB_H_

#include "database.h"

class DB {
private:
	database *db;
public:
	DB();
	virtual ~DB();
	virtual database* createDB() = 0;
};

#endif /* PATTERN_FACTORY_METHOD_DB_H_ */
