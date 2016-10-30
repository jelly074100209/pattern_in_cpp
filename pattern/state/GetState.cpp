/*
 * GetState.cpp
 *
 *  Created on: 2016年10月24日
 *      Author: JSS
 */

#include "GetState.h"

GetState::GetState() {
	// TODO Auto-generated constructor stub

}

GetState::~GetState() {
	// TODO Auto-generated destructor stub
}

void GetState::Handle(Request* request) {
	request->current_state = new PostState();
	cout<<"get state"<<endl;
}
