//
// Created by 黎圣  on 2023/7/12.
//

#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "stdio.h"
#include "errno.h"
//int main()
//{
//    //int a = 10;//局部变量 - 栈区
//    //栈区 - 存放局部变量，函数的形式参数
//    //int g_a = 10;//全局变量 - 静态区
//    //静态区 - 存放全局变量，静态变量
//    //动态内存是专门在堆区内分配的
//    //malloc
//    //free
//    //calloc
//    //realloc
//
//    //向内存申请10个整形的空间
//    int *p = (int*)malloc(10*sizeof(int ));
//    if (p == NULL)
//        printf("%s\n", strerror(errno));
//    else
//    {
//        int i = 0;
//        for (i = 0; i < 10; i++)
//        {
//            *(p + i) = i;
//        }
//        for (i = 0; i < 10; i++)
//        {
//            printf("%d ", *(p + i));
//        }
//    }
//    //当动态申请的空间不再使用的时候就应该还给操作系统
//    free(p);
//    p = NULL;
//    return 0;
//}

//int main()
//{
//    //向内存申请10个整形的空间
//    //malloc(10*sizeof(int))
//    int *p = calloc(10, sizeof(int));
//    if (p == NULL)
//    {
//        printf("%s\n", strerror(errno));
//    }
//    else
//    {
//        int i = 0;
//        for (i = 0; i < 10; i++)
//        {
//            *(p + i) = i;
//            printf("%d ",*(p + i));
//        }
//    }
//    free(p);
//    p = NULL;
//    return 0;
//}


//realloc调整动态内存开辟空间的大小
//int main()
//{
//    int *p = (int*)malloc(20);
//    if (p == NULL)
//        printf("%s\n", strerror(errno));
//    else
//    {
//        int i = 0;
//        for (i = 0; i < 5; i++)
//        {
//            *(p + i) = i;
//        }
//    }
//    //只是在使用malloc开辟的20个字节的空间
//    //假设这里20个字节不能满足使用要求
//    //希望能够有40个字节的空间
//    //realloc使用注意事项
//    //1、如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//    //2、如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数回重新找一块新的内存区域
//    // 开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间，最后返回新开辟的内存空间地址
//    //3、得用一个新的变量来接收realloc函数的返回值
//    int *ptr = realloc(p, 40);
//    if (ptr != NULL)
//    {
//        p = ptr;
//        int i = 0;
//        for (i = 5; i < 10; i++)
//        {
//            *(p + i) = i;
//        }
//        for (i = 0; i < 10; i++)
//        {
//            printf("%d ", *(p + i));
//        }
//    }
//    free(p);
//    p = NULL;
//    return 0;
//}

//int main()
//{
//    //对动态开辟对内存对越界访问
//    int *p = (int*) malloc(5*sizeof(int));
//    if (p == NULL)
//        return 0;
//    else
//    {
//        int i = 0;
//        for (i = 0; i < 10; i++)
//        {
//            *(p + i) = i;
//        }
//    }
//    free(p);
//    p = NULL;
//    return 0;
//}

//int main()
//{
    //1、对NULL指针解引用操作
    //int *p = (int*)malloc(40);
    //对p进行相关对判断
    //*p = 10;//malloc开辟空间失败 - 有可能对NULL指针解引用

    //2、对动态开辟内存的越界访问
//    int *p = (int*)malloc(40);//10个int 0-9
//    if (p == NULL)
//        return 0;
//    int i = 0;
//    //越界
//    for (i = 0; i <= 10; i++)
//    {
//        *(p + i) = i;
//    }
//    free(p);
//    p = NULL;

//    //3、对非动态开辟内存使用free释放
//    int a = 10;
//    int *p = &a;
//    //对非动态开辟内存使用free释放
//    free(p);
//    p = NULL;

//    //4、使用free释放动态开辟内存的一部分
//    int *p = (int*) malloc(40);
//    if (p == NULL)
//        return 0;
//    int i = 0;
//    for (i = 0; i < 10; i++)
//        *p++ = i;
//    //回收空间
//    //使用free释放动态开辟内存的一部分
//    free(p);
//    p = NULL;

//    //5、对同一块动态内存的多次释放
//    int *p = (int*)malloc(40);
//    if (p == NULL)
//        return 0;
//    //使用
//    //释放空间
//    free(p);
//    //....
//    free(p);
//    return 0;

//    //6、动态开辟内存忘记释放（内存泄露）
//    while(1)
//    {
//        malloc(1);
//    }
//}


////1、运行代码会出现崩溃现象
////2、存在内存泄漏的问题
////str以值传递的形式给p，p是GetMemory函数的形参，只在函数内部有效
////等GetMemory函数返回之后，动态开辟内存尚未释放，并且无法找到，所以会造成内存泄漏
//void GetMemory(char *p)
//{
//    p = (char*)malloc(100);
//}
//void Test(void)
//{
//    char *str = NULL;
//    GetMemory(str);
//    strcpy(str, "hello world");
//    printf(str);
//}
//int main()
//{
//    Test();
//    return 0;
//}

////正确形式1
//void GetMemory(char **p)
//{
//    *p = (char*)malloc(100);
//}
//void Test(void)
//{
//    char *str = NULL;
//    GetMemory(&str);
//    strcpy(str, "hello world");
//    printf(str);
//    free(str);
//    str = NULL;
//}
//int main()
//{
//    Test();
//    return 0;
//}

////正确形式2
//char* GetMemory(char *p)
//{
//    p = (char*)malloc(100);
//    return p;
//}
//void Test(void)
//{
//    char *str = GetMemory(str);
//    strcpy(str, "hello world");
//    printf(str);
//    free(str);
//    str = NULL;
//}
//int main()
//{
//    Test();
//    return 0;
//}


struct S
{
    int n;
    int arr[];//未知大小，柔性数组成员 - 数组的大小是可以调整的
};
int main()
{
    struct S s;
    //printf("%d\n", sizeof(s));
    struct S* ps = (struct S*)malloc(sizeof(struct S) + 5*sizeof(int));
    ps->n = 100;
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        ps->arr[i] = i;
    }
    struct S* ptr = realloc(ps, 44);
    if (ptr != NULL)
        ps = ptr;
    for (i = 5; i < 10; i++)
    {
        ps->arr[i] = i;
    }
    for (i = 0; i < 10; i++)
        printf("%d ",ps->arr[i]);
    free(ps);
    ps = NULL;
    return 0;
}