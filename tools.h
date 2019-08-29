#ifndef TOOLS_H
#define TOOLS_H

//清理缓存区
void clean_stdin(void);

//获取性别
char get_sex(void);

//获取指令
char get_cmd(char start,char end);

//按任意键继续
void anykey_continue(void);

//菜单
void menu(void);

#endif//TOOLS_H
