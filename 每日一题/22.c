//
// Created by 黎圣  on 2023/9/17.
//
/*
 * 题目：利用递归方法求5!
 */
#include "stdio.h"
int fib(int m)
{
    if (m == 1)
        return 1;
    else
        return m * fib(m - 1);
}
int main()
{
    printf("%d", fib(5));
    return 0;
}
