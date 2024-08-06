#include<stdio.h>

main() 
{
    int startYear, endYear;
    
    printf("Enter the start year: ");
    scanf("%d", &startYear);
    
    printf("Enter the end year: ");
    scanf("%d", &endYear);
    
    printf("Leap years between %d and %d:\n", startYear, endYear);
    int year = startYear;
    
    while (year <= endYear) 
	{
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
		{
            printf("%d\n", year);
        }
        year++;
    }
    
    return 0;
}
