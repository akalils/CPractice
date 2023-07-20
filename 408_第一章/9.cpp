////
//// Created by 黎圣  on 2023/7/20.
////
//struct Sqlist
//{
//    int data[50];
//    int length;
//};
//
//bool merge_list(int s1[], int s2[], int n, int *ans)
//{
//    if(s1 == 0 || s2 == 0) return false;
//    int i, k, j;
//    while (i < n && j < n && k < n)
//    {
//        if (s1[i] < s2[j])
//        {
//            *ans = s1[i];
//            i++;
//            k++;
//        }
//        if (s1[i] > s2[j])
//        {
//            *ans = s2[j];
//            j++;
//            k++;
//        }
//    }
//    while (i < n && k < n)
//    {
//        *ans = s1[i];
//        i++;
//        k++;
//    }
//    while (j < n && k < n)
//    {
//        *ans = s2[j];
//        j++;
//        k++;
//    }
//    return true;
//}