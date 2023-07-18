#include <stdio.h>
#include "string.h"


//int main()
//{
    /*
     * 二分法
     */
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int k = 8;
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    int left = 0;
//    int right = sz - 1;
//    while(left <= right)
//    {
//        int mid = (left + right) / 2;
//        if(arr[mid] < k)
//            left = mid + 1;
//        else if(arr[mid] > k)
//            right = mid - 1;
//        else
//        {
//            printf("找到 %d 了捏",mid);
//            break;
//        }
//    }
//    if(left > right)
//        printf("找不到了");

    /*
    * 打印welcome to sipo，向中间汇聚
    */
//    char arr1[] = "welcome to sipo!!";
//    char arr2[] = "#################";
//    int left = 0;
//    int right = sizeof(arr1)/sizeof(arr1[0]) - 2;
//    while(left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n",arr2);
//        left++;
//        right--;
//    }
//

    /*
    * 用户输入密码，三次错误退出程序
    */
//    int i = 0;
//    char password[20]={0};
//    for(i = 0;i<3;i++)
//    {
//        printf("请输入密码：");
//        scanf("%s",password);
//        if(strcmp(password,"123456") == 0)//==不能用来比较两个字符串是否相等，如果strcmp里左边跟右边相等则返回0
//        {
//            printf("登录成功！");
//            break;
//        }
//        else if(password != "123456")
//        {
//            printf("密码错误！");
//        }
//    }
//    if(i == 3)
//        printf("请明天再试");
//    return 0;
//}
