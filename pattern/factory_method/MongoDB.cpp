/*
 * MongoDB.cpp
 *
 *  Created on: 2016年10月19日
 *      Author: JSS
 */

#include "MongoDB.h"

MongoDB::MongoDB() {
	// TODO Auto-generated constructor stub

}

MongoDB::~MongoDB() {
	// TODO Auto-generated destructor stub
}

database* MongoDB::createDB() {
	return new mongo();
}
