////
//// Created by 黎圣  on 2023/7/18.
////
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[40] = {0};
//    for (int i = 0; i < n; i++)
//        scanf("%d ", &arr[i]);
//    for (int i = 0; i < n - 1; i++)
//        for (int j = 0; j < n - 1 - i; j++)
//            if (arr[j] > arr[j + 1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//    for (int i = n - 1; i >= n - 5; i--)
//        printf("%d ", arr[i]);
//    return 0;
//}