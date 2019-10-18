#include <iostream>
using namespace std;
#include "swap.h"
/*  6.1 概述
    作用：将一段经常使用的代码封装起来，减少重复代码
    一个较大的程序，一般分为若干个程序块，每个模块实现特定的功能。
*/
void func_6_1()
{
}

void func_6_2()
{

    /*  6.2 函数的定义
    函数的定义一般主要有5个步骤：
    1、返回值类型
    2、函数名
    3、参数表列
    4、函数体语句
    5、return 表达式

    语法：

    返回值类型 函数名 （参数列表）
    {
        函数体语句
        return表达式
    }

    返回值类型 ：一个函数可以返回一个值。在函数定义中
    函数名：给函数起个名称
    参数列表：使用该函数时，传入的数据
    函数体语句：花括号内的代码，函数内需要执行的语句
    return表达式： 和返回值类型挂钩，函数执行完后，返回相应的数据


    int add(int num1, int num2)
    {
        return num1 + num2;
    }
    */
}

int add(int num1, int num2)
{
    return num1 + num2;
}

/*  6.3 函数的调用*/
void func_6_3()
{
    int a = 10;
    int b = 10;

    int sum = add(a, b);
    cout << "sum = " << sum << endl;

    a = 100;
    b = 100;
    sum = add(a, b);
    cout << "sum = " << sum << endl;
    // 总结：函数定义里小括号内称为形参，函数调用时传入的参数称为实参
}
/*  6.4 值传递
所谓值传递，就是函数调用时实参将数值传入给形参
值传递时，==如果形参发生，并不会影响实参
*/

void swap1(int num1, int num2)
{
    std::cout << "交换前 ：" << std::endl;
    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num2 = " << num2 << std::endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;
    std::cout << "交换后 ：" << std::endl;
    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num2 = " << num2 << std::endl;
}
void func_6_4()
{
    int a = 10;
    int b = 20;

    swap1(a, b);
    // 总结： 值传递时，形参是修饰不了实参的
}
/*6.5 函数的常见样式
常见的函数样式有4种
1. 无参无返
2. 有参无返
3. 无参有返
4. 有参有返*/

void test01()
{
    std::cout << "this is test01" << std::endl;
}
void test02(int a)
{
    std::cout << "this is test02" << std::endl;
    std::cout << "a = " << a << std::endl;
}
int test03()
{
    std::cout << "this is test03" << std::endl;
    return 10;
}
int test04(int a)
{
    std::cout << "this is test04" << std::endl;
    return a;
}
void func_6_5()
{
    test01();
    test02(10);
    test03();
    test04(10);
}
/*  6.6 函数的声明
函数的声明可以多次，但是函数的定义只能有一次
*/
// 声明
int max(int a, int b);
int max(int a, int b);
// 定义
int max(int a, int b)
{
    return a > b ? a : b;
}
void func_6_6()
{
    int a = 100;
    int b = 200;
    std::cout << " max(a, b) = " << max(a, b) << std::endl;
}
/*  6.7 函数的分文件编写*/

void  func_6_7(){
    int a = 100;
    int b = 200;
    swap(a, b);
}
int main()
{
    func_6_1();
    func_6_2();
    func_6_3();
    func_6_4();
    func_6_5();
    func_6_6();
    func_6_7();
    return 0;
}