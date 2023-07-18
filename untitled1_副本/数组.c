//
// Created by 黎圣  on 2023/3/25.
//

#include "stdio.h"
#include "string.h"

//int main()
//{
//    //创建一个数组
//    char arr4[] = "abcdef";
//    printf("%d\n",sizeof(arr4));//sizeof计算arr4所占空间的大小，7个元素，是计算变量、数组、类型的大小
//    printf("%d\n",strlen(arr4));//只能求字符串长度，不算\0
//    char arr1[] = "abc";
//    char arr2[] = {'a','b','c'};
//    printf("%d\n",sizeof(arr1));
//    printf("%d\n",sizeof(arr2));
//    printf("%d\n",strlen(arr1));
//    printf("%d\n",strlen(arr2));
//    return 0;

//}

//int main()
//{
//    char arr[] = "abcdef";
//    int i = 0;
//    int len = strlen(arr);
//    for(i=0;i<len;i++)
//    {
//        printf("%c ",arr[i]);
//    }
//    return 0;
//}

//}

//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    for (int i = 0; i < size; i++)
//        printf("%d ", arr);
//    return 0;
//}

//数组在内存中是连续存放的
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    int i = 0;
//    for(i=0;i<sz;i++)
//    {
//        printf("&arr[%d] = %p\n",&arr[i]);
//    }
//    return 0;
//}

//二维数组
//int main()
//{
//    int arr[3][4] = {{1,2,3},{4,5}};//三行四列
//    char ch[5][6];
//    int arr1[][4] = {{1,2,3,4},{5,6,7,8}};
//    return 0;
//}

//int main()
//{
//    int arr[3][4] = {{1,2,3},{4,5}};
//    int i = 0;
//    for(i=0;i<3;i++)
//    {
//        int j = 0;
//        for(j=0;j<4;j++)
//        {
//            arr[i][j];
//        }
//        printf("\n");
//    }
//}

//void bubble_sort(int arr[],int sz)
//{
//    //确定冒泡排序的趟数
//    int i = 0;
//    for(i=0;i<sz-1;i++)
//    {
//        //每一趟冒泡排序的内容
//        int j = 0;
//        int flag = 1;//假设要排序的数据已经有序
//        for(j=0;j<sz-1-i;j++)
//        {
//
//            if(arr[j] > arr[j+1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = tmp;
//                flag = 0;//本趟排序的数据其实不完全有序
//            }
//        }
//        if(flag == 1)
//        {
//            break;
//        }
//    }
//}
//int main()
//{
//    int arr[] = {9,8,7,6,5,4,3,2,1};
//    //对arr进行排序，排成升序
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    bubble_sort(arr,sz);//冒泡排序函数
//    int i = 0;
//    for(i=0;i<sz;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}


//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7};
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    //1、sizeof（数组名） - 数组名表示的是整个数组，sizeof（数组名）计算的是整个数组的大小，单位是字节
//    //2、&数字名，数组名代表整个数组，&数组名取出的是整个数组的地址
//    return 0;
//}

int main()
{
    printf("hahaha");
    return 0;
}