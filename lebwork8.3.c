#include<stdio.h>

int main() 
{
    int N;
    int i = 1;
    
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    while (i <= N)
	{
        printf("%d\n", i); 
        i++; 
    }
    
}
