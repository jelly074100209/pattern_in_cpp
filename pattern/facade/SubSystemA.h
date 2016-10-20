/*
 * SubSystemA.h
 *
 *  Created on: 2016年10月20日
 *      Author: JSS
 */

#ifndef PATTERN_FACADE_SUBSYSTEMA_H_
#define PATTERN_FACADE_SUBSYSTEMA_H_
#include <iostream>
using namespace std;

class SubSystemA {
public:
	SubSystemA();
	virtual ~SubSystemA();
	void show() { cout<<"showA"<<endl;}
};

#endif /* PATTERN_FACADE_SUBSYSTEMA_H_ */
