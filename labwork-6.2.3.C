#include<stdio.h>

main()
{
	int i,n;
	printf("Enter the value of n= ");
	scanf("%d\n",&n);
	
	do
	{
		if(i%2==0)
		printf("%d\n",i);
		i++;
	}while(n>=1);
}

