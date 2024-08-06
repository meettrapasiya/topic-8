#include<stdio.h>

main()
{
	int i,n,sum=0,f=0,s=1;
	printf("Enter the Fibonacci series =");
	scanf("%d\n",&n);
	 
	for(i=1;i<=n;i++)
	{
	printf("%d",f);
	sum=f+s;
	f=s;
	s=sum;
	}
}