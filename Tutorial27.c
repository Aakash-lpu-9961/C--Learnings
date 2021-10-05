#include<stdio.h>
main()
{
	printf("\n Check Syntax");
	int x=6,*x1;
	char y='A',*y1;
	float z=2.2,*z1;
	printf("\n Value of x , y, z are: %d,%c,%f",x,y,z);
	printf("\n Adress of x , y , z are: %u,%u,%u", &x,&y,&z);
	x1=&x;
	y1=&y;
	z1=&z;
	printf("\n Value of x1 , y1 , z1 are: %u,%u,%u",x1,y1,z1);
	printf("\n Value of *x1,*y1,*z1 are: %d,%c,%f",*x1 ,*y1 ,*z1);
	x1++;
	y1++;
	z1++;
	printf("\n Value of x1 , y1 , z1 are: %u,%u,%u",x1,y1,z1);
	printf("\n Value of *x1,*y1,*z1 are: %d,%c,%f",*x1 ,*y1 ,*z1);
}
