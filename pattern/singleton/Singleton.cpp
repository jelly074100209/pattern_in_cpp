/*
 * Singleton.cpp
 *
 *  Created on: 2016年10月17日
 *      Author: JSS
 */

#include "Singleton.h"
std::shared_ptr<Singleton> Singleton::_instance = nullptr;

Singleton::Singleton() {
	std::cout<<"Singleton() called"<<std::endl;
}

Singleton::~Singleton() {
	std::cout<<"~Singleton() called"<<std::endl;
}

std::shared_ptr<Singleton> Singleton::getInstance() {
	if (_instance == nullptr) {
		_instance = std::make_shared<Singleton>();
	}
	return _instance;
}

void Singleton::display() {
    std::cout<<"singleton display"<<std::endl;
}
