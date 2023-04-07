// 6.1分析并写出下列程序的运行结果
// （1）
#include <stdio.h>
#include <math.h>
/*int main(void)
{
    int i, j, k;
    char space = ' ';
    for (i = 1; i <= 4; i++)//控制行数
    {
        for (j = 1; j <= i; j++)//控制空格数
        {
            printf("%c", space);
        }
        for (k = 1; k <= 6; k++)//控制星号数
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

// （2）
/*int main(void)
{
    int k = 4, n;
    for (n = 0; n < k; n++)
    {
        if (n % 2 == 0)//判断是否是偶数，是的话跳出循环，不是则执行k--。
            continue;
        k--;
    }
    printf("k = %d,n = %d\n", k, n);
    return 0;
}*/

// （3）
/*int main(void)
{
    int k = 4, n;
    for (n = 0; n < k; n++)
    {
        if (n % 2 == 0)
            break;
        k--;
    }
    printf("k = %d,n = %d\n", k, n);
    return 0;
}*/

// 6.2
//  （1）
// 计算1+3+5+7+...+99+101的值。
/*int main(void)
{
    int i, sum = 0;
    for (i = 1; i <= 101; i = i + 2)
    {
        sum += i;
    }
    printf("sum = %d\n", sum);
    return 0;
}*/

// （2）
// 计算1*2*3+3*4*5+5*6*7+...+99*100*101的值。
/*int main(void)
{
    long i;
    long term, sum = 0;
    for (i = 1; i <= 101; i = i + 2)
    {
        term = i * (i + 1) * (i + 2);
        sum += term;
    }
    printf("sum = %ld\n", sum);
    return 0;
}*/

// （3）
// 计算a+aa+aaa+aaaa+...+aa...a（n个a）的值,n和a的值由键盘输入。
/*int main(void)
{
    long sum = 0, term = 0;
    int i, n, a;
    printf("Please input n and a:");
    scanf("%d,%d", &n, &a);
    for (i = 1; i <= n; i++)
    {
        term = term * 10 + a;
        sum += term;
    }
    printf("sum = %ld\n", sum);
    return 0;
}*/

// （4）
// 计算1-1/2+1/3-1/4+...+1/99-1/100+...，直到最后一项的绝对值小于10^-4为止。
/*int main(void)
{
    int n = 1;
    float term = 1.0, sign = 1, sum = 0;
    while (fabs(term) >= 1e-4)
    {
        term = sign / n;
        sum = sum + term;
        sign = -sign;
        n++;
    }
    printf("sum = %f\n", sum);
    return 0;
}*/

// （5）
// 利用sin(x)≈x-x^3/3!+x^5/5!-x^7/7!+...，计算sin(x)的值，直到最后一项的绝对值小于10^-5为止。
int main(void)
{
    int n = 1, count = 1;//迭代次数，计数器
    double x;//输入的角度值
    double sum, term;//sum为sin(x)的值，term为每一项的值
    printf("Input x:");
    scanf("%lf", &x);
    sum = x;
    term = x;
    do
    {
        term = -term * x * x / (2 * n * (2 * n + 1));
        sum = sum + term;
        n = n + 2;
        count++;
    } while (fabs(term) >= 1e-5);
    printf("sin(x) = %f,count = %d\n", sum, count);
    return 0;
}