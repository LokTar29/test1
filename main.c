#include "addr_list.h"
#include "tools.h"
#include <getch.h>
int main()
{
   for(;;)
   {
       menu();
       switch(get_cmd('1','6')-'0')
       {
          case 1:add_con();break;
          case 2:del_con();break;
          case 3:find_con();break;
          case 4:change_con();break;
          case 5:show_con();break;
          case 6:return 0;
       }
   }
}
