#include <stdlib.h>
#include <stdlib.h>
void main()
{
   
    float Mark2, Total;

    
    printf("enter the total mark");
    scanf("%f", &Total);
    
    if (Total > 90 && Total < 101)
    {
        printf("A");
    }
    else if (Total >= 80 && Total < 90)
    {
        printf("B");
    }
    else if (Total >= 70 && Total < 80)
    {
        printf("C");
    }
    else if (Total >= 60 && Total < 70)
    {
        printf("D");
    }
    else if (Total >= 50 && Total < 60)
    {
        printf("E");
    }
    else if (Total < 50)
    {
        printf("you idiot failed");
    }
    else
    {
        printf("Enter a valid mark");
    }
}