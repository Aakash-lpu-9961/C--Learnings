#include<stdio.h>
int main()
{
	printf("\n Hello World");
	int *a,**b,***c,****d,p=90;
	a=&p;
	b=&a;
	c=&b;
	d=&c;
	printf("\n Pointer:%d",****d);
}
