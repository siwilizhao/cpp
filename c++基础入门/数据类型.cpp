#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*  2.1 整形
    1.short 短整形 2字节
    2.int 整形 4字节
    3.long 长整形 Windows 4 字节 Linux4字节（32位）8字节（64位）
    4.long long 长长整形 8 字节
    */

    short a1 = 10;
    int a2 = 10;
    long a3 = 10;
    long long a4 = 10;

    /*  2.2 sizeof 关键字   */

    std::cout << "sizeof(short) = " << sizeof(short) << std::endl;
    std::cout << "sizeof(int) = " << sizeof(int) << std::endl;
    std::cout << "sizeof(long) = " << sizeof(long) << std::endl;
    std::cout << "sizeof(long long) = " << sizeof(long long) << std::endl;

    // short < int <= long <= long long

    /*  2.3 实型（浮点型）
    1.单精度 float 7位有效数字
    2.双精度 double 15~16位有效数字
    */
    float f1 = 3.14f;
    double d1 = 3.14;
    std::cout << "f1 = " << f1 <<std::endl;
    std::cout << "d1 = " << d1 <<std::endl;
    std::cout << "float sizeof:" << sizeof(f1) <<std::endl;
    std::cout << "double sizeof:" << sizeof(d1) <<std::endl;

    // 科学计数法
    float f2 = 3e2;
    std::cout << "f2 = " << f2 <<std::endl;

    float f3 = 3e-2;
    std::cout << "f3 = " << f3 <<std::endl;


    /*  2.4 字符型
    语法： char ch = 'a';
    Notice: 在显示字符变量时 用单引号将字符括起来 不要用双引号；单引号内只能有一个字符，不可以是字符串；

    */

    char ch = 'a';
    std::cout << "ch = " << ch <<std::endl;
    std::cout << "sizeof(char) :" << sizeof(ch) <<std::endl;
    // 查看字符对应的ASCII码
    std::cout << (int)ch << std::endl;
    ch = 97;
    std::cout << "ch = " << ch <<std::endl;


    /*  2.5 转义字符
    转义字符 含义 ASCII码值（十进制）
    \a 警报 007
    \b 退格(BS) ，将当前位置移到前一列 008
    \f 换页(FF)，将当前位置移到下页开头 012
    \n 换行(LF) ，将当前位置移到下一行开头 010
    \r 回车(CR) ，将当前位置移到本行开头 013
    \t 水平制表(HT) （跳到下一个TAB位置） 009
    \v 垂直制表(VT) 011
    \\ 代表一个反斜线字符"" 092
    ' 代表一个单引号（撇号）字符 039
    " 代表一个双引号字符 034
    \? 代表一个问号 063
    \0 数字0 000
    \ddd 8进制转义字符，d范围0~7 3位8进制
    \xhh 16进制转义字符，h范围0~9，a~f，A~F 3位16进制
    */

    std::cout << "\\" << std::endl;
    std::cout << "\tHello" << std::endl;
    std::cout << "\n" << std::endl;

    /*  2.6 字符串型
    1.C风格字符串 char 变量名[] = "字符串的值";
    2.C++ 风格 string 变量名 = "字符串的值";
    */

    char str1[] = "hello world";
    std::cout << "c 风格 str1 = " << str1 << std::endl;

    string str = "hello world";

    std::cout << "c++ 风格 str = " << str << std::endl;


    /*  2.7 布尔类型 bool */
    bool flag = true;

    std::cout << "flag = " << flag <<std::endl;

    flag = false;
    std::cout << "flag = " << flag <<std::endl;


    std::cout << "sizeof(bool) ：" << sizeof(bool) <<std::endl;

    /*  2.8 数据的输入 cin */
    int b = 0;
    std::cout << "请输入整形变量：" << std::endl;
    cin >> b;
    std::cout << "b=" << b<< std::endl;
    return 0;
}