#include <iostream>
using namespace std;

/*  5.2.1 一维数组   */
void array_5_2_1()
{
    // 第一种订定义方式
    int score[10];
    score[0] = 100;
    score[1] = 99;
    score[2] = 98;
    score[3] = 97;

    std::cout << "score[0] =\t" << score[0] << std::endl;
    std::cout << "score[1] =\t" << score[1] << std::endl;
    std::cout << "score[2] =\t" << score[2] << std::endl;
    std::cout << "score[3] =\t" << score[3] << std::endl;

    // 第二种订定义方式

    int score2[10] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
    for (int i = 0; i < 10; i++)
    {
        std::cout << score2[i] << std::endl;
    }
    // 第三种订定义方式
    int score3[] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
    for (int i = 0; i < 10; i++)
    {
        std::cout << score3[i] << std::endl;
    }
}
/*  5.2.2 一维数组数组名   */
void array_5_2_2()
{
    /*一维数组名称的用途：
    1. 可以统计整个数组在内存中的长度
    2. 可以获取数组在内存中的首地址
    */
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "sizeof(arr) = " << sizeof(arr1) << std::endl;
    std::cout << "arr 地址： " << arr1 << std::endl;
    std::cout << "arr[0] 地址： " << &arr1[0] << std::endl;

    //arr = 100; 错误，数组名是常量，因此不可以赋值
    //注意：数组名是常量，不可以赋值
    // 总结1：直接打印数组名，可以查看数组所占内存的首地址
    // 总结2：对数组名进行sizeof，可以获取整个数组占内存空间的大小
}
/*  5.2.3 冒泡排序*/
void array_5_2_3()
{

    int arr[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
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
    for (int i = 0; i < len; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}
/*  5.3 二维数组    
    1. 数据类型 数组名[ 行数 ][ 列数 ];
    2. 数据类型 数组名[ 行数 ][ 列数 ] = { {数据1，数据2 } ，{数据3，数据4 } };
    3. 数据类型 数组名[ 行数 ][ 列数 ] = { 数据1，数据2，数据3，数据4};
    4. 数据类型 数组名[ ][ 列数 ] = { 数据1，数据2，数据3，数据4};
*/
void array_5_3_1()
{

    //方式1
    //数组类型 数组名 [行数][列数]
    int array[2][3];
    array[0][0] = 1;
    array[0][1] = 2;
    array[0][2] = 3;
    array[1][0] = 4;
    array[1][1] = 5;
    array[1][2] = 6;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << array[i][j] << std::endl;
        }
    }

    //方式2
    //数据类型 数组名[行数][列数] = { {数据1，数据2 } ，{数据3，数据4 } };

    int array2[2][3] = {
        {1, 2, 3},
        {4, 5, 6},
    };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << array2[i][j] << std::endl;
        }
    }

    // 方式三
    int array3[2][3] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << array3[i][j] << std::endl;
        }
    }

    // 方式四
    int array4[][3] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << array4[i][j] << std::endl;
        }
    }
    // 总结：在定义二维数组时，如果初始化了数据，可以省略行数
}
/*  5.3.2 二维数组数组名
    1.查看二维数组所占内存空间
    2.获取二维数组首地址
*/
void array_5_3_2()
{
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6},
    };
    std::cout << "二维数组大小:" << sizeof(arr) << std::endl;
    std::cout << "二维数组一行元素大小:" << sizeof(arr[0]) << std::endl;
    std::cout << "二维数组第一个元素大小:" << sizeof(arr[0][0]) << std::endl;
    std::cout << "二维数组行数:" << sizeof(arr) / sizeof(arr[0]) << std::endl;
    std::cout << "二维数组列数 :" << sizeof(arr[0]) / sizeof(arr[0][0]) << std::endl;
    std::cout << "二维数组地址 :" << arr << std::endl;
    std::cout << "二维数组第一行地址 :" << arr[0] << std::endl;
    std::cout << "二维数组第二行地址 :" << arr[1] << std::endl;
    std::cout << "二维数组第一个元素地址 :" << &arr[0][0] << std::endl;
    std::cout << "二维数组第二个元素地址 :" << &arr[0][1] << std::endl;
}
// 案例
void array_5_3_3()
{
    int score[3][3] = {
        {100, 100, 100},
        {80, 90, 100},
        {70, 80, 90},
    };

    string names[3] = {"张三", "李四", "王五"};

    for (int i = 0; i < 3; i++)
    {   
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += score[i][j];
        }
        std::cout << names[i] << "score:" << sum << std::endl;
    }
    
}
int main()
{
    /*  5.1 一维数组
    1.数组中的每个==数据元素都是相同的数据类型
    2.数组是由==连续的内存==位置组成的
    */
    array_5_2_1();
    array_5_2_2();
    array_5_2_3();
    array_5_3_1();
    array_5_3_2();
    array_5_3_3();
    return 0;
}