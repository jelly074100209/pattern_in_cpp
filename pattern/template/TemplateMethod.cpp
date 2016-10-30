/*
 * TemplateMethod.cpp
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#include "TemplateMethod.h"

TemplateMethod::TemplateMethod() {
	// TODO Auto-generated constructor stub

}

TemplateMethod::~TemplateMethod() {
	// TODO Auto-generated destructor stub
}

void TemplateMethod::TemplateAlgorithm() {
	cout<<"beginning of template method"<<endl;
	this->PrimitiveOperation1();
	this->PrimitiveOperation2();
	cout<<"ending of template method"<<endl;
}
