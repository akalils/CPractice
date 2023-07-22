////
//// Created by 黎圣  on 2023/7/22.
////
//#include <stdio.h>
//
//int main() {
//    int m, n;
//    int count = 0.0;
//    scanf("%d %d", &m, &n);
//    int arr1[100][100] = {0};
//    int arr2[100][100] = {0};
//    for (int i = 0; i < m; i++)
//        for (int j = 0; j < n; j++)
//            scanf("%d", &arr1[i][j]);
//    for (int i = 0; i < m; i++)
//        for (int j = 0; j < n; j++)
//            scanf("%d", &arr2[i][j]);
//    for (int i = 0; i < m; i++)
//        for (int j = 0; j < n; j++)
//            if (arr1[i][j] == arr2[i][j])
//                count++;
//    printf("%.2lf\n", 100.0 * count / (m * n));
//    return 0;
//}