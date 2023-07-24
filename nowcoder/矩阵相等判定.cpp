////
//// Created by 黎圣  on 2023/7/24.
////
//#include <stdio.h>
//
//int main() {
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr1[10][10] = {0};
//    int arr2[10][10] = {0};
//
//    //第一个矩阵的数据
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            scanf("%d", &arr1[i][j]);
//
//    //第二个矩阵的数据
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            scanf("%d", &arr2[i][j]);
//
//    //比较对应位置的的元素
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            if (arr1[i][j] != arr2[i][j])
//            {
//                printf("No\n");
//                return 0;
//            }
//    printf("Yes\n");
//    return 0;
//}