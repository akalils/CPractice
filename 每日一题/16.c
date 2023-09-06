//
// Created by 黎圣  on 2023/9/6.
//
/* 题目：一个数如果怡好等于它的因子之和，这个数就称为"完数"。
 * 例如6=1+2+3。编程找出1000以内的所有完数。
 */
#include "stdio.h"
int complete_number(int m)
{
    int sum = 0;
    for (int n = 1; n < m; n++)
    {
        if (m % n == 0)
        {
            sum = sum + n;
        }
    }
    if (sum == m)
        return 1;
    else
        return 0;
}
int main()
{
    int sum = 0;
    for (int m = 1; m <= 1000; m++)
    {
        if (complete_number(m) == 1)
            printf("%d 是完数\n", m);
        //else
            //printf("%d不是完数", m);
    }
    return 0;
}
