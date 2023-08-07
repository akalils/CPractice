//
// Created by 黎圣  on 2023/8/7.
//
#include "iostream"
bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    long int a, b = 0;
    a = x;
    while (a != 0)
    {
        b = b * 10 + a % 10;
        a = a / 10;
    }
    if (b == x)
        return true;
    else
        return false;
}
int main()
{
    int x = 121;
    if (isPalindrome(x) == true)
        printf("%d是回文数", x);
    else
        printf("%d不是回文数", x);
    return 0;
}
