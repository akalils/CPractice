#include <stdio.h>

//
// Created by 黎圣  on 2023/3/31.
//
//int main()
//{
//    double a = 5 / 2.0;//商2余1
//    printf("%lf", a);
//    return 0;
//}

//int main()
//{
//    int a = 16;
//    //>> - 右移操作符
//    //移动的是二进制位
//    //00000000000000000000000000010000
//    int b = a >> 1;
//    //1、算术右移
//    //右边丢弃，左边补原符号位
//
//    //2、逻辑右移
//    //右边丢弃，左边补0
//
//    //整数的二进制表示有：原码、反码、补码
//    //存储到内存的是补码
//    //10000000000000000000000000000001 - 原码
//    //11111111111111111111111111111110 - 反码
//    //11111111111111111111111111111111 - 补码（反码+1）
//    printf("%d", b);
//    return 0;
//}

//int main()
//{
//    int a = 5;
//    int b = a << 1;
//    //00000000000000000000000000000101
//    //左移操作符：
//    //左边丢弃，右边补0
//    printf("%d",b);
//    return 0;
//}

//int main()
//{
//    //& - 按位与（有0则0）
//    //int a = 3;
//    //int b = 5;
//    //int c = a & b;
//    //a = 011
//    //b = 101
//    //c = 001
//    //printf("%d",c);
//
//    //｜ - 按位或（有1则1）
////    int a = 3;
////    int b = 5;
////    int c = a|b;
////    //a = 011
////    //b = 101
////    //c = 111
////    printf("%d",c);
//
//    //^ - 按位异或（相同为0，相异为1）
//    int a = 3;
//    int b = 5;
//    int c = a^b;
//    //a = 011
//    //b = 101
//    //c = 110
//    printf("%d",c);
//    return 0;
//}

//不用第三个变量来交换ab的值
//int main()
//{
//    int a = 3;
//    int b = 5;
////    //加减法 - 可能会溢出
////    a = a + b;//a = 8
////    b = a - b;//b = 3
////    a = a - b;//a = 5
////    printf("加减法：a=%d b=%d\n",a,b);
//
//    //异或方法
//    a = a^b;
//    b = a^b;
//    a = a^b;
//    printf("异或法：a=%d b=%d\n",a,b);
//    return 0;
//}

//求一个整数存储在内存中的二进制中1的个数
//int main()
//{
//    int count = 0;
//    int num = 0;
//    scanf("%d",&num);//3 - 011
//    //方法一
//    // 统计num的补码中有几个1
////    while(num != 0)
////    {
////        if(num % 2 == 1)
////            count++;
////        num = num / 2;
////    }
//
//    //方法二
//    int i = 0;
//    for(i = 0;i < 32;i++)
//    {
//        if(1 == ((num >> i) & 1))
//            count++;
//    }
//    printf("%d",count);
//    return 0;
//}

//int main()
//{
//    int a = 10;
//    char c = 'r';
//    char *p = &c;
//    int arr[10] = {0};
//    //sizeof计算的是变量所占内存空间的大小，单位是字节
//    printf("%d\n",sizeof(a));
//    printf("%d\n",sizeof(c));
//    printf("%d\n",sizeof(p));
//    printf("%d\n",sizeof(arr));
//    return 0;
//}

//int main()
//{
//    short s = 0;
//    int a = 10;
//    printf("%d\n", sizeof(s = a + 5));//不计算
//    printf("%d\n", s);
//    return 0;
//}

//void test1(int arr[])
//{
//    printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//    printf("%d\n", sizeof(ch));
//}
//int main()
//{
//    int arr[10] = {0};//一个整形是4个字节
//    char ch[10] = {0};//一个char是1个字节
//    printf("%d\n", sizeof(arr));
//    printf("%d\n", sizeof(ch));
//    test1(arr);
//    test2(ch);
//    return 0;
//}

//int main()
//{
//    int i = 0, a = 1, b = 2, c = 3, d = 4;
//    //i = a++ && ++b && d++;
//    // && 遇到真才往下执行
//    i = a++ || ++b || d++;
//    // || 遇到真就停止
//    printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//    return 0;
//}

////学生
////创建了一个结构体类型 - struct Stu
//struct Stu
//{
//    //成员变量
//    char name[20];
//    int age;
//    char id[20];
//};
//int main()
//{
//    int a = 10;
//    //使用struct Stu结构体类型创建了一个学生对象s1
//    struct Stu s1 = {"张三",20,"25"};
//    struct Stu *ps = &s1;
//    //结构体变量.成员名
//    printf("%s\n", s1.name);
//    printf("%d\n", s1.age);
//    printf("%s\n", s1.id);
//    printf("%s\n", (*ps).name);
//    //结构体指针->成员名
//    printf("%s\n", ps->name);
//    return 0;
//}

//int main()
//{
//    char a = 3;
//    //00000000000000000000000000000011
//    //a = 00000011
//    char b = 127;
//    //00000000000000000000000001111111
//    //b = 01111111
//
//    //a和b如何相加
//    //a = 00000000000000000000000000000011
//    //b = 00000000000000000000000001111111
//    //c = 00000000000000000000000010000010
//    //11111111111111111111111010000010 - 补码
//    //11111111111111111111111010000001 - 反码
//    //10000000000000000000000011111110 - 原码
//    char c = a + b;
//    printf("%d",c);
//    return 0;
//}

//int main()
//{
//    char a = 0xb6;
//    short b = 0xb600;
//    int c = 0xb6000000;
//    if(a == 0xb6)
//        printf("a");
//    if(b == 0xb600)
//        printf("b");
//    if(c == 0xb6000000)
//        printf("c");
//    return 0;
//}

int main()
{
    int i = 1;
    int a = (++i) + (++i) + (++i);
    printf("%d",a);
    return 0;
}