/*
 * Singleton.cpp
 *
 *  Created on: 2016年10月17日
 *      Author: JSS
 */

#include "Singleton.h"
#ifndef NULL
const int NULL = 0;
#endif

Singleton* Singleton::_instance = NULL;

Singleton::Singleton() {
	// TODO Auto-generated constructor stub
}

Singleton::~Singleton() {
	// TODO Auto-generated destructor stub
}

Singleton* Singleton::getInstance() {
	if (_instance == 0) {
		_instance = new Singleton();
	}
	return _instance;
}
