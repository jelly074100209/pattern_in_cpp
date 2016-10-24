/*
 * ConcreteVisitor2.cpp
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#include "ConcreteVisitor2.h"

ConcreteVisitor2::ConcreteVisitor2() {
	// TODO Auto-generated constructor stub

}

ConcreteVisitor2::~ConcreteVisitor2() {
	// TODO Auto-generated destructor stub
}

void ConcreteVisitor2::VisitConcreteElementA(Element* concreteElementA) {
	cout<<"concreteElementA is visited by visitor 2"<<endl;
}

void ConcreteVisitor2::VisitConcreteElementB(Element* concreteElementB) {
	cout<<"concreteElementB is visited by visitor 2"<<endl;
}
