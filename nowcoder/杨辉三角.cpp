////
//// Created by 黎圣  on 2023/7/24.
////
//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int arr[30][30] = {0};
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            if (j == 0)
//                arr[i][j] = 1;
//            if (i == j)
//                arr[i][j] = 1;
//            if (i >= 2 && j >= 1)
//                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j <= i; j++)
//            printf("%5d", arr[i][j]);
//        printf("\n");
//    }
//    return 0;
//}