//
// Created by 黎圣  on 2023/9/17.
//
/*
 * 题目：求1+2!+3!+...+20!的和。
 */
#include "stdio.h"
long double jc(int m)
{
    long double count = 1;
    for (int i = 1; i <= m; i++)
        count = count * i;
    return count;
}
int main()
{
    long double sum = 0;
    for (int i = 1; i <= 20; i++)
    {
        sum = sum + jc(i);
    }
    printf("%lf", sum);

    return 0;
}
