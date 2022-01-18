#include <stdlib.h>
#include <stdlib.h>
void main()
{
    float Mark;

    printf("enter the mark");
    scanf("%f", &Mark);
    if (Mark <= 100)
    {

        if (Mark > 50)
        {
            printf("Yo have passed");
        }
        else
        {
            printf("You failed");
        }
    }
}