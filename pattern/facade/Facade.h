/*
 * Facade.h
 *
 *  Created on: 2016年10月20日
 *      Author: JSS
 */

#ifndef PATTERN_FACADE_FACADE_H_
#define PATTERN_FACADE_FACADE_H_

#include <iostream>
#include <string>

#include "SubSystemA.h"
#include "SubSystemB.h"
#include "SubSystemC.h"
#include "SubSystemD.h"

using namespace std;

class Facade {
public:
	Facade();
	virtual ~Facade();

	void MethodA();
	void MethodB();
};

#endif /* PATTERN_FACADE_FACADE_H_ */
