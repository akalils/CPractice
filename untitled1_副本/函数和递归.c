//
// Created by 黎圣  on 2023/3/20.
//
#include <stdio.h>
#include <string.h>
#include <math.h>
//传值调用
int get_max(int x,int y)
{
    /*
     * 函数体
     */
    int max = 0;
    if(x>y)
        return x;
    else
        return y;
}
//当实参传给形参的时候，形参其实是实参的一份临时拷贝，对形参对修改不会改变实参
//穿址调用
void swap(int* pa,int* pb)
{
    int tmp = 0;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

//是素数返回1
int is_prime(int n)
{
    int i = 0;
    for(i = 2;i <= sqrt(n);i++)
    {
        if(n%i == 0)
            return 0;
    }
    //j=n
    return 1;
}
int is_leap_year(int y)
{
    if((y%4 == 0 && y%100 != 0)||y%400==0)
        return 1;
    else
        return 0;
}

//本质上这里的arr是一个指针
int binary_search(int arr[],int k,int sz)
{

    int left = 0;
    int right = sz-1;
    while(left <= right)
    {
        int mid = (left+right)/2;
        if(arr[mid] < k)
            left = mid + 1;
        else if(arr[mid] > k)
            right = mid - 1;
        else
            return mid;
    }
    return -1;
}
void Add(int* p)
{
    (*p)++;
}

int Sum(int x,int y)
{
    int z = 0;
    z = x+y;
    return z;
}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    swap(&a, &b);
//    printf("%d\n", a);
//    int i = 0;
//    for (i = 100; i <= 200; i++) {
//        //判断i是否为素数
//        if (is_prime(i) == 1)
//            printf("%d ", i);
//    }
//    int year = 0;
//    for (year = 1000; year <= 2000; year++) {
//        if (is_leap_year(year) == 1)
//            printf("%d ", year);
//
//    }
//    return 0;
//}

    //二分查找
    //在一个有序数组中查找具体对某个数
    //如果找到了返回这个数对下标，找不到对返回-1
//    int main()
//    {
//        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//        int k = 7;
//        int sz = sizeof(arr) / sizeof(arr[0]);
//        //传递过去的是数组arr首元素的地址
//        int ret = binary_search(arr, k, sz);
//        if (ret == -1)
//            printf("找不到指定的数字");
//        else
//            printf("%d\n", ret);
//        return 0;
//    }

//int main()
//{
//    int num = 0;
//    Add(&num);
//    printf("num = %d\n",num);
//    Add(&num);
//    printf("num = %d\n",num);
//    Add(&num);
//    printf("num = %d\n",num);
//    int len = 0;
//    len = strlen("abc");
//    printf("%d",len);
//    return 0;
//}

//int main()
//{
//    printf("%d",printf("%d",printf("%d",43)));
//    return 0;
//}

////函数声明，一般放在头文件
//int Sum(int,int);
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int sum = 0;
//    sum = Sum(a,b);
//    printf("%d",sum);
//    return 0;
//}

void print(int n)
{
    if(n>9)
    {
        print(n/10);
    }
    printf("%d ",n%10);
}
//int main()
//{
//    unsigned int num = 0;
//    scanf("%d", &num); //1234
//    print(num);
//    return 0;
//}

int my_strlen(char* str)
{
    int count = 0;
    while(*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}
//递归的方法
int my_strlen_2(char* str)
{
    if(*str != '\0')
        return 1+ my_strlen_2(str+1);
    else
        return 0;
}
//int main()
//{
//    char arr[] = "bit";
//    int len = my_strlen_2(arr);//arr是数组，数组传参，传过去的不是一个数组，而是首元素的地址
//    printf("%d\n",len);
//    return 0;
//}

int Fac(int n)
{
    int i = 0;
    int ret = 1;
    for (i = 1; i <= n; i++)
    {
        ret *= i;
    }
    return ret;
}
int Fac2(int n)
{
    int i = 0;
    if(n<=1)
        return 1;
    else
        return n*Fac2(n-1);
}
//int main()
//{
//    //求n的阶乘
//    int n = 0;
//    scanf("%d", &n);
//    int ret = Fac2(n);
//    printf("%d\n",ret);
//    return 0;
//}

int Fib(int n)
{
    if(n<=2)
        return 1;
    else
        return Fib(n-1)+Fib(n-2);
}
int Fib2(int n)
{
    int a = 1;
    int b = 1;
    int c = 0;
    while (n > 2)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}
//斐波那契数列
//int main()
//{
//    int n = 0;
//    scanf("%d",&n);
//    int ret = Fib2(n);
//    printf("%d ",ret);
//    return 0;
//}