#include<stdio.h>

main()
{
	int a=1,fact=1,n;
	printf("enter number=");
	scanf("%d",&n);
    do
	{
         fact = fact*n;
         n--;	
	}	while(n>=a);
	printf("sum=%d",fact);	

}
