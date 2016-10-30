/*
 * PostState.cpp
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#include "PostState.h"

PostState::PostState() {
	// TODO Auto-generated constructor stub

}

PostState::~PostState() {
	// TODO Auto-generated destructor stub
}

void PostState::Handle(Request* request) {
	request->current_state = this;
	cout<<"post state"<<endl;
}
