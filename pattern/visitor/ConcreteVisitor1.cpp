/*
 * ConcreteVisitor1.cpp
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#include "ConcreteVisitor1.h"

ConcreteVisitor1::ConcreteVisitor1() {
	// TODO Auto-generated constructor stub

}

ConcreteVisitor1::~ConcreteVisitor1() {
	// TODO Auto-generated destructor stub
}

void ConcreteVisitor1::VisitConcreteElementA(Element* concreteElementA) {
	cout<<"concreteElementA is visited by visitor 1"<<endl;
}

void ConcreteVisitor1::VisitConcreteElementB(Element* concreteElementB) {
	cout<<"concreteElementB is visited by visitor 1"<<endl;
}
