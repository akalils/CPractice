////
//// Created by 黎圣  on 2023/7/23.
////
//#include <stdio.h>
//
//int main() {
//    int n = 4;
//    int m = 4;
//    int k = 0;
//    int i = 0;
//    int j = 0;
//    int arr1[4] = {1,2,2,4};
//    int arr2[4] = {3,4,5,9};
//    int arr3[8] = {0};
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            arr3[k] = arr1[i];
//            k++;i++;
//        }
//        else
//        {
//            arr3[k] = arr2[j];
//            k++;j++;
//        }
//    }
//    while (i < n)
//    {
//        arr3[k] = arr1[i];
//        k++; i++;
//    }
//    while (j < m)
//    {
//        arr3[k] = arr2[j];
//        k++;j++;
//    }
//    for (k = 0; k < n + m; k++)
//        printf("%d ", arr3[k]);
//    return 0;
//}