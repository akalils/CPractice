//
// Created by 黎圣  on 2023/9/13.
//
/* 题目：打印如下菱形
 *    *
 *   ***
 *  *****
 * *******
 *  *****
 *   ***
 *    *
 */
#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            //每一行的打印
            //空格*
            for (int j = 0; j < n - i; j++)
                printf(" ");
            for (int j = 0; j <= i; j++)
                printf("* ");
            printf("\n");
        }
        for (int i = 0; i < n + 1; i++)
        {
            //空格*
            for (int j = 0; j < i; j++)
                printf(" ");
            for (int j = 0; j < n + 1 - i; j++)
                printf("* ");
            printf("\n");
        }
    }
    return 0;
}
