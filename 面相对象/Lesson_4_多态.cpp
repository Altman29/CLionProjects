//
// Created by edy on 2022/7/11.
//

#include "Lesson_4_多态.h"

/*
 * 多态按字面的意思就是多种形态。当类之间存在层次结构，并且类之间是通过继承关联时，就会用到多态。
 * C++多态意味着调用成员函数时，会根据调用函数的类型来执行不同的函数。
 * 下面示例，基类Shape被派生为来个类，如下所示
 */
#include <iostream>

using namespace std;

class Shape2 {
protected:
    int width, height;
public:
    Shape2(int a = 0, int b = 0) {
        width = a;
        height = b;
    }

    virtual int area() {
        cout << "Parent class area: " << endl;
        return 0;
    }
};

class Rectangle2 : public Shape2 {
public:
    Rectangle2(int a = 0, int b = 0) : Shape2(a, b) {}

    int area() {
        cout << "Rectangle class area: " << endl;
        return width * height;
    }
};

class Triangle2 : public Shape2 {
public:
    Triangle2(int a = 0, int b = 0) : Shape2(a, b) {}

    int area() {
        cout << "Triangle class area: " << endl;
        return width * height / 2;
    }
};

int main172292() {
    Shape2 *shape;
    Rectangle2 rec(10, 7);
    Triangle2 tri(10, 5);

    //存储矩形的地址
    shape = &rec;
    //调用矩形的求面积函数area
    shape->area();

    //存储三角形的地址
    shape = &tri;
    //调用三角形的求面积函数area
    shape->area();

    return 0;

    /*
     * >>>
     * Parent class area:
     * Parent class area:
     */
}

/*
 * 没有达到预期，导致错误输出的原因是,调用函数area()被编译器设置为基类中的版本，
 * 这就是所谓的静态多态，或静态链接-函数调用在程序执行前就准备好了。
 * 有时候这也被称为 早绑定 ，因为area()函数在程序编译期间就已经设置好了。
 * 但现在，稍作修改，在Shape类中，area()函数声明前放置关键字virtual.
 *
 * >>>
 * Rectangle class area:
 * Triangle class area:
 *
 *
 * 此时，编译器看的是指针的内容，而不是它的类型。
 * 因此，由于tri和rec类的对象的地址存储在shape中，所以会调用各自的area()函数。
 * 正如所看到的，每个子类都有一个函数area()的独立实现。这就是多态的一般使用方式。
 * 有了多态，你可以有多个不同的类，都带有同一个名称，但具有不同实现的函数，函数的参数甚至可以是相同的。
 */


/*
 * 虚函数
 * 虚函数是在基类中使用关键字virtual声明的函数。
 * 在派生类中重新定义基类中定义的虚函数时，会告诉编译器不要静态链接到该函数。
 * 我们想要的是在程序中任意点可以根据调用的对象类型来选择调用的函数，这种操作被称为动态链接，或后期绑定。
 */

/*
 * 纯虚函数
 * 有可能想要在基类中定义虚函数，以便在派生类中重新定义该函数更好地适用于对象，但是你在基类中又不能对虚函数
 * 给出有意义的实现，这个时候就会用到 纯虚函数。
 * 可以把基类中虚函数area()改写如下：
 *
 * //pure virtual function
 * virtual int area() = 0;
 *
 * = 0 告诉编译器，函数没有主体，上面的 虚函数 是 纯虚函数。
 */