//
// Created by 黎圣  on 2023/7/10.
//
#include "stdio.h"
#include "stddef.h"
//复杂类型
//自定义数据类型 - 结构体、枚举、联合体

//声明结构体类型
//声明一个学生类型，是想通过学生类型来创建学生变量
//描述学生：属性 - 名字+电话+性别+年龄
//struct Stu  //Stu是结构体标签
//{
//    //结构体的成员变量
//    char name[20];//名字
//    char tel[12];//电话
//    char sex[10];//性别
//    int age[10];//年龄
//}s4;
//
//struct Stu s3;  //全局变量
//int main()
//{
//
//    //创建的是结构体变量
//    struct Stu s1;
//    struct Stu s2;
//    return 0;
//}

//结构体的自引用
//struct Node
//{
//    int data;
//    struct Node *next;
//};
//
//typedef struct Node
//{
//    int data;
//    struct Node *next;
//}Node;
//int main()
//{
//    struct Node n1;
//    Node n2;
//    return 0;
//}

//struct T
//{
//    double weight;
//    short age;
//};
//struct S
//{
//    char c;
//    struct T st;
//    int a;
//    double d;
//    char arr[20];
//};
//int main()
//{
//    struct S s = {'c',{55.6,6},100,3.14,"hello bit"};
//    printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//    printf("%lf\n", s.st.weight);
//    return 0;
//}

//结构体内存对齐
//1、第一个成员在与结构体变量偏移量为0的地址处
//2、其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处
//3、结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍
//4、如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的
//整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍
//对齐数：编译器默认的一个对齐数与改成员大小的较小值

//在设计结构体时既要满足对齐又要节省空间，就让占用空间小的成员尽量集中在一起

//#pragma pack(4) //设置默认对齐数为4
//#pragma pack()  //取消设置的默认对齐数
//struct S1
//{
//    char c1; //从1开始，占一个字节，浪费3个字节内存
//    int a; //从4开始，占四个字节
//    char c2; //从8开始，占一个字节到9
//    //因为结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍所以浪费内存到12
//}; // 12
//struct S2
//{
//    char c1;
//    char c2;
//    int a;
//}; // 8
//struct S3
//{
//    double d;
//    char c;
//    int i;
//}; // 16
//struct S4
//{
//    char c1;
//    struct S3 s3;//前面浪费7个空间，从最大对其倍数8（S3中的double）开始占16个字节
//    double d;
//};// 1+7(浪费)+16+8=24，因为结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍，所以最后为S4大小为32
//int main()
//{
//    struct S1 s1 = {0};
//    printf("%d\n", sizeof(s1));
//    struct S2 s2 = {0};
//    printf("%d\n", sizeof(s2));
//    return 0;
//}



//位段
//1、位段的空间上是按照需要以4个字节（int）或者1个字节（char）的方式来开辟的
//2、位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段
//struct S
//{
//    int a: 2;//占2个比特位
//    int b: 5;//占5比特位
//    int c: 10;//占10个比特位
//    int d: 30;//占30个比特位
//    //一次开辟4个字节（32个比特位）的存储空间，a占2个，b占5个，c占10个，此时存储空间里还剩15个比特位，而d需要30个比特位
//    //把15个比特位浪费掉，重新开辟4个字节的空间用来放d的30的比特位，所以最后占8个字节
//    //位段后面不能大于32
//};
//int main()
//{
//    struct S s;
//    printf("%d\n", sizeof(s));//8个字节
//    return 0;
//}

//struct S
//{
//    char a: 3;
//    char b: 4;
//    char c: 5;
//    char d: 4;
//};//一次开辟1个字节（8个比特位），跟上面一样不够就浪费再开辟1个字节的空间，从右往左使用
//int main()
//{
//    struct S s;
//    s.a = 10;
//    s.b = 20;
//    s.c = 3;
//    s.d = 4;
//    printf("%d\n", sizeof(s));//3个字节
//    return 0;
//}




////枚举
////1、增加代码的可读性和可维护性
////2、和#define定义的标识符比较枚举有类型检查，更加严谨
////3、防止了命名污染（封装）
////4、便于调试
////5、使用方便，一次可以定义多个常量
//enum Sex
//{
//    //枚举的可能取值
//    MALE = 2,//赋一个初始值
//    FEMALE = 4,
//    SECRET = 8
//};
//enum Color
//{
//    RED,//0
//    YELLOW,//1
//    BLUE//2
//};
//int main()
//{
//    enum Sex s = MALE;
//    //enum Color c = BLUE;
//
//    enum Color c = 2;//类型不一样，不能从int转换成color
//    printf("%d %d %d\n", BLUE, RED, YELLOW);
//    return 0;
//}

//int check_sys()
//{
//    int a = 1;
//    return *(char*)&a;
//    //返回1表示小端
//    //返回0表示大端
//}
//int check_sys()
//{
//    union
//    {
//        char c;
//        int i;
//    }u;
//    u.i = 1;
//    //返回1表示小端
//    //返回0表示大端
//    return u.c;
//}
//int main()
//{
//    //int a = 0x11 22 33 44;
//    //低地址---------------------------------高地址
//    //...[][][][][11][22][33][44][][][][][][][]....   大端存储模式
//    //...[][][][][44][33][22][11][][][][][][][]....   小端存储模式，数字的地位放在地址的低地址
//    int a = 1;
//    int ret = check_sys();
//    if (1 == ret)
//        printf("小端\n");
//    else
//        printf("大端\n");
//    return 0;
//}

//联合-联合体-共用体
//公用同一块内存空间，一个联合变量的大小，至少是最大成员的大小（因为联合至少得有能力保存最大的那个成员）
//联合的大小至少是最大成员的大小
//当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍
//union Un
//{
//    //char c;
//    int a;
//    char arr[5];
//};// 8
//int main()
//{
//    union Un u;
////    printf("%d\n", sizeof(u));
////    printf("%p\n", &(u));
////    printf("%p\n", &(u.c));
////    printf("%p\n", &(u.i));
//    printf("%d\n", sizeof(u));
//    return 0;
//}
