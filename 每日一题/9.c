//
// Created by 黎圣  on 2023/8/26.
//
/* 题目：判断101到200之间的素数
 * 1、素数、质数：质数是指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数。
 * 2、怎么判断是不是素数
 * 3、依次枚举出每个数
 */
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num)
{
    if (num <= 1)
        return false;
    else
    {
        for (int i = 2; i < num / 2; i++)
        {
            if (num % i == 0)
                return false;
        }
    }
    return true;
}
int main()
{
    for (int i = 101; i <= 200; i++)
    {
        if (is_prime(i))
            printf("%d ", i);
    }
    return 0;
}
