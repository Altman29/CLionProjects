//
// Created by edy on 2022/7/5.
//

#include "Lesson_11_数字.h"

/*
 * 定义数字
 * 示例如下：
 */
#include <iostream>

using namespace std;

int main11() {
    // 数字定义
    short s;
    int i;
    long l;
    float f;
    double d;

    // 数字赋值
    s = 10;
    i = 1000;
    l = 1000000;
    f = 230.47;             //不需要后缀
    d = 30949.374;          //不需要后缀

    // 数字输出
    cout << "short  s :" << s << endl;
    cout << "int    i :" << i << endl;
    cout << "long   l :" << l << endl;
    cout << "float  f :" << f << endl;
    cout << "double d :" << d << endl;

    return 0;

    /*
    >>>
        short  s :10
        int    i :1000
        long   l :1000000
        float  f :230.47
        double d :30949.4
     */
}

/*
 * 数学运算
 * 在C++中，除了创建各种函数，还包含了各种有用的函数以供使用。这些函数写在标准的C和C++库中，叫做内置函数。
 * C++内置了丰富的数学函数，可对各种数字进行运算。
 * 为了能使用这些函数，需要引入数学头文件 <cmath>。
    1	double cos(double);
    该函数返回弧度角（double 型）的余弦。
    2	double sin(double);
    该函数返回弧度角（double 型）的正弦。
    3	double tan(double);
    该函数返回弧度角（double 型）的正切。
    4	double log(double);
    该函数返回参数的自然对数。
    5	double pow(double, double);
    假设第一个参数为 x，第二个参数为 y，则该函数返回 x 的 y 次方。
    6	double hypot(double, double);
    该函数返回两个参数的平方总和的平方根，也就是说，参数为一个直角三角形的两个直角边，函数会返回斜边的长度。
    7	double sqrt(double);
    该函数返回参数的平方根。
    8	int abs(int);
    该函数返回整数的绝对值。
    9	double fabs(double);
    该函数返回任意一个浮点数的绝对值。
    10	double floor(double);
    该函数返回一个小于或等于传入参数的最大整数。
 */

#include <cmath>
#include <iostream>

using namespace std;

int main111() {
    // 数字定义
    short s = 10;
    int i = -1000;
    long l = 100000;
    float f = 230.47;
    double d = 200.374;

    // 数学运算
    cout << "sin(d) :" << sin(d) << endl;
    cout << "abs(i)  :" << abs(i) << endl;
    cout << "floor(d) :" << floor(d) << endl;
    cout << "sqrt(f) :" << sqrt(f) << endl;
    cout << "pow( d, 2) :" << pow(d, 2) << endl;

    return 0;
    /*
     * >>>
        sin(d) :-0.634939
        abs(i)  :1000
        floor(d) :200
        sqrt(f) :15.1812
        pow( d, 2 ) :40149.7
     */
}

/*
 * 随机数
 * 在许多情况下，需要生成随机数。关于随机数生成器，有俩个相关的函数。
 * 一个是rand()，该函数只返回一个伪随机数。
 * 另一个是srand()函数，生成随机数之前必须先调用。
 * 以下是一个关于生成随机数的示例，示例中采用了time()函数来获取系统时间秒数，通过调用rand()函数生成随机数：
 */
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int j;

    //设置种子
    srand((unsigned) time(NULL));

    //生成10个随机数
    for (int i = 0; i < 10; i++) {
        //生成实际的随机数
        j = rand();
        cout << "随机数：" << j << endl;
    }
    return 0;
}
