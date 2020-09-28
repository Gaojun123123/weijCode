#include "stdio.h"
#include "stdlib.h"
//在之前计算的时候糊涂了一下，以为将-17.625要化成补码，起始就是用原码在来分出的阶码和尾数
int main()
{
float x;//待输入的,内存中使用IEE754标志存储 
int *p;  //用int可以得到存储的数位 
printf("float占用的空间是%d\n",sizeof(x));
  while(1)
  {
  printf("请输入浮点数\n");
  scanf("%f",&x); 
  p=&x;
  printf("补码对应的16进制为：%x\n",*p&0xffffffff);
  system("pause");
  system("cls");
   }
}
//c1660000 
