//
// Created by 黎圣  on 2023/8/6.
//
#include "stdio.h"
void reverseString(char* s, int sSize){
    int i = 0;
    int j = sSize - 1;
    while (i != j && i < j)
    {
        int temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    char s[] = {'h','e','l','l','o'};
    int sSize = 5;
    reverseString(s, sSize);
    for (int i = 0; i < sSize; i++)
        printf("%c ", s[i]);
    return 0;
}
