//
// Created by edy on 2022/7/5.
//

#include "Lesson_7_修饰符.h"

/*
 * C++允许在char、int、double数据类型前放置修饰符。修饰符用于改变基本类型的含义，更能满足各种情境的需求。
 * 以下是数据类型修饰符：
 * singed
 * unsigned
 * long
 * short
 * 修饰符signed、unsigned、long和short可应用于整型，signed和unsigned可应用于字符行、long可应用于双精度型。
 * 修饰符signed、unsigned也可以左右long和short修饰符的前缀。例如：unsigned long int。
 * C++允许使用速记符号来声明无符号短整数或无符号长整数。可以不写int只写单词unsigned、short或long，int是隐含的。
 * 例如下面俩个语句都是声明了无符号整型变量：
 * unsigned x;
 * unsigned int y;
 *
 * 为了理解C++解释有符号和无符号修饰符之间的区别，来运行一下这个短程序：
 */

//这个程序演示了有符号和无符号整数之间的差别
int main1431() {
    short int i;            //有符号短整数
    short unsigned int j;   //无符号短整数

    j = 50000;
    i = j;

    cout << i << " " << j;
    return 0;
    /**
     * >>>
     * -15536 50000
     * 上述结果中，无符号短整数50000的位模式被解释为有符号短整数-15536.
     */
}

/*
 * C++中的类型限定符
 * 类型限定符提供了变量的额外信息：
 * const    在程序执行期间不能被修改改变。
 * volatile 告诉编译器不需要优化volatile声明的变量，让程序可以直接从内存中读取变量。对于一般的变量编译器对变量
 *          进行优化，将内存中的变量值放在寄存器中以加快读写效率。
 * restrict 由restrict修饰的指针是唯一一种访问它所指向的对象的方式。只有C99增加了新的类型限定符restrict。
 */