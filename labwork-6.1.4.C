#include<stdio.h>
main()
{
	int i=1,n;
	printf("Enter value of n=");
	scanf("%d",&n);
	
	while(1<=n)
	{
		if(i%2==1)
		{
		printf("%d\n",i);	
		}
		i++;
	}
}