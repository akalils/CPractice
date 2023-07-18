//
// Created by 黎圣  on 2023/4/6.
//
#include <stdio.h>
//int main()
//{
////    int a = 10;
////    int *p = &a;//指针变量
////    printf("%d\n",sizeof(char *));
////    printf("%d\n",sizeof(short *));
////    printf("%d\n",sizeof(int *));
////    printf("%d\n", sizeof(double *));
//    int a = 0x11223344;
//    char *pa = &a;
//    *pa = 0;
//    //指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//    //int *p:*p能够访问4个字节
//    //char *p:*p能够访问1个字节
//    //double *p:*p能够访问8个字节
////    char *pc = &a;
//    printf("%p\n", pa);
////    printf("%p\n", pc);
//    return 0;
//}

////指针+-整数
//int main()
//{
//    int a = 0x11223344;
//    int *pa = &a;
//    char *pc = &a;
//    printf("%p\n", pa);
//    printf("%p\n", pa+1);
//    printf("%p\n", pc);
//    printf("%p\n", pc+1);
//    //指针类型决定了指针走一步走多远（指针的步长）
//    //int *p;p+1 --> 4
//    //char *p;p+1 --> 1
//    //double *p;p+1 --> 8
//    return 0;
//}

//int main()
//{
//    int arr[10] = {0};
//    int *p = arr;//数组名 - 首元素的地址
//    int i = 0;
//    for(i = 0;i<10;i++)
//    {
//        *(p + i) = 1;
//    }
//    return 0;
//}
//

////野指针：指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）
//int *test()
//{
//    int a = 10;//局部变量，出括号就销毁
//    return &a;
//}
//int main()
//{
//    int *p = test();
//    *p = 20;
//    printf("%d\n",*p);
//    return 0;
//}

// 1、指针未初始化
//int main()
//{
//    //int a;//局部变量不初始化，默认是随机值
//    int *p;//局部的指针变量，被初始化随机值
//    *p = 20;//野指针
//    return 0;
//}

//2、指针越界访问
//int main()
//{
//    int arr[10] = {0};
//    int* p = arr;
//    int i = 0;
//    for(i=0;i<=11;i++)
//    {
//        //当指针指向的范围超出数组arr的范围时，p就是野指针
//        *(p++) = i;
//    }
//    return 0;
//}

//int main()
//{
//    int a = 10;
//    int *pa = &a;
//    int *p = NULL;//NULL - 用来初始化指针的，给指针赋值
//    *p = 10;
//    return 0;
//}

//指针+整数
//int main()
//{
//    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int i = 0;
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    int *p = arr;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", *p);
//        p = p + 1;//指针+整数
//    }
//    return 0;
//}

////指针-指针
//int main()
//{
//    char ch[5] = {0};
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    printf("%d\n", &arr[9] - &arr[0]);//得到指针和指针之间元素个数，一定指向同一块空间
//    return 0;
//}

//strlen - 求字符串长度
//int my_strlen(char *str)
//{
//    char *start = str;
//    char *end = str;
//    while(*end != '\0')
//    {
//        end++;
//    }
//    return end - start;//
//}
//int main()
//{
//    char arr[] = "bit";
//    int len = my_strlen(arr);
//    printf("%d\n", len);
//    return 0;
//}


//int main()
//{
//    int arr[10] = {0};
//    printf("%p\n", arr);//地址-首元素的地址
//    printf("%p\n", arr+1);
//    printf("%p\n", &arr[0]);
//    printf("%p\n", &arr[0]+1);
//    printf("%p\n", &arr);
//    printf("%p\n", &arr+1);
//
//    //1、&arr - &数组名 - 数组名不是首元素的地址 - 数组名表示整个数组 &数组名取出的是整个数组的地址
//    //2、sizeof(arr) - sizeof(数组名) - 数组名表示的是整个数组 - sizeof(数组名)计算的是整个数组的大小
//
//    return 0;
//}

//int main()
//{
//    int arr[10] = {0};
//    int *p = arr;
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%p ====== %p\n", p+i, &arr[i]);
//    }
//    return 0;
//}

////二级指针
//int main()
//{
//    int a = 10;
//    int *pa = &a;
//    int **ppa = &pa;//ppa就是二级指针
//    int ***pppa = &ppa;
//    return 0;
//}

////指针数组 - 数组 - 存放指针的数组
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int c = 30;
//    int *pa = &a;
//    int *pb = &b;
//    int *pc = &c;
//    //整形数组 - 存放整形
//    //字符数组 - 存放字符
//    //指针数组 - 存放指针
//    int *arr[3] = {&a,&b,&c};//指针数组
//    int i = 0;
//    for (i = 0;i < 3;i++)
//    {
//        printf("%d ",*(arr[i]));
//    }
//    return 0;
//}
////数组指针 - 指针

