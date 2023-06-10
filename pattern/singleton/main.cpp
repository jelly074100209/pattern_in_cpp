//
// Created by jelly on 2023/5/31.
//
#include <iostream>
#include "Singleton.h"

int main() {
    /**
	 * 单例模式
	 * 保证类只有一个实例，并提供一个访问它的全局访问点
	 * 适用性
	 *   当类只能有一个实例而且客户可以从一个众所周知的访问点访问它时
	 *   当这个唯一实例应该是通过子类化可扩展的，并且客户应该无需更改代码就能使用一个扩展的实例时
	 */
    std::shared_ptr<Singleton> singleton = Singleton::getInstance();
    singleton->display();
}