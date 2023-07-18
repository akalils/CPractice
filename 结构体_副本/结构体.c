//
// Created by 黎圣  on 2023/5/3.
//
#include "stdio.h"


//描述一个学生 - 一些数据
//名字
//年龄
//电话
//性别

////struct - 结构体关键字 Stu - 结构体标签
////struct Stu - 结构体类型
//struct Stu
//{
//    //成员变量
//    char name[20];
//    int age;
//    char tel[12];
//    char sex[5];
//} s1, s2, s3;//s1,s2,s3是三个全局的结构体变量

//typedef struct Stu
//{
//    //成员变量
//    char name[20];
//    int age;
//    char tel[12];
//    char sex[5];
//}Stu;//typedef的作用是重新命名为Stu

//struct Stu
//{
//    //成员变量
//    char name[20];
//    int age;
//    char tel[12];
//    char sex[5];
//}Stu;
//int main()
//{
//    struct Stu s1 = {"张三",20,"18925568242","男"};//局部变量
//    struct Stu s2 = {"旺财",30,"1112223334","女"};
//    struct Stu s;//创建局部的结构体变量
//    return 0;
//}

//struct S
//{
//    int a;
//    char c;
//    char arr[20];
//    double d;
//};
//
//struct T
//{
//    char ch[10];
//    struct S s;//结构体的成员可以是其他结构体
//    char *pc;
//};
//int main()
//{
//    char arr[] = "hello bit\n";
//    struct T t = {"hehe",{10,'w',"hello world",3.14},arr};
//    printf("%s\n", t.ch);//hehe
//    printf("%s\n", t.s.arr);//hello world
//    printf("%lf\n", t.s.d);//3.14
//    printf("%s\n", t.pc);//hello bit
//    return 0;
//}

//typedef struct Stu
//{
//    //成员变量
//    char name[20];
//    int age;
//    char tel[12];
//    char sex[5];
//}Stu;
//
//void Print1(Stu s)
//{
//    printf("name:%s\n", s.name);
//    printf("age:%d\n", s.age);
//    printf("tel:%s\n", s.tel);
//    printf("sex:%s\n", s.sex);
//}
//void Print2(Stu *ps)
//{
//    printf("name:%s\n", ps->name);
//    printf("age:%d\n", ps->age);
//    printf("tel:%s\n", ps->tel);
//    printf("sex:%s\n", ps->sex);
//}
//int main()
//{
//    Stu s = {"李四",40,"1111111111","男"};
//    //打印结构体数据
//    //Print2更好更省空间，传结构体的地址
//    Print1(s);
//    Print2(&s);
//    return 0;
//}

int Add(int x,int y)
{
    int z = 0;
    z = x + y;
    return z;
}
int main()
{
    int a = 10;
    int b = 20;
    int ret = 0;
    ret = Add(a, b);
    return 0;
}