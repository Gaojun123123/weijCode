#include "stdio.h"
#include "stdlib.h"

int main()
{
 int seg=0x490b,x=0x2359;//seg�ε�ַ ,xƫ��  16����
  int result=0x00000000;//���Ӧ����20λ������int�д洢 


  while(1)
  {
    printf("������ε�ַ��ƫ�Ƶ�ַ\n");
	 scanf("%x%x",&seg,&x); 
    result=(int)seg;
    result=result<<4;
    printf("reslt=%x",result);
   result=result+x; 
  printf("���������ַΪ��%x\n",result&0xffffffff);
  system("pause");
  system("cls");
   }
}
//c1660000 
