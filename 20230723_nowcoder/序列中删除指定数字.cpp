////
//// Created by 黎圣  on 2023/7/23.
////
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int arr[50] = {0};
//    int del = 0;
//    int j = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//    scanf("%d", &del);
//    for (int i = 0; i < n; i++)
//        if (arr[i] != del)
//        {
//            arr[j] = arr[i];
//            j++;
//        }
//    //此时的j就是删除元素后的数据个数
//    for (int i = 0; i < j; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}