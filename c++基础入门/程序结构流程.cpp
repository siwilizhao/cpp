#include <iostream>
using namespace std;

int main()
{
    /*  4.1 选择结构    */
    int score = 690;

    if (score > 600)
    {
        if (score > 700)
        {
            std::cout << "考上清华" << std::endl;
        }
        else if (score > 650)
        {
            std::cout << "考上北大" << std::endl;
        }
        else
        {
            std::cout << "考上一本" << std::endl;
        }
    }
    else
    {
        std::cout << "没考上一本" << std::endl;
    }

    /*  4.1.2 三目运算*/
    int a = 10;
    int b = 20;
    int c = 0;
    c = a > b ? a : b;

    std::cout << "c = " << c << std::endl;
    /*  4.1.3 switch*/

    switch (score)
    {
    case 10:
    case 9:
        std::cout << "经典" << std::endl;
        break;
    case 8:
        std::cout << "非常好" << std::endl;
        break;
    case 7:
        std::cout << "一般" << std::endl;
        break;
    default:
        std::cout << "垃圾" << std::endl;
        break;
    }

    /*  4.2 while*/
    int num = 0;
    int sum = 0;
    while (num <= 100)
    {
        sum += num;
        num++;
    }
    std::cout << "sum =" << sum << std::endl;
    num = 0;
    sum = 0;
    do
    {
        sum += num;
        num++;
    } while (num <= 100);
    std::cout << "sum =" << sum << std::endl;
    sum = 0;
    /*  4.2.3   for */
    for (int i = 0; i <= 100; i++)
    {
        sum += i;
    }
    std::cout << "sum =" << sum << std::endl;

    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << j << "*" << i << "=" << (i * j) << "\t";
        }
        cout << endl;
    }
    /*  4.3 跳转语句*/

    score = 10;
    switch (score)
    {
    case 10:
        std::cout << "极品电影" << std::endl;
        break;

    default:
        std::cout << "垃圾电影" << std::endl;
        break;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            if (j == 10)
            {
                break;
            }
            std::cout << "i = " << i << "j = " << j << std::endl;
        }
    }
    for (int j = 0; j < 50; j++)
    {
        if (j % 2 == 0)
        {
            continue;
        }
        std::cout <<"j = " << j << std::endl;
    }
    /*  4.3.3   goto*/

    std::cout << "1" << std::endl;
    std::cout << "2" << std::endl;

    goto FLAG;

    std::cout << "3" << std::endl;
    std::cout << "4" << std::endl;
    std::cout << "5" << std::endl;

    FLAG:;
    std::cout << "6" << std::endl;
    std::cout << "7" << std::endl;
    return 0;
}