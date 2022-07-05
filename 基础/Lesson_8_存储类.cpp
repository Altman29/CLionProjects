//
// Created by edy on 2022/7/5.
//

#include "Lesson_8_存储类.h"

/*
 * 存储类
 * 存储类定义C++程序中变量/函数的范围(可见性)和生命周期。这些说明符放置在他们所修饰的类型之前。
 * 以下是C++程序中可用的存储类：
 * auto
 * register
 * static
 * extern
 * mutable
 * 从C++17开始，auto关键字不再是C++存储类说明符，且register关键字被弃用。
 *
 * auto存储类
 * 从C++11一来，auto关键字用于俩种情况：
 * 声明变量时根据初始化表达式自动推断该变量的类型；
 * 声明函数时函数返回值的占位符；
 * 但由于使用极少且多余，C++17中已删除这一用法；
 *
 * register存储类
 * 用于定义存储在寄存器中而不是RAM(random-access memory，内存)中的局部变量。这意味着变量的最大尺寸等于寄存器的大小，
 * 且不能对它应用一元的'&'运算符(因为它没有内存位置)
 * 寄存器只用于需要快速访问的变量，比如计时器。还应注意的是，定义 'register' 并不意味着变量将被存储在寄存器中，
 * 它意味着变量可能存储在寄存器中，这取决于硬件和实现的限制。
 * c++17开始，该关键字也被弃用。
 *
 * static存储类
 * 指示编译器在程序的生命周期内保存局部变量的存在，而不需要在每次它进入和离开作用域时进行创建和销毁。因此，
 * 使用static修饰局部变量可以在函数调用直接保持局部变量的值。
 * 也可以应用于全局变量。当修饰全局变量时，会使变量的作用域限制在声明它的文件内。
 * 在C++中，当static用在类数据成员上时，会导致仅有一个该成员的副本被类的所有对象共享。
 * 示例如下：
 */

//函数声明
void func2();

//全局变量
static int _size = 10;

int main1506() {
    while (_size--) {
        //函数调用
        func2();
    }
    return 0;
}

//函数定义
void func2() {
    static int i = 5;
    i++;
    std::cout << "变量i为" << i;
    std::cout << " , 变量_size为" << _size << std::endl;
}


/*
 * extern存储类
 * 用于提供一个全局变量的引用，全局变量对所有程序文件都是可见的。当使用 'extern' 时，对于无法初始化的变量，会把变量名
 * 指向一个之前定义过的存储位置。
 * 当有多个文件时且定义了一个可以在其他文件中使用的全局变量或函数时，可以在其他文件中使用 extern 来得到已定义的变量或
 * 函数的引用。可以这么理解，extern 是用来在另一个文件中声明一个全局变量或函数。
 * extern修饰符通常用于当俩个或多个文件共享相同的全局变量或函数的时候，如下所示：
 */

#include <iostream>

int count1;

extern void write_extern();

int main8() {
    count1 = 5;
    write_extern();
}

/*
 * mutable存储类
 * 仅用于类的对象。它允许对象的成员替代常量，也就是说，mutable成员可以通过const成员函数修改。
 *
 *
 * thread_local存储类
 * 使用它声明的变量仅可以在其上创建的线程访问。变量在创建线程时创建，并在销毁时销毁。
 * 每个线程都有其自己的变量副本。
 * thread_local说明符可以与static或extern合并。
 * 可以将thread_local仅应用于数据声明和定义，thread_local不能用于函数声明或定义。
 *
 * thread_local int x; 命名空间下的全局变量
 *
 * class X{
 *  static thread_local std::string s; 类的static成员变量
 * };
 *
 * static thread_local std::string X::s; X::s是需要定义的
 *
 * void foo(){
 *  thread_local std::vector<int> v; 本地变量
 * }
 */