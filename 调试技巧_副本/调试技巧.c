//
// Created by 黎圣  on 2023/5/5.
//
#include <stdio.h>
#include "stdlib.h"
#include "assert.h"
//int main()
//{
//    int i = 0;
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    for (i = 0; i <= 12; i++)
//    {
//        printf("hehe\n");
//        arr[i] = 0;
//    }
//    return 0;
//}

//int main()
//{
//    int i = 0;
//    for (i = 0; i < 100; i++)
//    {
//        printf("%d ", i);
//    }
//    for (i = 0; i < 100; i++)
//    {
//        printf("%d ", 10 - i);
//    }
//    return 0;
//}

//int main()
//{
//    int arr[10] = {0};
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        arr[i] = i;
//    }
//    return 0;
//}


//int main()
//{
//    int i = 0;
//    int sum = 0;
//    int n = 0;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        int ret = 1;
//        int j = 0;
//        for (j = 1; j <= i; j++)
//        {
//            ret *= j;
//        }
//        sum += ret;
//    }
//    printf("%d\n", sum);
//    return 0;
//}

//int main()
//{
//    int i = 0;
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    printf("%p\n", &i);
//    printf("%p\n", arr);
//    for (i = 0; i <= 12; i++)
//    {
//        printf("hehe\n");
//        arr[i] = 0;
//    }//栈区的默认使用：先使用高地址处的空间，再使用低地址处的空间
//    //数组随着下标的增长，地址是由低到高变化
//    return 0;
//}

//void my_strcpy(char* destination, char* source)
//{
//    while(*source != '\0')
//    {
//        *destination = *source;
//        *destination++;
//        *source++;
//    }
//    *destination = *source;//把\0拷贝过去
//}


//char *my_strcpy(char* destination, const char* source)
//{
//    char *ret = destination;
//    assert(destination != NULL);//assert()如果为真则什么都不发生，如果为假则报错
//    assert(source != NULL);
//    //把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
//    while(*destination++ = *source++)
//    {
//        ;
//    }
//    return ret;
//}
//int main()
//{
//    //stycpy
//    //字符串拷贝
//    char arr1[] = "###############";
//    char arr2[] = "bit";
//    printf("%s\n", my_strcpy(arr1,arr2));
//    return 0;
//}

//int main()
//{
//    const int num = 10;
//    const int *p = &num;
//    //const 放在指针变量的*左边，修饰的是*p，也就是说不能通过p来改变*p的值
//    //const 放在指针变量的*右边，修饰的是指针变量p
//    *p = 20;
//    int n = 100;
//    p = &n;
//    return 0;
//}

int my_strlen(const char *str)
{
    int count = 0;
    assert(str != NULL);//断言，保证指针的有效性
    while(*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}
int main()
{
    char arr[] = "abcdef";
    int len = my_strlen(arr);
    printf("%d\n", len);
    return 0;
}