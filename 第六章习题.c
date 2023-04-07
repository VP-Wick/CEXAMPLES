// 6.1分析并写出下列程序的运行结果
// （1）
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
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
/*int main(void)
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
}*/

// 6.3
/**
 * 有一条长阶梯，若每步跨两阶，最后剩下1阶；若每步跨3阶，最后剩2阶；
 * 若每步跨5阶，最后剩4阶；若每步跨6阶，最后剩5阶；
 * 只有每步跨7阶，最后刚好一阶不剩。编程求出阶梯共有多少阶。
 */
/*int main(void)
{
    int x = 1, find = 0;
    while (!find)
    {
        if (x % 2 == 1 &&x % 3 == 2 &&x % 5 == 4 &&x % 6 == 5 &&x % 7 == 0)
        {
            printf("x = %d\n", x);
            find = 1;
        }
        x++;
    }
    return 0;
}*/

// 6.4
// 编程计算并输出1到n之间的所有数的平方和立方。其中，n值由键盘输入。
/*int main(void)
{
    int n, i;
    long sum1 = 0, sum2 = 0;
    printf("Input n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum1 += i * i;
        sum2 += i * i * i;
    }
    printf("sum1 = %ld,sum2 = %ld\n", sum1, sum2);
    return 0;
}*/

// 6.5
// 编程按每隔10°输出0°到300°之间的华氏温度到摄氏温度的对照表。
// 已知华氏温度与摄氏温度的转换公式为：C=5/9*(F-32)。
// 其中，C表示摄氏温度，F表示华氏温度。
/*int main(void)
{
    int f;
    float c;
    for (f = 0; f <= 300; f = f + 10)
    {
        c = 5.0 / 9 * (f - 32);
        printf("f = %d,c = %f\n", f, c);
    }
    return 0;
}*/

// 6.6
/**
 * 假设银行一年整存零取的月息为1.875%，现在某人手头有一笔钱，他打算在今后五年中，每年年底取出1000元作为孩子的教育金，
 * 到第5年孩子毕业时刚好取完这笔钱，请编程计算第1年年初时他应该存入银行多少钱。
 * 注意：每年年底结算一次，扣除取出的钱，剩余的作为下一年度存款本金。每年的利息按月计算，不是复利。
 */
/*int main(void)
{
    int i;
    double money = 1000;
    for (i = 1; i <= 5; i++)
    {
        money = (money + 1000) / (1 + 0.01875 / 12);
    }
    printf("money = %f\n", money);
    return 0;
}*/

// 6.7
// 假设今年的工业产值为100万元，产值增长率从键盘输入，请编程计算工业产值过多少年后可以实现翻一番。
/*int main(void)
{
    int year = 0;
    double value = 100;
    double rate;
    printf("Input rate:");
    scanf("%lf", &rate);
    while (value < 200)
    {
        value = value * (1 + rate);
        year++;
    }
    printf("year = %d\n", year);
    return 0;
}*/

// 6.8
// 利用pi/2=1-1/3+1/5-1/7+1/9-1/11+...，计算pi的值，直到最后一项的绝对值小于10^-4为止,输出pi的值并统计累加的项数。
/*int main(void)
{
    int n = 1, count = 1;     // 迭代次数，计数器
    double sum = 1, term = 1; // sum为pi的值，term为每一项的值
    while (fabs(term) >= 1e-4)
    {
        term = pow(-1, count) * (1.0 / (n + 2)); // pow幂运算，-1是底数，count是指数
        sum = sum + term;
        n = n + 2;
        count++;
    }
    sum = 4 * sum;
    printf("pi = %f,count = %d\n", sum, count);
}*/

// 6.9
// 利用e=1+1/1!+1/2!+1/3!+...，计算e的值，直到最后一项的绝对值小于10^-5为止,输出e的值并统计累加的项数。
/*int main(void)
{
    int n = 1, count = 1;     // 迭代次数，计数器
    double sum = 1, term = 1; // sum为e的值，term为每一项的值
    while (fabs(term) >= 1e-5)
    {
        term = term * (1.0 / n);
        sum = sum + term;
        n++;
        count++;
    }
    printf("e = %f,count = %d\n", sum, count);
}*/

// 6.10
// 水仙花数是指一个三位数，其各位数字的立方和等于该数本身，例如：153=1^3+5^3+3^3。编程计算并输出所有的水仙花数。
/*int main(void)
{
    int i, a, b, c;
    for (i = 100; i <= 999; i++)
    {
        a = i / 100;
        b = i / 10 % 10;
        c = i % 10;
        if (i == a * a * a + b * b * b + c * c * c)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}*/

// 6.11
// 已知不等式：1!+2!+3!+...+m!<n,编程对用户指定的n值计算并输出满足该不等式的m的整数解。
/*int main(void)
{
    int n, m = 1, sum = 1; // n为用户输入的值，m为满足不等式的最小值，sum为累加的值
    printf("Input n:");
    scanf("%d", &n);
    while (sum < n)
    {
        m++;
        sum = sum + m * m * m;
    }
    printf("m = %d\n", m);
    return 0;
}*/

// 6.12
// 输入一些正数，编程计算并输出这些正数的和，输入负数或零时表示输入数据结束。
int main(void)
{
    int n, sum = 0; // n为用户输入的值，sum为累加的值
    printf("Input n:");
    scanf("%d", &n);
    while (n > 0)
    {
        sum = sum + n;
        printf("Input n:");
        scanf("%d", &n);
    }
    printf("sum = %d\n", sum);
    return 0;
}