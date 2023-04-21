#include<stdio.h>

main()
{
	int a=1,n,sum=0;
	printf("enter number=");
	scanf("%d",&n); 
	do
	
	{
         sum=sum+a;
         a++;
		
	}while(a<=n);
	printf("sum=%d",sum);
	
}
