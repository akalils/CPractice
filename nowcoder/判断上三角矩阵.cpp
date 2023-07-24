////
//// Created by 黎圣  on 2023/7/24.
////
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[10][10] = {0};
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            scanf("%d", &arr[i][j]);
//
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            if (i > j)
//                if (arr[i][j] != 0)
//                {
//                    printf("NO\n");
//                    return 0;
//                }
//
//    printf("YES\n");
//    return 0;
//}