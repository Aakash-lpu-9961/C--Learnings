#include<stdio.h>
main()
{
	int x , y , z[200];
	printf("How Are You \n");
	printf("\n Press 1 for Good and press 2 for Not Good \n ");
	scanf("\n %d",&x);
	printf("\n You Enterd :%d",x);
	if(x == 1)
	{
		printf("\n Congrats");
	}
	else
	{
		printf("\n Can i know the reason for your Sadness\n");
		printf("\n Okay dont worry, Now Press 1 for describing your issue otherwise press 2");
		scanf("%d",&y);
		if(y == 1)
		{
			printf("\n Describe your issue after the beep sound in your words \a \n");
			scanf("%c", &z);
		}
		else
		{
			printf("\n As your wish");
		}
	}
	
}
