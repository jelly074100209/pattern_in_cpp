/*
 * MongoDB.cpp
 *
 *  Created on: 2016年10月19日
 *      Author: JSS
 */

#include "MongoDBInterface.h"

MongoDBInterface::MongoDBInterface() {
	// TODO Auto-generated constructor stub

}

MongoDBInterface::~MongoDBInterface() {
	// TODO Auto-generated destructor stub
}

database* MongoDBInterface::createDB() {
	return new mongo();
}
