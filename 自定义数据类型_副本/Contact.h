//
// Created by 黎圣  on 2023/7/11.
//

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#ifndef C_CONTACT_H
#define C_CONTACT_H
#include "errno.h"
#endif //C_CONTACT_H
//#define MAX 1000

#define DEFAULT_SZ 3
#define MAX_NAME 20
#define MAX_TELE 20
#define MAX_SEX 5
#define MAX_ADDRESS 30
struct PepoleInfomation
{
    char name[MAX_NAME];
    int age;
    char tele[MAX_TELE];
    char sex[MAX_SEX];
    char address[MAX_ADDRESS];
};
enum Option
{
    EXIT,//0
    ADD,//1
    DEL,//2
    SEARCH,//3
    MODIFY,//4
    SHOW,//5
    SORT,//6
    SAVE
};

//通讯录类型
struct Contact
{
    struct PepoleInfomation *data;
    int size;//记录当前已经有的元素个数
    int capacity;//当前通讯录的最大容量
};

//声明函数
//初始化通讯录的函数，动态开辟空间
int InitContact(struct Contact* ps);

//增加一个信息到通讯录
void AddContact(struct Contact *ps);

//打印通讯录中的信息
void ShowContact(const struct Contact *ps);

//删除指定的联系人
void DelContact(struct Contact *ps);

//查找指定人的信息
void SearchContact(const struct Contact *ps);

//修改指定联系人
void ModifyContact(struct Contact *ps);

void SortContact(struct Contact *ps);

void DestroyContact(struct Contact *ps);

void SaveContact(struct Contact *ps);

//加载文件中的信息到通讯录
void LoadContact(struct Contact *ps);