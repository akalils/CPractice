////
//// Created by 黎圣  on 2023/7/23.
////
//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int arr[1000] = {0};
//    for (int i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//    for (int i = 0; i < n; i++)
//        for (int j = i + 1; j < n; j++)
//            if (arr[i] == arr[j])
//            {
//                //后边的元素往前覆盖
//                for (int k = j; k < n - 1; k++)
//                    arr[k] = arr[k + 1];
//                n--;
//                j--;
//            }
//    for (int i = 0; i < n; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}