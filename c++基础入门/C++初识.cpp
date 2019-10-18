#include <iostream>
using namespace std;
#define day 7

int main () {
    /*  1.1 Hello World */
    cout << "Hello World" << endl;

    /*  1.2注释 */
    // 单行    /* 多行 */


    /*  1.3 变量 
    语法 ：数据类型 变量名 = 初始值;
    */ 

    int a = 10;
    cout << "a = " << a <<endl;
    
    /*  1.4 常量 
    1. define 宏常量 #define 常量名 常量值 (不带分号结尾)
    2. const 修饰的变量 const 数据类型 常量名 = 常量值;
    */ 

    const int a1 = 10;
    cout << "一周共有 " << day << " 天" << endl;
    cout << "a = " << a <<endl;
     
    /*  1.5 关键字
    asm do if return typedef
    auto double inline short typeid
    bool dynamic_cast int signed typename
    break else long sizeof union
    case enum mutable static unsigned
    catch explicit namespace static_cast using
    char export new struct virtual
    class extern operator switch void
    const false private template volatile
    const_cast float protected this wchar_t
    continue for public throw while
    default friend register true
    delete goto reinterpret_cast try

    Notice: 在给变量或者常量启明城的时候 不要使用C++的关键字
    */ 

    /*  1.6 标识符命名规则
    1.标识符不能是关键字
    2.标识符只由字母、数字、下划线组成
    3.第一个字符必须是字符或者下划线
    4.标识符中字母区分大小写
    */

    return 0;
}