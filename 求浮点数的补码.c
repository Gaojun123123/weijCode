#include "stdio.h"
#include "stdlib.h"
//��֮ǰ�����ʱ���Ϳ��һ�£���Ϊ��-17.625Ҫ���ɲ��룬��ʼ������ԭ�������ֳ��Ľ����β��
int main()
{
float x;//�������,�ڴ���ʹ��IEE754��־�洢 
int *p;  //��int���Եõ��洢����λ 
printf("floatռ�õĿռ���%d\n",sizeof(x));
  while(1)
  {
  printf("�����븡����\n");
  scanf("%f",&x); 
  p=&x;
  printf("�����Ӧ��16����Ϊ��%x\n",*p&0xffffffff);
  system("pause");
  system("cls");
   }
}
//c1660000 
