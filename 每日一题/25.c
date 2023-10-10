//
// Created by 黎圣  on 2023/10/10.
//
/*
 * 题目：给一个不多于3位的正整数，
 * 要求：一：求它是几位数，二：逆序打印出各位数字。
 */
#include "stdio.h"
#include "string.h"
int main()
{
    int number = 123;
    int s, b, g;
    b = number / 100;
    g = number % 10;
    s = number / 10 % 10;
    if (b != 0)
    {
        printf("是个三位数\n");
        printf("%d%d%d", b, s, g);
    }

    else if (s != 0)
    {
        printf("是个两位数\n");
        printf("%d%d", s, g);
    }
    else
    {
        printf("是个一位数\n");
        printf("%d", g);
    }

    return 0;
}
