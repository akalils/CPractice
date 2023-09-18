//
// Created by 黎圣  on 2023/9/18.
//
/*
 * 题目：利用递归函数调用方式，将所输入的5个宇符，以相反顺序打印出来。
 */
#include "string.h"
#include "stdio.h"
void reverse_digui(int n)
{
    char c;
    if (n == 1)
    {
        c = getchar();
        putchar(c);
    }
    else
    {
        c = getchar();
        reverse_digui(n - 1);
        putchar(c);
    }
}
void reverse(char a[])
{
    int size = strlen(a);
    for (int i = size - 1; i >= 0; i--)
        printf("%c ", a[i]);
}
int main()
{
    char a[] = "abcde";
    reverse_digui(5);
    reverse(a);
    return 0;
}
