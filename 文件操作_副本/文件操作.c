//
// Created by 黎圣  on 2023/7/13.
//
#include <string.h>
#include "stdio.h"
#include "errno.h"
//int main()
//{
//    //打开文件test.txt
//    FILE* pf = fopen("/users/lisheng/desktop/test.txt", "a");
//    if (pf == NULL)//打开失败
//        printf("%s\n", strerror(errno));
//
//    //写入文件
//    fputc('b', pf);
//    fputc('i', pf);
//    fputc('t', pf);
//
//    //关闭文件
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

//int main()
//{
//    FILE* pfRead = fopen("/users/lisheng/desktop/test.txt", "r");
//    if (pfRead == NULL)
//        printf("%s\n", strerror(errno));
//
//    //读文件
//    printf("%c\n", fgetc(pfRead));
//    printf("%c\n", fgetc(pfRead));
//    printf("%c\n", fgetc(pfRead));
//    fclose(pfRead);
//    pfRead = NULL;
//    return 0;
//}

//int main()
//{
//    //键盘 - 标准输入设备 - stdin
//    //屏幕 - 标准输出设备 - stdout
//    int ch = fgetc(stdin);
//    fputc(ch, stdout);
//    return 0;
//}

//int main()
//{
//    char buf[1024] = {0};
//    FILE* pf = fopen("/users/lisheng/desktop/test.txt","w");
//    if (pf == NULL)
//        return 0;
//
////    //读文件
////    fgets(buf, 1024, pf);//放buf里，从pf里读
//    //写入文件
//    fputs("hello", pf);
//    fputs("hello", pf);
//
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

//int main()
//{
//    //从键盘上读起一行文本信息
//    char buf[1024] = {0};
//    fgets(buf, 1024, stdin);//从标准输入读取
//    fputs(buf, stdout);//输出到标准输出
//    return 0;
//}

//struct S
//{
//    int n;
//    float score;
//    char arr[10];
//};
//int main()
//{
//    struct S s = {0};
//    FILE* pf = fopen("/users/lisheng/desktop/test.txt","r");
//    if (pf == NULL)
//        printf("%s", strerror(errno));
//
//    //格式化的形式写文件
//    //fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//    //格式化的输入数据
//    //fscanf(pf, "%d %f %s", &(s.n), &(s.score), &(s.arr));
//    //printf("%d %f %s", s.n, s.score, s.arr);
//
//    fscanf(stdin, "%d %f %s", &(s.n), &(s.score), &(s.arr));
//    fprintf(stdout, "%d %f %s", s.n, s.score, s.arr);
//    //scanf/printf 是针对标准输入流/标准输出流的格式化输入/输出语句
//    //fsanf/fprintf 是针对所有输入流/所有输出流的格式化输入/输出语句
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}


//struct S
//{
//    char name[20];
//    int age;
//    double score;
//};
//int main()
//{
//    struct S s = {"张三", 18, 100};
//    FILE* pf = fopen("/users/lisheng/desktop/test.txt","wb");
//    if(pf == NULL)
//        return 0;
//    //二进制的形式写文件
//    fwrite(&s, sizeof(struct S), 1, pf);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}


//struct S
//{
//    char name[20];
//    int age;
//    double score;
//};
//int main()
//{
//    //struct S s = {"张三", 18, 100};
//    struct S tmp = {0};
//    FILE* pf = fopen("/users/lisheng/desktop/test.txt","wb");
//    if(pf == NULL)
//        return 0;
//    //二进制的形式写文件
//    fread(&tmp, sizeof(struct S), 1, pf);
//    printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

//int main()
//{
//    FILE* pf = fopen("/users/lisheng/desktop/test.txt","wb");
//    if (pf == NULL)
//        return 0;
//
//    //1、定位文件指针
//    fseek(pf, 2, SEEK_CUR);
//    //2、读取文件
//    int ch = fgetc(pf);
//    printf("%c\n", ch);
//    return 0;
//}

int main()
{
    FILE* pf = fopen("/users/lisheng/desktop/test2.txt", "r");
    if (pf == NULL)
        perror("open file test2.txt fail");
    fclose(pf);
    pf = NULL;
    return 0;
}