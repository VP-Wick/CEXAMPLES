// 例6.6
//  编程设计一个简单的猜数游戏，先由计算机“想”一个数请用户猜，如果用户猜对了，
//  则计算机给出提示“Right！”，否则提示“Wrong！”，并且提示用户猜的数是大了还是小了。
//  随机函数rand()的使用
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/*int main(void)
{
    int magic;
    int guess;
    magic = rand() % 100 + 1;// 产生1~100之间的随机数
    printf("Please guess a magic number:");
    scanf("%d", &guess);
    if (guess > magic)
        printf("Wrong!Too big!\n");
    else if (guess < magic)
        printf("Wrong!Too small!\n");
    else
        printf("Right !\n");
    return 0;
}*/

// 例6.7
/*  将6.6改为：每次猜数允许用户直到猜对为止，同时记录用户猜的次数
以此来反应用户“猜”数的水平*/
/*int main(void)
{
    int magic, guess, counter = 0; // 电脑想的数，用户猜的数，猜的次数
    /*unsigned int seed;             // 随机数种子
    printf("Please enter seed:");
    scanf("%u", &seed);*/
/*srand(time(NULL));              // 用系统时间作为随机数种子
magic = rand() % 100 + 1; // 产生1~100之间的随机数
do
{
    printf("Please guess a magic number:");
    scanf("%d", &guess);
    counter++; // 猜的次数加1
    if (guess > magic)
        printf("Wrong!Too big!\n");
    else if (guess < magic)
        printf("Wrong!Too small!\n");
    else
        printf("Right !\n");
} while (guess != magic); // 一直猜到猜对为止
printf("counter = %d\n", counter);
return 0;
}*/

// 例6.8
/**
 * 将6.7改为：每次猜数只允许用户最多猜十次。
 */
/*int main(void)
{
    int magic, guess, counter = 0;
    srand(time(NULL));
    magic = rand() % 100 + 1;
    do
    {
        printf("Please guess a magic number:");
        scanf("%d", &guess);
        counter++;
        if (guess > magic)
            printf("Wrong!Too big!\n");
        else if (guess < magic)
            printf("Wrong!Too small!\n");
        else
            printf("Right !\n");
    } while (guess != magic && counter < 10); // 一直猜到猜对或者猜了10次为止
    printf("counter = %d\n", counter);
    return 0;
}*/

// 例6.9
// 增强6.8程序的健壮性，检测用户是否输入非法字符，让用户重新输入字符，直到正确为止。
/*int main(void)
{
    int magic, guess, counter = 0;
    int ret;
    srand(time(NULL));
    magic = rand() % 100 + 1;
    do
    {
        printf("Please guess a magic number:");
        ret = scanf("%d", &guess);
        while (ret != 1)
        {
            while (getchar() != '\n')
                ; // 清空输入缓冲区（分号是空语句，表示循环体为空，不进行任何操作）
            printf("Please guess a magic number:");
            ret = scanf("%d", &guess);
        }
        counter++;
        if (guess > magic)
            printf("Wrong!Too big!\n");
        else if (guess < magic)
            printf("Wrong!Too small!\n");
        else
            printf("Right !\n");
    } while (guess != magic && counter < 10); // 一直猜到猜对或者猜了10次为止
    printf("counter = %d\n", counter);
    return 0;
}*/

// 例6.10
// 将6.9改为每次运行程序可以猜多个数，每个数最多猜十次。
// 若十次仍未猜对，则停止本次猜数，给出如下提示，询问用户是否继续猜数：
// Do you want to continue(Y/N or y/n)?
// 若用户输入Y或y，则继续猜数，否则结束程序。
/*int main(void)
{
    int magic, guess, counter = 0, ret;
    char replay;
    srand(time(NULL));
    do
    {
        counter = 0; // 每次猜数前，将猜数次数清零
        magic = rand() % 100 + 1;
        do
        {
            printf("Please guess a magic number:");
            ret = scanf("%d", &guess);
            while (ret != 1) // 检测用户输入是否合法
            {
                while (getchar() != '\n') // 清空输入缓冲区
                    ;
                printf("Please guess a magic number:");
                ret = scanf("%d", &guess);
            }
            counter++;
            if (guess > magic)
                printf("Wrong!Too big!\n");
            else if (guess < magic)
                printf("Wrong!Too small!\n");
            else
                printf("Right !\n");
        } while (guess != magic && counter < 10); // 一直猜到猜对或者猜了10次为止
        printf("counter = %d\n", counter);
        printf("Do you want to continue(Y/N or y/n)?"); // 询问用户是否继续猜数
        scanf(" %c", &replay);                          // 读取用户输入的字符
    } while (replay != 'N' && replay != 'n');           // 若用户输入Y或y，则继续猜数
    return 0;
}*/

// 例6.11
// 读入五个正整数并且显示它们。当读入的数据为负数时，程序立刻停止。

// goto语句
/*int main(void)
{
    int i, n;
    for (i = 1; i <= 5; i++)
    {
        printf("Please enter n:");
        scanf("%d", &n);
        if (n < 0)
            goto END;
        printf("n = %d\n", n);
    }
END:
    printf("Program is over!\n");
    return 0;
}*/

// break语句
/*int main(void){
    int i, n;
    for (i = 1; i <= 5; i++)
    {
        printf("Please enter n:");
        scanf("%d", &n);
        if (n < 0)
            break;
        printf("n = %d\n", n);
    }
    printf("Program is over!\n");
    return 0;
}*/

// 例6.12
// continue语句
/*int main(void){
    int i, n;
    for (i = 1; i <= 5; i++)
    {
        printf("Please enter n:");
        scanf("%d", &n);
        if (n < 0)
            continue;
        printf("n = %d\n", n);
    }
    printf("Program is over!\n");
    return 0;
}*/
// 改成while循环
/*int main(void){
    int i = 1, n;
    while (i <= 5)
    {
        printf("Please enter n:");
        scanf("%d", &n);
        if (n < 0)
            continue;
        printf("n = %d\n", n);
        i++;
    }
    printf("Program is over!\n");
    return 0;
}*/

// 例6.13
/**韩信点兵。韩信有一队兵，他想知道有多少人，便让士兵排队报数。
 *按从1至5报数，最末一个士兵报的数为1；按从1至6报数，最末一个士兵报的数为5；
 *按从1至7报数，最末一个士兵报的数为4；按从1至11报数，最末一个士兵报的数为10；
 *编程计算韩信至少有多少兵。设兵数为x，按题意可得：
 *x%5==1 && x%6==5 && x%7==4 && x%11==10
 */
/*int main(void)
{
    int x;
    int find = 0;
    for (x = 1;!find; x++)//置找到标志变量为假，当找到时置为真
    {
        if (x % 5 == 1 && x % 6 == 5 && x % 7 == 4 && x % 11 == 10)
        {
            printf("x = %d\n", x);
            find = 1;//找到后置为真
        }
    }
    return 0;
}*/
// 改成do-while循环
/*int main(void)
{
    int x = 0;
    int find = 0;
    do
    {
        x++;
        find = (x % 5 == 1 && x % 6 == 5 && x % 7 == 4 && x % 11 == 10);
    } while (!find);
    printf("x = %d\n", x);
    return 0;
}*/
//
/*int main(void)
{
    int x = 0;
    do
    {
        x++;
    }while (!(x%5==1 && x%6==5 && x%7==4 && x%11==10));
    printf("x = %d\n", x);
    return 0;
}*/

// 类型溢出
// 例6.14
// 编程计算自然数的立方和，直到立方和大于等于1000000时为止，统计并输出实际累加的项数。
/*int main(void)
{
    short i, sum = 0;
    for (i = 1;; i++)
    {
        sum = sum + i * i * i;
        if (sum >= 1000000)
            break;
    }
    printf("count = %d\n", i);
    return 0;
}*/
// 不使用break语句
/*int main(void)
{
    short i, sum = 0;
    for (i = 1; sum < 1000000; i++)
    {
        sum = sum + i * i * i;
    }
    printf("count = %d\n", i - 1);
    return 0;
}*/

// 例6.15
// 利用pi/2=（2/1）*（2/3）*（4/3）*（4/5）*（6/5）*（6/7）*...前一百项之积，变成并计算pi的值。
/*int main(void)
{
    double term, result = 1;
    int n;
    for (n = 2; n <= 100; n = n + 2)
    {
        term = (double)(n * n) / ((double)(n - 1) * (n + 1));
        result = result * term;
    }
    printf("pi = %f\n", result * 2);
    return 0;
}*/