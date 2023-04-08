// 函数的定义
//  例7.1.a：用函数编写计算整数n的阶乘n！。
//  函数功能：用迭代法计算n！
//  函数入口参数：整型变量n表示阶乘的阶数
//  函数返回值：返回n！的值
/*long Fact(int n) // 函数定义
{
    int i;
    long result = 1;
    for (i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}*/

// 函数的调用
// 例7.1.b：编写main函数，调用函数Fact()来计算m！。m的值由用户从键盘输入。
/*#include <stdio.h>
int main(void)
{
    int m;
    long ret;
    printf("Input m:");
    scanf("%d", &m);
    ret = Fact(m); // 函数调用
    printf("%d!=%ld\n", m, ret);
    return 0;
}*/

// 函数原型
// 例7.1：将例7.1.a和例7.1.b合并成一个完整的程序。
//(1)
/*#include <stdio.h>
// 函数功能：用迭代法计算n！
long Fact(int n) // 函数定义
{
    int i;
    long result = 1;
    for (i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
int main(void)
{
    int m;
    long ret;
    printf("Input m:");
    scanf("%d", &m);
    ret = Fact(m); // 调用函数Fact()，并将返回值赋给ret
    printf("%d!=%ld\n", m, ret);
    return 0;
}*/

//(2)
#include <stdio.h>
long Fact(int n); // 函数原型声明
int main(void)
{
    int m;
    long ret;
    printf("Input m:");
    scanf("%d", &m);
    ret = Fact(m); // 调用函数Fact()，并将返回值赋给ret
    printf("%d!=%ld\n", m, ret);
    return 0;
}
// 函数功能：用迭代法计算n！
long Fact(int n) // 函数定义
{
    int i;
    long result = 1;
    for (i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
