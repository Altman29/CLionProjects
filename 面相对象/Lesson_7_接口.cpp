//
// Created by edy on 2022/7/11.
//

#include "Lesson_7_接口.h"

/*
 * C++接口(抽象类)
 * 接口描述了类的行为和功能，而不需要完成类的特定实现。
 * C++接口是使用抽象类来实现的，抽象类与数据抽象互补混淆，数据抽象是把实现细节与相关的数据分离开的概念。
 * 如果类中至少有一个函数声明为纯虚函数，则这个类就是抽象类。
 * 纯虚函数是通过在声明中使用 "=0"来指定的。如下所示：
 *
 * class Box{
 * public:
 *      //纯虚函数
 *      virtual double gerVolume() = 0;
 * private:
 *      double length;//长度
 *      double width;//宽度
 *      double height;//高度
 * }
 *
 * 设计抽象类(通常称为ABC)的目的，是为了给其他类提供一个可以继承的适当的基类。
 * 抽象类不能被用于实例化对象，它只能作为接口使用。
 * 如果试图实例化一个抽象类的对象，会导致编译错误。
 * 因此，如果一个ABC的子类，则必须实现每一个虚函数，这也意味着C++支持使用ABC声明接口。
 * 如果没有在派生类重新纯虚函数，就尝试实例化该对象，会导致编译错误。
 * 可用于实例化对象的类被称为具体类。
 */

/*
 * 抽象类示例
 */
#include <iostream>

using namespace std;

//基类
class Shape3 {
protected:
    int width, height;
public:
    virtual int getArea() = 0;

    void setWidth(int w) {
        width = w;
    }

    void setHeight(int h) {
        height = h;
    }
};

//派生类
class Rectangle3 : public Shape3 {
public:
    int getArea() override {
        return width * height;
    }
};

class Triangle3 : public Shape3 {
public:
    int getArea() override {
        return width * height / 2;
    }
};

int main183123() {
    Rectangle3 rect;
    Triangle3 tri;

    rect.setWidth(5);
    rect.setHeight(7);
    //输出面积
    cout << "Total Rectangle area: " << rect.getArea() << endl;

    tri.setWidth(5);
    tri.setHeight(7);
    //输出面积
    cout << "Total Triangle area: " << tri.getArea() << endl;

    return 0;
}