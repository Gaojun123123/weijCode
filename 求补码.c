//求补码的程序
#include "stdio.h"
#include<stdlib.h>
int main()
{
  short x;// 
 // printf("short占用的空间是%d\n",sizeof(x));
  while(1)
  {
  printf("请输入占16位数\n");
  scanf("%d",&x); 
  printf("补码对应的16进制为：%x\n",x & 0xffff);
  system("pause");
  system("cls");
   }
 } 
