#include <stdlib.h>
#include <stdlib.h>
void main()
{
    int limit, sum, i;
    printf("enter a limit");
    scanf("%d", &limit);
    for (i = 2; i <= limit; i++)
    {
        if (i % 2 == 0)
        {

            printf(" %d", i);
        }
    }
}
