#include <iostream>
using namespace std;
/*7.1 指针的基本概念

指针的作用： 可以通过指针间接访问内存
内存编号是从0开始记录的，一般用十六进制数字表示
可以利用指针变量保存地址
*/
void pointer_7_1()
{
}

/*  7.2 指针变量的定义和使用
指针变量定义语法：数据类型 * 变量名称;
*/

void pointer_7_2()
{
    int a = 10;

    int *p;
    p = &a;

    std::cout << "p = " << p << std::endl;
    std::cout << "*p = " << *p << std::endl;

    //指针变量和普通变量的区别
    //普通变量存放的是数据,指针变量存放的是地址
    //指针变量可以通过" * "操作符，操作指针变量指向的内存空间，这个过程称为解引用
}

/*  7.3 指针所占内存空间
总结：所有指针类型在32位操作系统下是4个字节
*/
void pointer_7_3()
{
    int a = 10;
    int *p;
    p = &a;

    std::cout << "*p" << std::endl;
    std::cout << sizeof(p) << std::endl;
    std::cout << sizeof(char *) << std::endl;
    std::cout << sizeof(float *) << std::endl;
    std::cout << sizeof(double *) << std::endl;
}

/*  7.4 空指针和野指针
空指针：指针变量指向内存中编号为0的空间
用途：初始化指针变量
注意：空指针指向的内存是不可以访问的
野指针：指针变量指向非法的内存空间
*/
void pointer_7_4()
{
    // int *p = NULL;
    // std::cout << "*p" << std::endl;

    // int *p = (int *)0x1111;
    // std::cout << "*p" << std::endl;

    //总结：空指针和野指针都不是我们申请的空间，因此不要访问
}

/*  7.5 const修饰指针
const修饰指针有三种情况
1. const修饰指针 --- 常量指针
2. const修饰常量 --- 指针常量
3. const即修饰指针，又修饰常量
*/

void pointer_7_5()
{
    int a = 10;
    int b = 10;

    // const修饰指针 指针指向可以改变 指针指向的值不能改变
    const int *p1 = &a;
    p1 = &b;
    // *p1 = 100; // 错误

    // const 修饰常量 指针指向不可以改 指针指向的值可以改变
    int *const p2 = &a;
    // p2 = &b; //错误

    *p2 = 100;

    const int *const p3 = &a;
    // p3 = &b;
    // *p3 = 100;

    // 看const右侧紧跟着的是指针还是常量, 是指针就是常量指针，是常量就是指针常量
}
/*  7.6 指针和数组
作用：利用指针访问数组中元素*/
void pointer_7_6()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = arr;
    std::cout << "第一个元素" << arr[0] << std::endl;
    std::cout << "指针访问第一个元素" << *p << std::endl;

    for (int i = 0; i < 10; i++)
    {
        std::cout << *p << std::endl;
        p++;
    }
}
/*
7.7 指针和函数
作用：利用指针作函数参数，可以修改实参的值
*/

void swap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swap2(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void pointer_7_7()
{
    int a = 10;
    int b = 20;
    swap1(a, b);
    swap2(&a, &b);

    std::cout << "a = " << a << " b = " << b << std::endl;
    //如果不想修改实参，就用值传递，如果想修改实参，就用地址传递
}
/*  7.8 指针、数组、函数    */

void bubbleSort(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}

void pointer_7_8()
{
    int arr[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 50};
    int len = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, len);
    printArray(arr, len);
}

int main()
{

    pointer_7_1();
    pointer_7_2();
    pointer_7_3();
    pointer_7_4();
    pointer_7_5();
    pointer_7_6();
    pointer_7_7();
    pointer_7_8();

    return 0;
}