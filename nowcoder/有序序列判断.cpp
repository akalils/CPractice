////
//// Created by 黎圣  on 2023/7/23.
////
//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int arr[50] = {0};
//    int flag1 = 0;
//    int flag2 = 0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (i > 0)
//        {
//            if (arr[i] > arr[i - 1])
//                flag1 = 1;
//            else
//                flag2 = 1;
//        }
//    }
//    if (flag1 + flag2 == 1)
//        printf("sorted");
//    else
//        printf("unsorted");
//    return 0;
//}