//����ĳ���
#include "stdio.h"
#include<stdlib.h>
int main()
{
  short x;// 
 // printf("shortռ�õĿռ���%d\n",sizeof(x));
  while(1)
  {
  printf("������ռ16λ��\n");
  scanf("%d",&x); 
  printf("�����Ӧ��16����Ϊ��%x\n",x & 0xffff);
  system("pause");
  system("cls");
   }
 } 
