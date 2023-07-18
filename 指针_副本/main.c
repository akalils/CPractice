#include <stdio.h>
#include <stdlib.h>
#include "string.h"
//void Init(int arr[],int sz)
//{
//    int i = 0;
//    for(i = 0;i < sz;i++)
//    {
//        arr[i] = 0;
//    }
//}
//void Print(int arr[],int sz)
//{
//    int i = 0;
//    for(i = 0;i < sz;i++)
//    {
//        printf("%d ",arr[i]);
//
//    }
//    printf("\n");
//}
//void Reverse(int arr[],int sz)
//{
//    int left = 0;
//    int right = sz - 1;
//
//    while(left < right)
//    {
//        int tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    //Init(arr,sz);//把数组初始化为0
//    Print(arr,sz);
//    Reverse(arr,sz);
//    Print(arr,sz);
//    return 0;
//}

//int main()
//{
//    int arr1[] = {1,3,5,7,9};
//    int arr2[] = {2,4,6,8,0};
//    int tmp = 0;
//    int i = 0;
//    int sz = sizeof(arr1)/sizeof(arr1[0]);
//    for (i = 0;i < sz;i++)
//    {
//        tmp = arr1[i];
//        arr1[i] = arr2[i];
//        arr2[i] = tmp;
//    }
//    printf("%d ",arr1);
//    printf("%d ",arr2);
//    return 0;
//}

////统计二进制1的个数
int count_bit_one(unsigned int a)//unsigned无符号数
{
    int count = 0;
    int i = 0;
    //方法一：
//    for (i = 0;i < 32;i++)
//    {
//        if(((a >> i) & 1) == 1)
//        {
//            count++;
//        }
//    }
    //方法二：
//    while(a)
//    {
//        if(a % 2 == 1)
//        {
//            count++;
//        }
//        a = a / 2;
//    }
    //方法三：
    while(a)
    {
        a = a & (a - 1);
        count++;
    }
    return count;
}
//int main()
//{
//    int a = 15;
//    int count = count_bit_one(a);
//    printf("%d\n",count);
//    return 0;
//}

//写一个函数返回参数二进制中1的个数
//int get_diff_bit(int m,int n)
//{
//    int tmp = m ^ n;
//    return count_bit_one(tmp);
//}
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d%d", &m, &n);
//    int count = get_diff_bit(m, n);
//    printf("%d\n", count);
//    return 0;
//}

//获取一个整数二进制序列中的所有奇数位和偶数位
//void print(int m)
//{
//    int i = 0;
//    printf("奇数位");
//    for (i = 30;i >= 0;i -= 2)
//    {
//        printf("%d ",(m >> i) & 1);
//    }
//    printf("\n");
//    printf("偶数位");
//    for (i = 31;i >= 1;i -= 2)
//    {
//        printf("%d ",(m >> i) & 1);
//    }
//    printf("\n");
//}
//int main()
//{
//    int m = 0;
//    scanf("%d", &m);
//    print(m);
//    return 0;
//}

////使用指针打印数组内容
//void print(int *p,int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", *(p + i));
//    }
//}
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9};
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    print(arr, sz);//传上去的是首元素的地址，首元素是整形，所以传入int *p
//    return 0;
//}

////九九乘法表
//void print_table(int n)
//{
//    int i = 0;
//    for (i = 1; i <= n; i++)
//    {
//        int j = 0;
//        for (j = 1; j <= i; j++)
//        {
//            printf("%d * %d = %d ", i, j, i*j);
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    int n = 9;
////    scanf("%d", &n);
//    print_table(n);
//    return 0;
//}

int my_strlen(char *str)
{
    int count = 0;
    while(*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}
//void reverse_string(char arr[],int sz)
//{
//    int left = 0;
//    int right = my_strlen(arr) - 1;
//    while(left < right)
//    {
//        int tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        left++;
//        right--;
//    }
//}
//
////逆序打印字符串
//int main()
//{
//    char arr[] = "abcdef";
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    reverse_string(arr,sz);
//    printf("%s\n",arr);
//    return 0;
//}

void reverse_string(char arr[])
{
    char tmp = arr[0];
    int len = my_strlen(arr);
    arr[0] = arr[len - 1];
    arr[len - 1] = '\0';
    if(my_strlen(arr + 1) >= 2)
        reverse_string(arr + 1);
    arr[len - 1] = tmp;
}

int main()
{
    char arr[] = "abcdefg";//fedcba
    reverse_string(arr);
    printf("%s\n", arr);
    return 0;
}