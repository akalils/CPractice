//
// Created by 黎圣  on 2023/5/26.
//
#include "stdio.h";
#include "stdlib.h";
#include "string.h";
////一维数组
//int main()
//{
//    //数组名是首元素的地址
//    //例外：1.sizeof(数组名) - 数组名表示整个数组
//    //     2.&数组名 - 数组名表示整个数组 - &数组名 是数组的地址
//    //除此之外所有的数组名都是首元素的地址
//    int a[] = {1,2,3,4};
//    printf("%d\n", sizeof(a));// 16 sizeof(数组名) - 计算的是数组总大小，单位是字节
//    printf("%d\n", sizeof(a + 0));//4/8 - 数组名是首元素的地址，a+0还是首元素的地址，地址的大小就是4/8个字节
//    printf("%d\n", sizeof(*a));//4 - 数组名表示首元素地址，*a就是首元素
//    printf("%d\n", sizeof(a + 1));//4/8 - 数组名是首元素的地址，a+1是第二个元素的地址
//    printf("%d\n", sizeof(a[1]));//4 - 第二个元素的大小
//    printf("%d\n", sizeof(&a));//4/8 - &a取出的是数组的地址，但是数组的地址也是地址，地址的大小就是4/8个字节
//    printf("%d\n", sizeof(*&a));//16 - &a是数组的地址，数组的地址解引用访问的数组，sizeof计算的就是数组的大小，单位是字节
//    printf("%d\n", sizeof(&a + 1));//4/8 - &a是数组的地址，&a+1虽然跳过了整个数组，但还是一个地址
//    printf("%d\n", sizeof(&a[0]));//4/8 - 第一个元素的地址
//    printf("%d\n", sizeof(&a[0] + 1));//4/8 - 第二个元素的地址
//    return 0;
//}

//int main()
//{
//    char arr[] = {'a','b','c','d','e','f'};
//    printf("%d\n", sizeof(arr));//6 - sizeof计算的是数组大小，6个元素，每个元素1个字节
//    printf("%d\n", sizeof(arr + 0));//4/8 - arr是首元素的地址，arr+0还是首元素的地址，地址的大小就是4/8个字节
//    printf("%d\n", sizeof(*arr));//1 - arr是首元素的地址，*arr就是首元素
//    printf("%d\n", sizeof(arr[1]));//1 - 第二个元素的大小
//    printf("%d\n", sizeof(&arr));//4/8 - &arr 虽然是数组的地址，但还是地址，地址的大小就是4/8个字节
//    printf("%d\n", sizeof(&arr + 1));//4/8 - &arr+1 是跳过整个数组后的地址，但还是地址，地址的大小就是4/8个字节
//    printf("%d\n", sizeof(&arr[0] + 1));//4/8 - &arr[0]第一个元素的地址，+1是第二个元素的地址
//    return 0;
//}

//int main()
//{
//    char arr[] = {'a','b','c','d','e','f'};
//    printf("%d\n", strlen(arr));//随机值 - 不知道什么时候能找到\0
//    printf("%d\n", strlen(arr + 0));//随机值 - 与上面写法完全相同
//    //printf("%d\n", strlen(*arr));//err - *arr是首元素地址，把97当成地址，从97往后数
//    //printf("%d\n", strlen(arr[1]));//err - 跟上面相同，从98往后数
//    printf("%d\n", strlen(&arr));//随机值 - 与第一条相同
//    printf("%d\n", strlen(&arr + 1));//与随机值相差6
//    printf("%d\n", strlen(&arr[0] + 1));//从'b'开始数，所以为随机值-1
//    return 0;
//}

//int main()
//{
//    char arr[] = "abcdef";
//
////    printf("%d\n", sizeof(arr));//7 - sizeof(arr)计算的是数组的大小，单位是字节
////    printf("%d\n", sizeof(arr + 0));//4/8 - 计算的是地址的大小，arr+0是首元素的地址，地址的大小是4/8个字节
////    printf("%d\n", sizeof(*arr));//1 - arr是首元素的地址，*arr是首元素，sizeof(*arr)是计算首元素的大小
////    printf("%d\n", sizeof(arr[1]));//1 - arr[1]第二个元素，sizeof(arr[1])计算的是第二个元素的大小
////    printf("%d\n", sizeof(&arr));//4/8 - &arr是整个数组的地址，地址的大小是4/8个字节
////    printf("%d\n", sizeof(&arr + 1));//4/8 - &arr+1是跳过整个数组后的地址，但也是地址
////    printf("%d\n", sizeof(&arr[0] + 1));//4/8 - &arr[0]+1是第二个元素的地址
//
//    printf("%d\n", strlen(arr));//6 - 从首元素地址开始数，strlen遇到\0停止
//    printf("%d\n", strlen(arr + 0));//6 - 从首元素地址开始数，同上
//    //printf("%d\n", strlen(*arr));//err - *arr把首元素地址解引用结果找到'a'，把'a'传给strlen，从97往后数，非法访问内存
//    //printf("%d\n", strlen(arr[1]));//err - 把第二个元素传给strlen，把'98'当成地址，非法访问内存同上
//    printf("%d\n", strlen(&arr));//6 - &arr是数组的地址，strlen把数组的地址当成其实地址向后找字符，与第一种相同
//    printf("%d\n", strlen(&arr + 1));//随机值 - 从\0后开始数
//    printf("%d\n", strlen(&arr[0] + 1));//5 - &arr[0]是a的地址，&arr[0]+1是b的地址，从b开始往后数
//    return 0;
//}

//int main()
//{
//    char *p = "abcdef";//p里面放的是字符a的地址
//
////    printf("%d\n", sizeof(p));//4/8 - 字符a的地址
////    printf("%d\n", sizeof(p + 1));//4/8 - p+1得到的是字符b的地址
////    printf("%d\n", sizeof(*p));//1 *p就是字符串的第一个字符，也就是字符a
////    printf("%d\n", sizeof(p[0]));//1 - p[0] == *(p+0) == 'a'
////    printf("%d\n", sizeof(&p));//4/8 - &p拿到的是p的地址
////    printf("%d\n", sizeof(&p + 1));//4/8 - *p+1拿到的是跳过p的地址
////    printf("%d\n", sizeof(&p[0] + 1));//4/8 - &p[0]就是a的地址，&p[0]+1就是b的地址
//
//    printf("%d\n", strlen(p));//6 - 传给strlen的是字符a的地址，从a开始往后数
//    printf("%d\n", strlen(p + 1));//5 - p+1存放的是字符b的地址，从b开始向后数
//    //printf("%d\n", strlen(*p));//err - p里放的是字符a的地址，*p就把字符a传给strlen了
//    //printf("%d\n", strlen(p[0]));//err - 同上
//    printf("%d\n", strlen(&p));//随机值 - 假设字符a的地址是0x0012ff44，则a本身的八进制值是44 ff 12 00，strlen检测到0则停止，
//    但如果字符a的地址是0x12324466，结果则不详，所以是随机值
//    printf("%d\n", strlen(&p + 1));//随机值 - 同上
//    printf("%d\n", strlen(&p[0] + 1));//5 - &p[0]拿出第一个元素的地址，&p[0]+1则是第二个元素的地址，从第二个元素开始往后数
//    return 0;
//}

//int main()
//{
//    //二维数组
//    int a[3][4] = {0};
//
//    printf("%d\n", sizeof(a));//48 - 3*4*4，每个整型4个字节
//    printf("%d\n", sizeof(a[0][0]));//4 - 第一行第一个元素，一个整型4个字节
//    printf("%d\n", sizeof(a[0]));//16 - 把二维数组看成一维数组，a[0]相当于第一行作为一维数组的数组名，
//    // 计算的是第一行的大小，每行4个整型，一个整型4个字节
//    printf("%d\n", sizeof(a[0] + 1));//4/8 - a[0]放在表达式中，表示的是第一行第一个元素的地址，a[0]+1是第一行第二个元素的地址
//    printf("%d\n", sizeof(*(a[0] + 1)));//4 - a[0]+1是第一行第二个元素的地址，解引用就是第一行第二个元素，一个整型的大小是4个字节
//    printf("%d\n", sizeof(a + 1));//4/8 - a是二维数组的数组名，没有sizeof(数组名)，也没有&，所有a是首元素地址，
//    // 而把二维数组看成一维数组时二维数组的首元素是他的第一行，a就是第一行（首元素）地址，a+1就是第二行的地址
//    printf("%d\n", sizeof(*(a + 1)));//16 - sizeof(a[1]) 计算第二行的大小，单位是字节
//    printf("%d\n", sizeof(&a[0] + 1));//4/8 - 计算的是第二行的地址
//    printf("%d\n", sizeof(*(&a[0] + 1)));//16 - 第二行的地址解引用，计算的就是第二行的大小
//    printf("%d\n", sizeof(*a));//16 - a是首元素，就是第一行的地址，*a就是第一行的大小
//    printf("%d\n", sizeof(a[3]));//16 - a[3]不会真的访问第四行，sizeof里面的表达式是不参与真实运算的，与跟a[0]同理
//    return 0;
//}

//int main()
//{
//    int a[5] = {1,2,3,4,5};
//    int *ptr = (int *)(&a + 1);
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//    //(a+1)是首元素地址+1就是2的地址，解引用就是字符2
//    //ptr-1指向的是字符5的地址，解引用则访问的是5
//    return 0;
//}


struct Test
{
    int Num;
    char *pcName;
    short sDate;
    char cha[2];
    short sBa[4];
} *p;
//假设p的值为0x100000。如下表表达式的值分别为多少？
//已知结构体Test类型的变量大小是20个字节
//指针+-整数取决于指针类型
//int main()
//{
//    p = (struct Test*)0x100000;
//    printf("%p\n", p + 0x1);//0x100020
//    printf("%p\n", (unsigned long)p + 0x1);//0x10001 - 转换成整型类型，直接相加就行，+1就是+1
//    printf("%p\n", (unsigned int*)p + 0x1);//0x10004 - 跳过一个整型字节，就是+4
//    return 0;
//}

//int main()
//{
//    int a[4] = {1,2,3,4};
//    int *ptr1 = (int*)(&a + 1);//跳过数组a
//    int *ptr2 = (int*)((int)a + 1);
//    printf("%x,%x", ptr1[-1], *ptr2);
//    //ptr[-1] = *(ptr1+(-1)) = *(ptr1-1)就是往前挪一个整型
//    return 0;
//}

//int main()
//{
//    int a[3][2] = {(0,1),(2,3),(4,5)};//逗号表达式
//    //                    1           3           5
//    // 1 3
//    // 5 0
//    // 0 0
//    int *p;
//    p = a[0];
//    printf("%d", p[0]);
//    return 0;
//}

//int main()
//{
//    int a[5][5];
//    int (*p)[4];
//    p = a;
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//指针-指针=前面指针与后面指针之间的元素个数
//    return 0;
//}

//int main()
//{
//    int aa[2][5] = {1,2,3,4,5,6,7,8,9,10};
//    int *ptr1 = (int *) (&aa + 1);
//    int *ptr2 = (int *) (*(aa + 1));
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//    return 0;
//}

//int main()
//{
//    char *a[] = {"work", "at", "alibaba"};//a里放入字符'w','a','a'的地址
//    char **pa = a;//char**指向char*
//    pa++;//跳过一个char*
//    printf("%s\n", *pa);//*pa里放入'a'的地址
//    return 0;
//}

int main()
{
    char *c[] = {"Enter","New","Point","First"};
    char **cp[] = {c + 3, c + 2, c + 1, c};
    char ***cpp = cp;
    //char* c里放的是字符'E','N','P','F'的地址
    // c -> char* -> "Enter"
    //c+1 -> char* -> "New"
    //c+2 -> char* -> "Point"
    //c+3 -> char* -> "First"
    //char***cpp指向c+3的地址

    printf("%s\n", **++cpp);//*++cpp指向的是c+2的地址，解引用就是char*的地址，再解引用就是'P'的地址，%s打印Point
    printf("%s\n", *--*++cpp + 3);//*++cpp指向的是c+1的地址，--*++cpp指向的是c+1-1就是c的地址，
    //*--*++cpp拿到的是char*(E)的地址，最后+3则指向e，从e开始往后打印字符串
    printf("%s\n", *cpp[-2] + 3);//*cpp[-2]+3 == **(cpp+(-2))+3 == **(cpp-2)+3，*cpp[-2]指向'F'的地址，+3指向'R'
    printf("%s\n", cpp[-1][-1] + 1);//cpp[-1][-1] == *(*(cpp-1)-1)，*(cpp-1)-1指向的是c+1的地址，解引用找到N的地址，+1找到ew

    return 0;
}