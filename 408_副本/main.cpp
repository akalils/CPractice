#include <iostream>

//struct Sqlist
//{
//    int data[50];
//    int length;
//};

//bool reverse(struct Sqlist *sq)
//{
//    if (sq->length == 0)
//        return false;
//
//    for (int i = 0; i < sq->length; i++)
//    {
//        int temp = sq->data[i];
//        sq->data[i] = sq->data[sq->length - i - 1];
//        sq->data[sq->length - i - 1] = temp;
//    }
//    return true;
//}

//bool del_x(struct Sqlist *sq, int x)
//{
//    if (sq->length == 0) return false;
//    int j;
//    for (int i = 0; i < sq->length; i++)
//    {
//        if (sq->data[i] != x)
//        {
//            sq->data[j] = sq->data[i];
//            j++;
//        }
//    }
//    sq->length = j;
//}

//bool del_t_s(struct Sqlist *sq, int t, int s)
//{
//    int j;
//    if (sq->length == 0) return false;
//    for (int i = 0; i < sq->length; i++)
//    {
//        if (sq->data[i] > t || sq->data < s)
//        {
//            sq->data[j] = sq->data[i];
//            j++;
//        }
//    }
//    sq->length = j;
//}

struct Sqlist
{
    int data[50];
    int length;
};
//int del_difference(struct Sqlist *sq)
//{
//    int j;
//    for (int i = 0; i < sq->length; i++)
//    {
//        if (sq->data[i] != sq->data[i - 1])
//        {
//            sq->data[j] = sq->data[i];
//        }
//    }
//}

bool merge_list(struct Sqlist *sq1, struct Sqlist *sq2, struct Sqlist *returnsq)
{
    if (sq1->length == 0 || sq2->length == 0) return false;
    int i, j, n;
    while (i < sq1->length && j < sq2->length)
    {
        if (sq1->data[i] < sq2->data[j])
        {
            returnsq->data[n] = sq1->data[i];
            i++;
            n++;
        }
        else if (sq1->data[i] >= sq2->data[j])
        {
            returnsq->data[n] = sq2->data[j];
            j++;
            n++;
        }
    }
    while (i < sq1->length)
    {
        returnsq->data[n] = sq1->data[i];
        i++;
        n++;
    }
    while (j < sq2->length)
    {
        returnsq->data[n] = sq2->data[j];
        j++;
        n++;
    }
    returnsq->length = n;
    return true;
}

bool search_x(struct Sqlist *sq, int x)
{
    if (sq->length == 0) return false;
    int left = 0;
    int right = sq->length - 1;
    int mid = 0;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (sq->data[mid] == x) break;
        if (sq->data[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    if (sq->data[mid] == x && sq->data[mid] != sq->length)
    {
        int temp = sq->data[mid];
        sq->data[mid] = sq->data[mid + 1];
        sq->data[mid + 1] = temp;
    }
    if (sq->data[mid] != x)
    {
        int i = 0;
        for (i = sq->length - 1; i > right; i--)
            sq->data[i + 1] = sq->data[i];
        sq->data[i + 1] = x;
    }
    return true;
}

bool change_list(int A[], int m, int n)
{
    if(A == 0) return false;
    int *ans = (int*)malloc((m + n)*sizeof(int));
    for (int i = 0; i < m; i++)
        ans[i + n] = A[i];
    for (int i = 0; i < n; i++)
        ans[i] = A[i + m];
    for (int i = 0; i < m + n; i++)
        A[i] = ans[i];
    free(ans);
    return true;
}

bool change(int R[], int p, int n)
{
    if (R == 0) return false;
    int* ans = (int*)malloc((p + n)*sizeof(int));
    for (int i = 0; i < p; i++)
        ans[i + n] = R[i];
    for (int i = 0; i < n; i++)
        ans[i] = R[i + p];
    for (int i = 0; i < p + n; i++)
        R[i] = ans[i];
    free(ans);
    return true;
}

bool merge_list(int s1[], int s2[], int n, int *ans)
{
    if(s1 == 0 || s2 == 0) return false;
    int i, k, j;
    while (i < n && j < n && k < n)
    {
        if (s1[i] < s2[j])
        {
            *ans = s1[i];
            i++;
            k++;
        }
        if (s1[i] > s2[j])
        {
            *ans = s2[j];
            j++;
            k++;
        }
    }
    while (i < n && k < n)
    {
        *ans = s1[i];
        i++;
        k++;
    }
    while (j < n && k < n)
    {
        *ans = s2[j];
        j++;
        k++;
    }
    return true;
}

int di12ti_1(int A[], int n)
{
    int *count = (int*) malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
        count[i] = 0;
    for (int i = 0; i < n; i++)
        count[A[i]] ++;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (count[i] > n / 2)
        {
            ans = i;
            break;
        }
    }
    free(count);
    return ans;
}

int di12ti_2(int A[], int n)
{
    int temp = A[0];
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (temp = A[i])
            count++;//好兄弟 不打了
        else
        {
            if (count > 0)//看看我还有没有兄弟了
                count--;//好兄弟死了
            else
            {
                temp = A[i];//干就完了
                count = 1;
            }
        }
    }
    //temp是幸存者
    int cutcut = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == temp)
            cutcut++;
    }
    if (cutcut > n / 2)
        return temp;
    else
        return -1;
}

int di13ti(int A[], int n)
{
    int *flag = (int *) malloc((n + 1) * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        if (A[i] >= 0 && A[i] <= n)
            flag[A[i]] = 1;//打标记，证明这个数字有了
    }
    int i = 0;
    for (i = 1; i < n; i++)
    {
        if (A[i] = 0)//数组里没有这个数字
            break;
    }
    free(flag);
    return i;
}

int abs(int x)
{
    if (x >= 0)
        return x;
    else
        return -x;
}
int di14ti(struct Sqlist *A, struct Sqlist *B, struct Sqlist *C)
{
    int temp = 0;
    int ans = abs(A->data[0] - B->data[0]) + abs(B->data[0] - C->data[0]) + abs(C->data[0] - A->data[0]);
    for (int i = 0; i < A->length; i++)
        for (int j = 0; j < B->length; j++)
            for (int k = 0; k < C->length; k++)
            {
                temp = abs(A->data[i] - B->data[j]) + abs(B->data[j] - C->data[k]) + abs(C->data[k] - A->data[i]);
                if (temp < ans)
                    ans = temp;
            }
    return ans;
}
int main()
{
    return 0;
}
