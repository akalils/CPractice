//#include <stdio.h>
//
//int main() {
//    int n, m;
//    int arr[51] = {0};
//    int i = 0;
//    //输入个数
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        //输入有序的数字
//        scanf("%d", &arr[i]);
//    }
//    //输入要插入的数字
//    scanf("%d", &m);
//    for (i = n - 1; i >= 0; i--)
//    {
//        if (arr[i] > m)
//            arr[i + 1] = arr[i];
//        else
//        {
//            arr[i + 1] = m;
//            break;
//        }
//    }
//    if (i < 0)
//        arr[0] = m;
//    for (int i = 0; i < n + 1; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}