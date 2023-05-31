//
// Created by jelly on 2023/5/27.
//
#include <iostream>
#include "AbstractFactory.h"
#include "ConcreteFactory1.h"
using namespace std;


int main() {
    /**
	 * 抽象工厂
	 * 提供一个创建一系列相关或相互依赖对象的接口，而无需指定它们具体的类（里氏替换原则）
	 * 适用性
	 *   一个系统要独立于它的产品的创建、组合和表示时
	 *   一个系统要由多个产品系列中的一个来配置时
	 *   当你要强调一系列相关的产品对象的设计以便进行联合使用时
	 *   当你提供一个产品类库，而只想显示它们的接口而不是实现时
	 */
    shared_ptr<AbstractFactory> factory(new ConcreteFactory1()); // 工厂1是专门生产1型产品
    shared_ptr<AbstractProductA> productA1 = factory->CreateProductA(); // 这里实际生产了A1
    shared_ptr<AbstractProductB> productB1 = factory->CreateProductB(); // 这里实际生产了B1
    // 以上并不需要直接调用A或B的类，只需要调用其抽象类即可
    productA1->display(); // 这里实际是接口的调用
    productB1->display(); // 同上
    return 0;
}