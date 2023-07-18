//
// Created by 黎圣  on 2023/6/4.
//
#include "stdio.h"
#include "string.h"
#include "assert.h"
#include "math.h"
//int main()
//{
//    unsigned long pulArray[] = {6,7,8,9,10};
//    unsigned long *pulPtr;
//
//    pulPtr = pulArray;//pulPtr放入‘6’的地址
//    *(pulPtr + 3) += 3;//(pulPtr+3)跳过3个整型，解引用就是9，再+=3就是12
//    //{6,7,8,12,9}
//
//    printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//    return 0;
//}

//倒叙字符串
//void reverse(char* str)//str指向'a'
//{
//    assert(str);
//    int len = strlen(str);
//    char *left = str;
//    char *right = left + len - 1;
//    while(left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char arr[256] = {0};
//    //scanf("%s", arr);//abcdef -> fedcba
//    gets(arr);//读取一行
//    reverse(arr);
//    printf("%s\n", arr);
//    return 0;
//}

////计算2+22+222+2222+22222的和
//int main()
//{
//    int a = 0;
//    int n = 0;
//    scanf("%d%d", &a, &n);
//    int sum = 0;
//    int i = 0;
//    int ret = 0;
//    for (i = 0; i < n; i++)
//    {
//        ret = ret * 10 + a;
//        sum = sum + ret;
//    }
//    printf("%d\n", sum);
//    return 0;
//}

////打印1-10000的所有自幂数
////例如在十进制中，三位数153就是1^3+5^3+3^3=153
//int main()
//{
//    int i = 0;
//    for (i = 0; i <= 10000; i++)
//    {
//        //判断i是否为自幂数（水仙花数）
//        //1.判断i的位数 - n位数
//        int n = 1;
//        int tmp = i;
//        int sum = 0;
//        //123/10 商不是0，n++
//        //12/10 商不是0，n++
//        //1/10 商0
//        while(tmp/10 != 0)
//        {
//            n++;
//            tmp /= 10;
//        }
//
//        //2.计算i的每一位的n次方之和 sum
//        tmp = i;//123
//        while(tmp != 0)
//        {
//            sum += pow(tmp % 10, n);
//            tmp = tmp / 10;
//        }
//
//        //3.比较i和sum是否相等
//        if(i == sum)
//        {
//            printf("%d\n", i);
//        }
//    }
//    return 0;
//}

////打印菱形
//int main()
//{
//    int line = 0;
//    scanf("%d", &line);//输入一半的行数
//    //打印上半部分
//    int i = 0;
//    for (i = 0; i < line; i++)
//    {
//        //打印空格
//        int j = 0;
//        for (j = 0; j < line - 1 - i; j++)
//        {
//            printf(" ");
//        }
//        //打印 *
//        for (j = 0; j < 2 * i + 1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    //打印下半部分
//    for (i = 0;i < line - 1; i++)
//    {
//        int j = 0;
//        //打印空格
//        for(j = 0;j <= i; j++)
//        {
//            printf(" ");
//        }
//
//        //打印 *
//        for(j = 0; j < 2 * (line - 1 - i) - 1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//1块钱一瓶水，两个瓶子一瓶水，20块一共能和多少瓶水
//int main()
//{
//    int money = 0;
//    int total = 0;
//    int empty = 0;
//    scanf("%d", &money);
//    //买回来的汽水喝掉
//    if(money == 0)
//        total = 0;
//    else
//        total = 2 * money - 1;
//    total = money;
//    empty = money;
//    //换回来的汽水
//    while (empty >= 2)
//    {
//        total += empty / 2;
//        empty = empty / 2 + empty % 2;
//    }
//    printf("%d", total);
//    return 0;
//}


////数组中奇数位于偶数前面
//void move(int arr[], int sz)
//{
//    int left = 0;
//    int right = sz - 1;
//    while (left < right)
//    {
//        //1.从左边开始找一个偶数
//        while ((left < right) && (arr[left] % 2 == 1))//找到奇数
//        {
//            left++;
//        }
//
//        //2.从右边开始找一个奇数
//        while ((left < right) && (arr[right] % 2 == 0))//找到偶数
//        {
//            right--;
//        }
//
//        //3.交换
//        if(left < right)
//        {
//            int tmp = 0;
//            arr[left] = arr[right];
//            arr[right] = tmp;
//        }
//    }
//}
//void print(int arr[], int sz)
//{
//    int i = 0;
//    for (i = 0;i < sz; i++)
//    {
//        printf("%d",arr[i]);
//    }
//}
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    move(arr, sz);
//    print(arr, sz);
//    return 0;
//}

//实现一个函数，可以左旋字符串中的k个字符
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDBA
//旋转字符串

//暴力求解法
//void left_move(char *arr,int k)
//{
//    assert(arr);
//    int i = 0;
//    int len = strlen(arr);
//    for (i = 0;i < k;i++)
//    {
//        //左旋转一个字符
//        //1、把第一个字符放在临时变量里
//        char tmp = *arr;
//        //2、把所有元素往前放
//        int j = 0;
//        for(j = 0; j < len - 1; j++)
//        {
//            *(arr + j) = *(arr + j + 1);
//            //arr+j指向下标为0的元素，arr+j+1指向下标为1的元素
//        }
//        //3、把临时变量放进去
//        *(arr+len-1) = tmp;
//        //arr+len-1是最后一个元素的位置
//    }
//}
//2、三步翻转法
//ab cdef
//ba fedc
//cdefab
//逆序字符串的函数
void reverse(char* left, char* right)
{
    assert(left != NULL);
    assert(right != NULL);
    while(left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;//跳过刚刚交换过的元素
        right--;//跳过刚刚交换过的元素
    }
}
void left_move(char* arr, int k)
{
    assert(arr);
    int len = strlen(arr);
    reverse(arr, arr+k-1);//逆序左边，arr就是a的地址，arr+k-1是b的地址
    reverse(arr + k, arr + len - 1);//逆序右边，arr+k是c的地址，arr+len-1是f的地址
    reverse(arr, arr + len - 1);//逆序整体
}
//int main()
//{
//    int k = 0;
//    scanf("%d", &k);
//    char arr[] = "abcdef";
//    left_move(arr, k);
//    printf("%s\n", arr);
//    return 0;
//}


//判断一个字符串是否为另一个字符串旋转之后的字符串
//abcdef
//bcdefa
//cdefab
//defabc
//efabcd
//fabcde
//int is_left_move(char *s1, char *s2)
//{
//    int len = strlen(s1);
//    int i = 0;
//    for(i = 1; i < len; i++)
//    {
//        left_move(s1, 1);
//        int ret = strcmp(s1, s2);
//        if(ret == 0)
//            return 1;
//    }
//    //
//    return 0;
//}
//int main()
//{
//    char arr1[] = "abcdef";
//    char arr2[] = "cdefab";
//    int ret = is_left_move(arr1, arr2);
//    if(ret == 1)
//        printf("yes");
//    else
//        printf("no");
//    return 0;
//}

int is_left_move(char *str1,char *str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if(len1 != len2)
        return 0;
    //1、在str1字符串中追加一个str1字符串
    //strcat不行
    //strncat
    strncat(str1, str1, 6);//abcdefabcdef
    //2、判断str2指向的字符串是否是str1指向的字符串的子串
    //strstr - 在str1里找有没有str2
    char *ret = strstr(str1, str2);
    if(ret == NULL)
        return 0;
    else
        return 1;
}
//int main()
//{
//    char arr1[30] = "abcdef";
//    char arr2[] = "cdefab";
//    int ret = is_left_move(arr1, arr2);
//    if(ret == 1)
//        printf("yes\n");
//    else
//        printf("no\n");
//    return 0;
//}

//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在
//1 2 3
//4 5 6
//7 8 9

//1 2 3
//2 3 4
//3 4 5
int FindNum(int arr[3][3],int k,int *px,int *py)
{
    int x = 0;
    int y = *py - 1;//右上角元素的下标
    while (x <= *px - 1 && y >= 0)
    {
        if (arr[x][y] > k)//那一列没有
        {
            y--;//把最后一列删掉
        }
        else if (arr[x][y] < k)//那一行没有
        {
            x++;
        }
        else
        {
            *px = x + 1;
            *py = y + 1;
            return 1;
        }
    }
    //找不到
    return 0;
}

int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int k = 7;
    int x = 3;
    int y = 3;
    int ret = FindNum(arr, k, &x, &y);
    if (ret == 1)
    {
        printf("找到了");
        printf("下标是%d %d", x, y);
    }
    else
        printf("没找到");
    return 0;
}