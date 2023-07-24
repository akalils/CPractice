////
//// Created by 黎圣  on 2023/7/21.
////
//#include <stdio.h>
//
//int main() {
//    int n;
//    while (scanf("%d", &n) != EOF)
//    {
//        //上
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0 ; j < n + 1 - i; j++)
//                printf("* ");
//            for (int j = 0; j < i; j++)
//                printf(" ");
//            printf("\n");
//        }
//        //下
//        for (int i = 0; i < n + 1; i++)
//        {
//            for (int j = 0; j <= i; j++)
//                printf("* ");
//            for (int j = 0; j < n - i; j++)
//                printf(" ");
//            printf("\n");
//        }
//    }
//    return 0;
//}