//
// Created by 黎圣  on 2023/7/11.
//
/*
 * 1、存放1000个好友的信息
 * 名字、电话、性别、住址、年龄
 * 2、增加好友信息
 * 3、删除指定名字的好友信息
 * 4、查找好友信息
 * 5、修改好友信息
 * 6、打印好友信息
 * 7、排序
 */

#include "string.h"
#include "Contact.h"
int InitContact(struct Contact *ps)
{
    ps->data = (struct PepoleInfomation*)malloc(DEFAULT_SZ*sizeof(struct PepoleInfomation));
    if (ps->data == NULL)
        return 0;
    ps->size = 0;//设置通讯录最初只有0个元素
    ps->capacity = DEFAULT_SZ;
}

void CheckCapacity(struct Contact* ps)
{
    if (ps->size == ps->capacity)
    {
        //满了，增容
        struct PepoleInfomation* ptr = realloc(ps->data, (ps->capacity + 2)*sizeof(struct PepoleInfomation));
        if (ptr != NULL)
        {
            ps->data = ptr;
            ps->capacity += 2;
            printf("增容成功\n");
        }
        else
            printf("增容失败\n");
    }
}

void AddContact(struct Contact *ps)
{

    //检测当前通讯录的容量
    //1、如果满了，就增加空间
    //2、不满啥事都不敢
    CheckCapacity(ps);
    //增加数据
    printf("请输入名字：");
    scanf("%s", ps->data[ps->size].name);
    printf("请输入年龄：");
    scanf("%d", &(ps->data[ps->size]).age);
    printf("请输入性别：");
    scanf("%s", ps->data[ps->size].sex);
    printf("请输入电话：");
    scanf("%s", ps->data[ps->size].tele);
    printf("请输入地址：");
    scanf("%s", ps->data[ps->size].address);
    ps->size++;
    printf("添加成功！\n");
//    if (ps->size == )
//        printf("通讯录已满，无法增加\n");
//    else
//    {
//        printf("请输入名字：");
//        scanf("%s", ps->data[ps->size].name);
//        printf("请输入年龄：");
//        scanf("%d", &(ps->data[ps->size]).age);
//        printf("请输入性别：");
//        scanf("%s", ps->data[ps->size].sex);
//        printf("请输入电话：");
//        scanf("%s", ps->data[ps->size].tele);
//        printf("请输入地址：");
//        scanf("%s", ps->data[ps->size].address);
//        ps->size++;
//        printf("添加成功！\n");
//        //ShowContact();
//    }

}

void ShowContact(const struct Contact *ps)
{
    if (ps->size == 0)
        printf("通讯录为空\n");
    else
    {
        int i = 0;
        //标题
        printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");

        //数据
        for (i = 0; i < ps->size; i++)
        {
            printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
                   ps->data[i].name,
                   ps->data[i].age,
                   ps->data[i].sex,
                   ps->data[i].tele,
                   ps->data[i].address);
        }
    }
}

static int FindByName(struct Contact *ps, char name[MAX_NAME])
{
    int i = 0;
    for (i = 0; i < ps->size; i++)
    {
        if(0 == strcmp(ps->data[i].name, name))//找到了
            return i;
    }
    return -1;//找不到的情况
}
void DelContact(struct Contact *ps)
{
    char name[MAX_NAME];
    printf("你要删除谁？：");
    scanf("%s", name);

    //1、查找要删除的人在什么位置
    //找到了返回名字所在元素的下标
    //找不到返回 -1
    int pos = FindByName(ps, name);
    if (pos == -1)//已经遍历完了还没找到，代表要删除的人不存在
        printf("要删除的人不存在\n");

    //2、删除
    else
    {
        //删除数据
        int j = 0;
        for (j = pos; j < ps->size - 1; j++)
            ps->data[j] = ps->data[j + 1];
        ps->size--;
        printf("删除成功！\n");
    }
}

void SearchContact(const struct Contact *ps)
{
    char name[MAX_NAME];
    printf("请输入要查找人的名字：");
    scanf("%s", name);
    int pos = FindByName(ps, name);
    if (pos == -1)
        printf("找不到这个人\n");
    else
    {
        printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
        printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
           ps->data[pos].name,
           ps->data[pos].age,
           ps->data[pos].sex,
           ps->data[pos].tele,
           ps->data[pos].address);
    }
}

void ModifyContact(struct Contact *ps)
{
    char name[MAX_NAME];
    printf("请输入要修改的人的名字：");
    scanf("%s", name);
    int pos = FindByName(ps, name);
    if (pos == -1)
        printf("要修改的人不存在\n");
    else
    {
        printf("请输入名字：");
        scanf("%s", ps->data[pos].name);
        printf("请输入年龄：");
        scanf("%d", &ps->data[pos].age);
        printf("请输入性别：");
        scanf("%s", ps->data[pos].sex);
        printf("请输入电话：");
        scanf("%s", ps->data[pos].tele);
        printf("请输入地址：");
        scanf("%s", ps->data[pos].address);
        printf("修改完成\n");
    }
}

void SortContact(struct Contact *ps)
{

}

void DestroyContact(struct Contact *ps)
{
    free(ps->data);
    ps->data = NULL;
}
void SaveContact(struct Contact *ps)
{
    FILE* pfWrite = fopen("/users/lisheng/desktop/contact.dat", "wb");
    if (pfWrite == NULL)
    {
        printf("SaveContact:%s", strerror(errno));
        return;
    }
    //写通讯录中的数据到文件中
    int i = 0;
    for (i = 0; i < ps->size; i++)
        fwrite(&(ps->data[i]), sizeof(struct PepoleInfomation), 1, pfWrite);
    fclose(pfWrite);
    pfWrite = NULL;
}
void LoadContact(struct Contact *ps)
{
    struct PepoleInfomation tmp = {0};
    FILE* pfRead = fopen("/users/lisheng/desktop/contact.dat", "wb");
    if (pfRead == NULL)
    {
        printf("LoadContact:%s\n", strerror(errno));
        return;
    }

    //读取文件存放到通讯录中
    while(fread(&tmp, sizeof(struct PepoleInfomation), 1, pfRead))
    {
        CheckCapacity(ps);
        ps->data[ps->size] = tmp;
        ps->size++;
    }
    fclose(pfRead);
    pfRead = NULL;
}