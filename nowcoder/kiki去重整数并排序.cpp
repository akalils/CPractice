////
//// Created by 黎圣  on 2023/7/27.
////
//#include "iostream"
//////暴力法
////int main()
////{
////    int n = 0;
////    scanf("%d", &n);
////    int arr[1000] = {0};
////    for (int i = 0; i < n; i++)
////        scanf("%d", arr[i]);
////    //1. 先排序
////    for (int i = 0; i < n - 1; i++)
////    {
////        for (int j = 0; j < n - i - 1; j++)
////        {
////            if(arr[j] > arr[j + 1])
////            {
////                int temp = arr[j];
////                arr[j] = arr[j + 1];
////                arr[j + 1] = temp;
////            }
////        }
////    }
////    //2. 去重
////    for (int i = 0; i < n - 1; i++)
////    {
////        if (arr[i] == arr[i + 1])
////        {
////            //把i+1下标往后的元素全部往前覆盖
////            for (int k = i; k < n - 1; k++)
////                arr[k] = arr[k + 1];
////            n--;
////            i--;
////        }
////    }
////    for (int i = 0; i < n; i++)
////        printf("%d ", arr[i]);
////    return 0;
////}
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d", &n);
//    int arr[1001] = {0};
//    for (int i = 0; i < n; i++)
//        scanf("%d", arr[i]);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &m);
//        arr[m] = m;
//    }
//    for (int i = 0; i < 1001; i++)
//    {
//        if (arr[i] != 0)
//            printf("%d", arr[i]);
//    }
//    return 0;
//}
