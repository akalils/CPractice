//
// Created by 黎圣  on 2023/5/16.
//
#include "stdio.h";
#include "stdlib.h";
#include "string.h";
//指针数组是数组，用来存放指针
//int main()
//{
//    int arr[10] = {0};//整型数组
//    char ch[5] = {0};//字符数组
//    int *parr[4];//存放整型指针的数组 — 指针数组
//    char *pch[5];//存放字符指针的数组 - 指针数组
//    return 0;
//}

//int main()
//{
//    int arr1[] = {1,2,3,4,5};
//    int arr2[] = {2,3,4,5,6};
//    int arr3[] = {3,4,5,6,7};
//    int *parr[] = {arr1,arr2,arr3};
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        int j = 0;
//        for (j = 0;j < 5; j++)
//        {
//            printf("%d ", *(parr[i] + j));
//        }
//    }
//    return 0;
//}

//数组指针是指针
//int main()
//{
//    int *p = NULL; //p是整型指针 - 指向整型的指针 - 可以存放整型的地址
//    char *pc = NULL; //pc是字符指针 - 指向字符的指针 - 可以存放字符的地址
//    int arr[10] = {0};//数组指针 - 指向数组的指针 - 可以存放数组的地址
//    //arr - 首元素地址
//    //&arr[0] - 首元素的地址
//    //&arr - 数组的地址
//    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
//    int (*pa)[10] = &arr;//数组的地址要存起来
//    //pa就是数组指针，和*结合
//    return 0;
//}

//int main()
//{
//    char *arr[5];
//    char *(*pa)[5] = &arr;
//    //     * - 说明pa是指针
//    //         [5] - pa指向的数组是5个元素
//    //      pa - 指针变量的名字
//    //char* - pa指向的数组的元素类型是char*
//
//    return 0;
//}

//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int (*pa)[10] = &arr;
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ",(*pa)[i]);
//    }
//    return 0;
//}

//参数是数组的形式
void print1(int arr[3][5], int x, int y)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

////参数是指针的形式
//void print2(int (*p)[5], int x, int y)
//{
//    int i = 0;
//    for (i = 0; i < x; i++)
//    {
//        int j = 0;
//        for (j = 0; j < y; j++)
//        {
//            //printf("%d ", *(*(p + i) + j));
//            printf("%d ", (*(p + i))[j]);
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    int arr[3][5] = {{1,2,3,4,5},
//                     {2,3,4,5,6},
//                     {3,4,5,6,7}};
//    //print1(arr, 3, 5);//arr - 数组名 - 数组名就是首元素地址
//    print2(arr, 3, 5);
//    /*
//     * int arr[5] - arr是一个5个元素的整型数组
//     * int *arr1[10] - arr1是一个数组，数组有10个元素，每个元素的类型是int*
//     * int (*arr2)[10] - arr2是一个指针，该指针指向了一个数组，数组有10个元素，每个元素的类型是int，arr2是数组指针
//     * int (*arr3[10])[5] - arr3是一个数组，该数组有10个元素，每个元素是一个数组指针，该数组指针指向的数组有5个元素，每个元素的类型是int
//     */
//    return 0;
//}

//int main()
//{
//    //字符指针
//    char ch = 'w';
//    char *p = &ch;
//    const char *p2 = "abcdef";//首字符a的地址赋给*p2
//    //指针数组 - 数组 - 存放指针的数组
//    int *arr[10];//指针数组
//    char *parr[5];//指针数组
//    int *p3;//整型指针 - 指向整型的指针
//    char *p4;//字符指针 - 指向字符的指针
//    int arr2[5];//数组
//    int (*pa)[5] = &arr2;//取出数组的地址，pa就是一个数组指针
//    return 0;
//}

//void test(int arr[3][5])
//{}
//void test1(int arr[][5])
//{}
//void test2(int *arr)//err
//{}
//void test3(int **arr)//err
//{}
//void test4(int (*arr)[5])
//{}
//int main()
//{
//    int arr[3][5] = {0};
//    test(arr);//二维数组传参
//    return 0;
//}

//一级指针传参
//void test(int *p)
//{}
//void test2(char *p)
//{}
//int main()
//{
//    int a = 10;
//    int *p1 = &a;
//    test(&a);
//    test(p1);//传地址传指针都可以
//    char ch = 'w';
//    char *pc = &ch;
//    test2(&ch);
//    test2(pc);//都ok
//    return 0;
//}

////二级指针传参
//void test(int **p)
//{}
//int main()
//{
//    int *ptr;
//    int **pp = &ptr;
//    test(&ptr);
//    test(pp);
//    int *arr[10];

//    test(arr);//指针数组传参也可以
//    return 0;
//}

//数组指针 - 指向数组的指针
//函数指针 - 指向函数的指针 - 存放函数地址的一个指针
//int Add(int x,int y)
//{
//    int z = 0;
//    return z = x + y;
//}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int arr[10] = {0};
//    int (*p)[10] = &arr;
//    //printf("%d\n",Add(a,b));
//    //&函数名 和 函数名 都是函数的地址
//    /*printf("%p\n",&Add);
//    printf("%p\n",Add);*/
//    int (*pa)(int, int) = Add;
//    printf("%d\n",(*pa)(2, 3));//5
//
//    return 0;
//}

//void Print(char *str)
//{
//    printf("%s\n", str);
//}
//int main()
//{
//    void (*p)(char*) = Print;//p就是函数指针
//    (*p)("hello");
//    return 0;
//}

//(*(void(*)())0)() 把0强制类型转换成：void(*)()函数指针类型 - 0就是一个函数的地址

//int main()
//{
//    void(*signal(int,void(*)(int)))(int);
////  signal是一个函数声明
////  signal函数的参数有两个，第一个是int类型，第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
////  signal函数的返回类型也是一个函数指针：该函数指针指向的函数的参数是int，返回类型是void
//
////  简化之后
//    typedef void(*pfun_t)(int);//函数指针重命名
//    void(*signal(int,pfun_t))(int);
//    return 0;
//}

//int Add(int x,int y)
//{
//    int z = 0;
//    return z = x + y;
//}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int(*pa)(int, int) = Add;
//    printf("%d\n", (pa)(2, 3));
//    printf("%d\n", Add(2, 3));
//    return 0;
//}

//int Add(int x,int y)
//{
//    return x + y;
//}
//
//int Sub(int x ,int y)
//{
//    return x - y;
//}
//int Mul(int x,int y)
//{
//    return x * y;
//}
//int Div(int x,int y)
//{
//    return x / y;
//}
//int main()
//{
//    int *arr[5];//指针数组
//    //需要一个数组，这个数组可以存放4个函数的地址 - 函数指针的数组
//    int (*pa)(int, int) = Add;
//    int (*parr[4])(int, int) = {Add, Sub, Mul, Div};//函数指针的数组
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        printf("%d\n", parr[i](2, 3));
//    }
//    return 0;
//}


//实现计算器
void menu()
{
    printf("***************************\n");
    printf("********1.add  2.sub*******\n");
    printf("********3.mul  4.div*******\n");
    printf("***********0.exit***********\n");
}
int Add(int x,int y)
{
    return x + y;
}
int Sub(int x,int y)
{
    return x - y;
}
int Mul(int x,int y)
{
    return x * y;
}
int Div(int x,int y)
{
    return x / y;
}
void Calc(int (*pf)(int, int))
{
    int x = 0;
    int y = 0;
    printf("请输入两个操作数：");
    scanf("%d%d", &x, &y);
    printf("%d\n", pf(x, y));
}
//int main()
//{
//    int x = 0;
//    int y = 0;
//    int input = 0;
//    do
//    {
//        menu();
//        printf("请选择：");
//        scanf("%d", &input);
//        switch (input)
//        {
//            case 1:
//                printf("请输入两个操作数：");
//                scanf("%d%d", &x, &y);
//                printf("%d\n", Add(x, y));
//                break;
//            case 2:
//                printf("请输入两个操作数：");
//                scanf("%d%d", &x, &y);
//                printf("%d\n", Sub(x, y));
//                break;
//            case 3:
//                printf("请输入两个操作数：");
//                scanf("%d%d", &x, &y);
//                printf("%d\n", Mul(x, y));
//                break;
//            case 4:
//                printf("请输入两个操作数：");
//                scanf("%d%d", &x, &y);
//                printf("%d\n", Div(x, y));
//                break;
//            case 0:
//                printf("退出\n");
//                break;
//            default:
//                printf("输入错误，请重新输入\n");
//                continue;
//        }
//    } while (input);
//    return 0;
//}

//int main()
//{
//    int input = 0;
//    int x = 0;
//    int y = 0;
//    //int (*pfArr)(int, int);//函数指针
//    //pfArr - 转移表
//    int (*pfArr[5])(int, int) = {0, Add, Sub, Mul, Div};//函数指针数组
//    do
//    {
//        menu();
//        printf("请选择：");
//        scanf("%d", &input);
//        if(input >= 1 && input <= 4)
//        {
//            printf("请输入两个操作数：");
//            scanf("%d%d", &x, &y);
//            int ret = pfArr[input](x, y);
//            printf("%d\n", ret);
//        }
//        else if(input == 0)
//            printf("退出");
//        else
//            printf("选择错误");
//
//    }while(input);
//    return 0;
//}


//int main()
//{
//    int x = 0;
//    int y = 0;
//    int input = 0;
//    do
//    {
//        menu();
//        printf("请选择：");
//        scanf("%d", &input);
//        switch (input)
//        {
//            case 1:
//                Calc(Add);
//                break;
//            case 2:
//                Calc(Sub);
//                break;
//            case 3:
//                Calc(Mul);
//                break;
//            case 4:
//                Calc(Div);
//                break;
//            case 0:
//                printf("退出\n");
//                break;
//            default:
//                printf("输入错误，请重新输入\n");
//                continue;
//        }
//    } while (input);
//    return 0;
//}

//void print(char *str)
//{
//    printf("hehe:%s", str);
//}
//void test(void (*p)(char*))
//{
//    printf("test\n");
//    p("bit");
//}
//int main()
//{
//    test(print);
//    return 0;
//}

void bubble_sort(int arr[],int sz)
{
    int i = 0;
    //趟数
    for(i = 0; i < sz - 1; i++)
    {
        //一趟冒泡排序
        int j = 0;
        for (j = 0; j < sz - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

//qsort - 可以排序任意类型的数据
//void qsort(void *base,size_t num,size_t width,int(*cmp)(const void *e1,const void *e2));
struct Stu
{
    char name[20];
    int age;
};
//void* 类型的指针，可以接受任意类型的地址
//void* 类型的指针，不能进行解引用操作
//void* 类型的指针，不能进行+-整数的操作
int cmp_int(const void *e1, const void *e2)
{
    //比较两个整型元素
    return *(int*)e1 - *(int*)e2;
}
int cmp_float(const void *e1, const void *e2)
{
    if((*(float*)e1) == (*(float*)e2))
        return 0;
    else if((*(float*)e1) > (*(float*)e2))
        return 1;
    else
        return -1;
    //return ((int)(*(float*)e1) - *(float*)e2);//也可以
}

int cmp_stu_by_age(const void *e1, const void *e2)
{
    return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_stu_by_name(const void *e1, const void *e2)
{
    //比较名字就是比较字符串
    //字符串比较不能直接用><=来比较，应该用strcmp函数
    return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void Swap(char* buf1, char* buf2, int width)
{
    int i = 0;
    for (i = 0; i < width; i++)
    {
        char tmp = *buf1;
        *buf1 = *buf2;
        *buf2 = tmp;
        buf1++;
        buf2++;
    }
}
//实现bubble_sort2函数的程序员，他是否知道未来排序的数据类型 - 不知道
//那程序员也不知道待比较的两个元素的类型
void bubble_sort2(void *base, int sz, int width,int (*cmp)(void *e1, void *e2))
{
    int i = 0;
    //趟数
    for (i = 0; i < sz - 1; i++)
    {
        //每一趟比较的对数
        int j = 0;
        for (j = 0; j < sz - 1 - i; j++)
        {
            //两个元素的比较
            if(cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
            {
                //交换
                Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
            }
        }
    }
}
//int main()
//{
//    //冒泡排序函数
//    //冒泡排序函数只能排序整型数组
//    int arr[] = {1,3,5,7,9,2,4,6,8,0};
//    float f[] = {9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0, 0.0};
//    struct Stu s[3] = {{"张三",20},{"李四",30},{"王五",10}};
//
//    int szf = sizeof(f) / sizeof(f[0]);
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int szs = sizeof(s) / sizeof(s[0]);
//
//    qsort(arr, sz, sizeof(arr[0]), cmp_int);
//    qsort(f, szf, sizeof(f[0]),cmp_float);
//    qsort(s, szs, sizeof(s[0]),cmp_stu_by_age);
//    qsort(s, szs, sizeof(s[0]),cmp_stu_by_name);
//    //第一个参数：要排序数组的首元素地址
//    //第二个参数：待排序数组的元素个数
//    //第三个参数：待排序数组的每个元素的大小
//    //第四个参数：函数指针，比较两个元素的所用函数的地址（需要自己实现）
//    //          函数指针的两个参数是待比较的两个元素的地址
//
//    //使用bubble_sort2的程序员一定知道自己排序的是什么数组
//    //就应该知道如何比较待排序数组中的元素
//    bubble_sort2(arr, sz, sizeof(arr[0]), cmp_int);
//    int i = 0;
//    for (i = 0; i < szs; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//}


//int main()
//{
//    //指针数组
//    //int *arr[10];//arr跟方框结合所以他是数组
//
//    //数组指针
//    //int (*pa)[10] = &arr;
//
//    //函数指针
//    int (*pAdd)(int, int) = Add;//&Add
//    //int sum = (*pAdd)(1, 2);
//    int sum = pAdd(1, 2);
//    printf("%d\n", sum);
//
//    //函数指针的数组
//    int (*pArr[5])(int, int);
//
//    //指向函数指针数组的指针
//    int (*(*ppArr)[5])(int, int) = &pArr;
//
//    return 0;
//}