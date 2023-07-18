//
// Created by 黎圣  on 2023/6/14.
//
#include "stdio.h"
#include "string.h"
#include "assert.h"
#include "errno.h"
#include "ctype.h"
//strlen - 找到\0结束，找不到\0就是随机值
//strlen - strlen返回的是无符号数
//1、计数器的方法
//2、递归
//3、指针-指针
//int my_strlen(const char *str)
//{
//    int count = 0;
//    assert(str != NULL);
//    while(*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//int main()
//{
//    int len = my_strlen("abcdef");
//    char arr[] = {'a','b','c'};//错误示范
//
//    printf("%d\n", len);
//    return 0;
//}

//strcpy（目的数据，原数据）
//char* my_strcpy(char *dest, const char *src)
//{
//    assert(dest != NULL);
//    assert(src != NULL);
//    char *ret = dest;
//    //拷贝src指向的字符串到dest指向的空间，包含'\0'
//    while(*src != '\0')
//    {
//        *dest = *src;
//        dest++;
//        src++;
//    }
//    *dest = *src;//拷贝的是\0
//    //返回目的空间的起始地址
//    return ret;
//}
//int main()
//{
//    char arr1[] = "abcdefg";
//    char arr2[] = "bit";
//
//    //错误示范
//    //char *p = "abcdefg";//p指向的是常量字符串，不能被修改
//    //char arr2[] = {'b','i','t'};
//
//    my_strcpy(arr1, arr2);
//    printf("%s\n", arr1);
//    return 0;
//}

//strcat
//源字符串必须以\0结束
//目标空间必须足够大，能够容纳下源字符串的内容
//目标空间必须可修改
//char *my_strcat(char *dest,const char *src)
//{
//    char *ret = dest;
//    assert(dest != NULL && src != NULL);
//    //1、找到目的字符串的'\0'
//    while(*dest != '\0')
//    {
//        dest++;
//    }
//    //2、追加
//    while(*src != '\0')
//    {
//        *dest = *src;
//        dest++;
//        src++;
//    }
//    return ret;
//}
//int main()
//{
////    char arr1[] = "hello";
////    char arr2[] = "world";
////    strcat(arr1, arr2);//目标空间不够大，程序会崩溃，越界访问
//    char arr1[30] = "hello";
//    char arr2[] = "world";
//    strcat(arr1, arr2);
//    printf("%s\n", arr1);
//    return 0;
//}

//strcmp
//第一个字符串大于第二个字符串，则返回大于0的数字
//第一个字符串等于第二个字符串，则返回0
//第一个字符串小于第二个字符串，则返回小于0的数组
//int my_strcmp(const char *str1, const char *str2)
//{
//    assert(str1 != NULL && str2 != NULL);
//    //比较
//    while(*str1 == *str2)
//    {
//        if(*str1 == '\0')
//        {
//            //两个字符串完全相等
//            return 0;
//        }
//        str1++;
//        str2++;
//    }
//    //不相等了
//    if(*str1 > *str2)
//        return 1;
//    else
//        return -1;
//}
//int main()
//{
//    char *p1 = "qbc";//6
//    char *p2 = "abc";//5
//    int ret = my_strcmp(p1, p2);
//
//    printf("%d\n", ret);
//    return 0;
//}
//struct Book
//{
//    char id[20];
//    char name[50];
//    int price;
//};
//typedef struct
//{
//    struct Book *elem;
//    int length;
//}SqList;
//typedef struct LNode
//{
//    struct Book data;
//    struct LNode *next;
//}LNode, *LinkList;

////strstr - 查找字符串
//char *my_strstr(const char *p1, const char *p2)
//{
//    assert(p1 != NULL && p2 != NULL);
//    char *s1 = p1;
//    char *s2 = p2;
//    char *cur = p1;
//    if (*p2 == '\0')
//    {
//        return p1;
//    }
//    while (*cur != '\0')
//    {
//        s1 = cur;
//        s2 = p2;
//        while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
//        {
//            s1++;
//            s2++;
//        }
//        //匹配失败
//        if (*s2 == '\0')//找到了
//        {
//            return cur;
//        }
//        cur++;
//    }
//    return NULL;//找不到子串
//}
//int main()
//{
//    char *p1 = "abcdefg";
//    char *p2 = "def";
//    char *ret = my_strstr(p1, p2);
//    if (ret == NULL)
//        printf("子串不存在\n");
//    else
//        printf("%s\n", ret);
//    return 0;
//}

//int main()
//{
//    //错误码
//    //0 - No error
//    //1 - Operation not permitted
//    //2 - No such file or directory
//    //errno 是一个全局的错误码的变量
//    //当c语言的库函数在执行过程中发生了错误，就会把对应的错误码，赋值到errno中
//    char *str = strerror(errno);
//
//    FILE * pf = fopen("test.txt", "r");
//    if (pf == NULL)
//    {
//        printf("%s\n", strerror(errno));
//    }
//    else
//        printf("成功");
//    return 0;
//}