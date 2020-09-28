#include <stdio.h>


int main()
{
	int x;
	int *p=&x;
	printf("请输入16进制值\r\n"); 
	scanf("%x",&x);
	
	printf("%x的十进制为%d",x,x);
 } 
 

  
