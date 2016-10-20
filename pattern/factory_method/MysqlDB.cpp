/*
 * MysqlDB.cpp
 *
 *  Created on: 2016年10月19日
 *      Author: JSS
 */

#include "MysqlDB.h"

MysqlDB::MysqlDB() {
	// TODO Auto-generated constructor stub

}

MysqlDB::~MysqlDB() {
	// TODO Auto-generated destructor stub
}

database* MysqlDB::createDB() {
	return new mysql();
}
