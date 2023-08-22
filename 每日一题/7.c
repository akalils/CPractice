//
// Created by 黎圣  on 2023/8/22.
//
/*
 * 题目：输出九九乘法表
 */
#include "stdio.h"
int main()
{
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            printf("%d*%d=%-2d  ", j, i, i * j);
        }
        printf("\n");
    }
    return 0;
}
