#include <iostream>
using namespace std;

/*8.2 结构体定义和使用
    语法： struct 结构体名 { 结构体成员列表 }；

    通过结构体创建变量的方式有三种：
    struct 结构体名 变量名
    struct 结构体名 变量名 = { 成员1值 ， 成员2值...}
    定义结构体时顺便创建变量

*/
void struct_8_2()
{
    struct student
    {
        string name;
        int age;
        int score;
    } stu3;

    struct student stu1;
    stu1.name = "张三";
    stu1.age = 20;
    stu1.score = 100;

    std::cout << "姓名" << stu1.name << "年龄：" << stu1.age << "分数：" << stu1.score << std::endl;

    struct student stu2 = {"李四", 19, 99};

    std::cout << "姓名" << stu2.name << "年龄：" << stu2.age << "分数：" << stu2.score << std::endl;

    stu3.name = "王五";
    stu3.age = 21;
    stu3.score = 9;
    std::cout << "姓名" << stu3.name << "年龄：" << stu3.age << "分数：" << stu3.score << std::endl;

    // 总结1：定义结构体时的关键字是struct，不可省略
    // 总结2：创建结构体变量时，关键字struct可以省略
    // 总结3：结构体变量利用操作符 ''.'' 访问成员
}

/*  8.3 结构体数组
作用：将自定义的结构体放入到数组中方便维护
语法： struct 结构体名 数组名[元素个数] = { {} , {} , ... {} }
*/
void struct_8_3()
{
    struct student
    {
        string name;
        int age;
        int score;
    };

    struct student arr[3] = {
        {"张三", 20, 100},
        {"李四", 19, 99},
        {"王五", 21, 9},
    };
}
/*  8.4结构体指针
通过指针访问结构体中的成员
利用操作符 -> 可以通过结构体指针访问结构体属性
*/
void struct_8_4()
{
    struct student
    {
        string name;
        int age;
        int score;
    };

    struct student stu = {"张三", 18, 100};

    struct student *p = &stu;
    p->score = 69;
    std::cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << std::endl;
    // 总结：结构体指针可以通过 -> 操作符 来访问结构体中的成员
}
/*  8.5 结构体嵌套结构体
作用： 结构体中的成员可以是另一个结构体
例如：每个老师辅导一个学员，一个老师的结构体中，记录一个学生的结构体
*/
void struct_8_5()
{
    struct student
    {
        string name;
        int age;
        int score;
    };

    struct teacher
    {
        int id;
        string name;
        int age;
        struct student stu;
    };

    struct teacher t1;
    t1.id = 10000;
    t1.age = 60;
    t1.name = "曹老师";
    t1.stu.age = 12;
    t1.stu.name = "张三";
    t1.stu.score = 100;

    cout << "教师 职工编号： " << t1.id << " 姓名： " << t1.name << " 年龄： " << t1.age << endl;
    cout << "辅导学员 姓名： " << t1.stu.name << " 年龄：" << t1.stu.age << " 考试分数： " << t1.stu.score << endl;

    // 在结构体中可以定义另一个结构体作为成员，用来解决实际问题
}
/*8.6 结构体做函数参数
*/
struct student
{
    string name;
    int age;
    int score;
};
void printStudent(student stu)
{
    stu.age = 28;
    cout << "子函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
}

void printStudent2(student *stu)
{
    stu->age = 28;
    cout << "子函数中 姓名：" << stu->name << " 年龄： " << stu->age << " 分数：" << stu->score << endl;
}
void struct_8_6()
{
    student stu = {"张三", 16, 88};
    printStudent(stu);
    printStudent2(&stu);
    // 如果不想修改主函数中的数据，用值传递，反之用地址传递
}

/*  8.7 结构体中 const使用场景
用const来防止误操作
*/

void printStudent3(const student *stu)
{
    // stu->age = 28; 这里不能修改值 因为加了const 修饰
    cout << "子函数中 姓名：" << stu->name << " 年龄： " << stu->age << " 分数：" << stu->score << endl;
}
void struct_8_7()
{
    student stu = {"张三", 16, 88};
    printStudent3(&stu);
}
void struct_8_8() {}
int main()
{

    //8.1 结构体基本概念
    //结构体属于用户==自定义的数据类型==，允许用户存储不同的数据类型
    struct_8_2();
    struct_8_3();
    struct_8_4();
    struct_8_5();
    struct_8_6();
    return 0;
}
