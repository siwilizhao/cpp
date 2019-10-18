#include <iostream>
using namespace std;

int main()
{
    /*  3.1 算术运算符  */
    int a1 = 10;
    int b1 = 3;

    std::cout << "a1 + b1 =" << a1 + b1 << std::endl;
    std::cout << "a1 - b1 =" << a1 - b1 << std::endl;
    std::cout << "a1 * b1 =" << a1 * b1 << std::endl;
    std::cout << "a1 / b1 =" << a1 / b1 << std::endl; //两个整数相除结果依然是整数

    int a2 = 10;
    int b2 = 20;

    std::cout << "a2 /b2 = " << a2 / b2 << std::endl;

    int a3 = 10;
    int b3 = 0;
    // std::cout << "除数不能为0 " << a3 / b3 << std::endl;
    double d1 = 0.5;
    double d2 = 0.25;

    std::cout << "d1 / d2 = " << d1 / d2 << std::endl;

    // 取模 取模除数也不能为0 连个小数不可取模
    std::cout << "a1 % b1 = " << a1 % b1 << std::endl;

    // 递增
    int a = 10;
    a++; // a = a + 1
    std::cout << "a = " << a << std::endl;

    // 前置递增
    int b = 10;
    ++b;
    std::cout << "b = " << b << std::endl;

    // 递减
    int c = 10;
    c--;
    std::cout << "c = " << c << std::endl;

    // 前置递减
    int d = 10;
    --d;
    std::cout << "d = " << d << std::endl;

    /*  3.2 赋值运算符*/

    // =
    a = 100;
    std::cout << "a = " << a << std::endl;
    // +=
    a = 10;
    a += 2;
    std::cout << "(a +=2 )=" << a << std::endl;
    //-=
    a = 10;
    a -= 2;
    std::cout << "(a -= 2) = " << a << std::endl;

    //*=
    a = 10;
    a *= 2;
    std::cout << "(a *= 2) = " << a << std::endl;

    // /=
    a = 10;
    a /= 2;
    std::cout << "(a /= 2) = " << a << std::endl;

    // %=
    a = 10;
    a %= 2;
    std::cout << "(a %= 2) = " << a << std::endl;

    /*  3.3 比较运算符  */
    a = 10;
    b = 20;
    std::cout << (a == b) << std::endl;
    std::cout << (a != b) << std::endl;
    std::cout << (a > b) << std::endl;
    std::cout << (a >= b) << std::endl;
    std::cout << (a < b) << std::endl;
    std::cout << (a <= b) << std::endl;

    /*  3.4逻辑运算符   */
    a = 10;
    b = -0;
    std::cout << "!a = " << !a << std::endl;
    std::cout << "!!a = " << !!a << std::endl;
    std::cout << "a&&b = " << (a&&b) << std::endl;
    std::cout << "a||b = " << (a||b) << std::endl;

    return 0;
}