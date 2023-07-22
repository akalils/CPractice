//////
////// Created by 黎圣  on 2023/7/22.
//////
//#include <stdio.h>
////
////int main() {
////    int n = 0;
////    while (scanf("%d", &n) != EOF)
////    {
////        int arr[101];
////        for (int i = 2; i <= n; i++)
////            arr[i] = i;
////        for (int j = 2; j <= n; j++)
////            for (int k = j + 1; k <= n; k++)
////                if (arr[k] % j == 0)
////                    arr[k] = 0;
////        int count = 0;
////        for (int i = 2; i <= n; i++)
////            if(arr[i] != 0)
////                printf("%d ", arr[i]);
////            else
////                count++;
////        printf("\n%d\n", count);
////    }
////    return 0;
////}
//
//
////试除法
//int main()
//{
//    int n, count, j;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (int i = 2; i <= n; i++)
//        {
//            for (j = 2; j < i; i++)
//                if (i % j == 0)
//                {
//                    count++;
//                    break;
//                }
//            if (j == i)
//                printf("%d ", j);
//        }
//        printf("\n%d\n", count);
//    }
//    return 0;
//}