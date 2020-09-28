#include "stdio.h"
#include "stdlib.h"

int main()
{
 int seg=0x490b,x=0x2359;//seg段地址 ,x偏移  16进制
  int result=0x00000000;//结果应该有20位，故用int行存储 


  while(1)
  {
    printf("请输入段地址，偏移地址\n");
	 scanf("%x%x",&seg,&x); 
    result=(int)seg;
    result=result<<4;
    printf("reslt=%x",result);
   result=result+x; 
  printf("它的物理地址为：%x\n",result&0xffffffff);
  system("pause");
  system("cls");
   }
}
//c1660000 
