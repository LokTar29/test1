#ifndef ADD_LIST_H
#define ADD_LIST_H
#define CONS_MAX 100
//设计联系人结构
typedef struct Contacts
{
    char name[20];
    char sex;
    char phone[12];
}Contacts;

//声明联系人结构数组
extern Contacts cons[CONS_MAX];


//添加联系人
void add_con(void);


//删除联系人
void del_con(void);


//查找联系人
void find_con(void);


//修改联系人信息
void change_con(void);


//显示所有联系人
void show_con(void);
#endif//ADD_LIST_H

