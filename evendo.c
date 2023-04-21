#include<stdio.h>

main()
{
	int n=1,a;
	printf("enter namer=");
	scanf("%d",&a);
	do
	{

	if (a%2==0)
	{
		printf(" %d\n",a);
	}
	a--;
	}while(a>=n);
}
