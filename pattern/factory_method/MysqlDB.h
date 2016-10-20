/*
 * MysqlDB.h
 *
 *  Created on: 2016年10月19日
 *      Author: JSS
 */

#ifndef PATTERN_FACTORY_METHOD_MYSQLDB_H_
#define PATTERN_FACTORY_METHOD_MYSQLDB_H_

#include "DB.h"
#include "mysql.h"

class MysqlDB: public DB {
public:
	MysqlDB();
	virtual ~MysqlDB();
	virtual database* createDB();
};

#endif /* PATTERN_FACTORY_METHOD_MYSQLDB_H_ */
