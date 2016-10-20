/*
 * Facade.cpp
 *
 *  Created on: 2016年10月20日
 *      Author: JSS
 */

#include "Facade.h"

Facade::Facade() {
	// TODO Auto-generated constructor stub

}

Facade::~Facade() {
	// TODO Auto-generated destructor stub
}

void Facade::MethodA() {
	SubSystemA subA;
	SubSystemB subB;
	subA.show();
	subB.show();
}

void Facade::MethodB() {
	SubSystemC subC;
	SubSystemD subD;
	subC.show();
	subD.show();
}
