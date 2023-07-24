//
//// Created by 黎圣  on 2023/7/22.
////
//# include <stdio.h>
//int main(void)
//{
//    int arr[7] = {0};
//    while (scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]) != EOF)
//    {
//        int min = arr[0];
//        int max = arr[0];
//        for (int i = 0; i < 7; i++)
//        {   // 遍历数组
//            if (arr[i] > max)  // 最高分
//                max = arr[i];
//            if (arr[i] < min)  // 最低分
//                min = arr[i];
//        }
//        int sum = 0;
//        for (int i = 0; i < 7; i++)
//        {   // 遍历数组
//            if (arr[i] < max && arr[i] > min)
//                sum += arr[i];
//        }
//        printf("%.2f\n", (float) sum / 5);
//    }
//}