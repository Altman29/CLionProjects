//
// Created by edy on 2022/6/30.
//

/**
 * 基本的内置类型
 * C++提供了丰富的内置数据类型和用户自定义的数据类型。下面是其中基本的C++数据类型：
 * 布尔型      bool
 * 字符型      char
 * 整型        int
 * 浮点型      float
 * 双浮点型    double
 * 无类型      void
 * 宽字符型    wchar_t
 *
 * 其实 wchar_t 是这样来的： typedef short int wchar_t;
 * 所以 wchar_t 实际上的空间和 short int 一样。
 * 一些基本类型可以使用一个或多个类型修饰符进行修饰：
 * signed
 * unsigned
 * short
 * long
 *
 * 注意：不同系统会有所差异，一字节为8位。
 * 注意：默认情况下，int、short、long都是带符号的，即signed。
 * 注意：long int 8个字节。int 4个字节。
 * 下面实例会输出您电脑上各种数据类型的大小。
 */

#include "Lesson_3_数据类型.h"

int main3() {
    cout << "type: \t\t" << "************size**************" << endl;
    cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);
    cout << "\t最大值：" << (numeric_limits<bool>::max)();
    cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;
    cout << "char: \t\t" << "所占字节数：" << sizeof(char);
    cout << "\t最大值：" << (numeric_limits<char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;
    cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);
    cout << "\t最大值：" << (numeric_limits<signed char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;
    cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);
    cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;
    cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
    cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;
    cout << "short: \t\t" << "所占字节数：" << sizeof(short);
    cout << "\t最大值：" << (numeric_limits<short>::max)();
    cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;
    cout << "int: \t\t" << "所占字节数：" << sizeof(int);
    cout << "\t最大值：" << (numeric_limits<int>::max)();
    cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
    cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);
    cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;
    cout << "long: \t\t" << "所占字节数：" << sizeof(long);
    cout << "\t最大值：" << (numeric_limits<long>::max)();
    cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;
    cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);
    cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;
    cout << "double: \t" << "所占字节数：" << sizeof(double);
    cout << "\t最大值：" << (numeric_limits<double>::max)();
    cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;
    cout << "long double: \t" << "所占字节数：" << sizeof(long double);
    cout << "\t最大值：" << (numeric_limits<long double>::max)();
    cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;
    cout << "float: \t\t" << "所占字节数：" << sizeof(float);
    cout << "\t最大值：" << (numeric_limits<float>::max)();
    cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;
    cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();
    cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;
    cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;
    // << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;
    cout << "type: \t\t" << "************size**************" << endl;
    return 0;
}

/**
 * 其中，endl 将在行后插入一个换行符。
 * 其中，<< 运算符用于向屏幕传多个值。
 * 其中，sizeOf()函数用来获取各种数据类型的大小。
 */

/**
* typedef 声明
 * 可以使用 typedef 为一个已有的类型取一个新的名字。例如，typedef int feet;
 * 现在之后的声明是完全合法的，它创建了一个整型变量distance: feet distance;
 *
 * 枚举类型
 * 枚举类型(enumeration)是C++中一种派生数据类型，它是由用户定义的若干枚举常量的集合。
 * 如果一个变量只有几种可能的值，可以定义枚举(enumeration)类型。所谓"枚举"是指将变量的值一一列举出来，变量的值只能在
 * 列举出来的值的范围内。
 * 创建枚举，需要使用关键字enum，枚举类型的一般形式如下：
 *
 * 如果枚举没有像下面那样初始化，即省掉"=整型常数"时，则从第一个标识符开始值为0，之后为1，之后为2，以此类推。
 * 但是也可以给某一个赋予特殊的值，比如green=5，那么blue值为6，因为每个名称都比前面大1，但red值仍为0；
*/

enum color {
    red = 0, green = 1, blue = 2
} c;


void fun1() {
    c = red;
}
