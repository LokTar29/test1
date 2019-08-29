#include<stdio.h>
#include "tools.h"
#include<stdlib.h>
#include<getch.h>
//清理缓存区
void clean_stdin(void)
{
   stdin->_IO_read_ptr=stdin->_IO_read_end;
}

//获取性别
char get_sex(void)
{
   printf("请输入性别(m男/w女):");
   for(;;)
   {
       char sex=getch();
       if ('m'==sex||'M'==sex||'w'==sex||'W'==sex)
       {
       		printf("%c\n",sex);
       		return sex;
       }
   }
}

//按任意键继续
void anykey_continue(void)
{
    clean_stdin();
    printf("请输入任意键继续....");
    getch();
}
//获取指令
char get_cmd(char start,char end)
{
   for (;;)
   {
      char cmd=getch();
      if (start<=cmd && cmd<=end) 
      {
         printf("%c\n",cmd);
         return cmd;
      }
   }
}

//菜单
void menu(void)
{
   system("clear");
   puts("***欢迎使用指针通讯录***");
   puts("1、添加联系人");
   puts("2、删除联系人");
   puts("3、查找联系人");
   puts("4、修改联系人信息");
   puts("5、显示所有联系人");
   puts("6、退出指针通讯录");
   puts("请输入指令：");
}

