#include <stdlib.h>
#include <stdlib.h>
void main()
{
    int P;
    float R, n, SI;
    printf("enter the Principle amuont");
    scanf("%d", &P);
    printf("enter the Interest rate");
    scanf("%f", &R);
    printf("enter the Number of years");
    scanf("%f", &n);

    SI = (P * R * n) / 100;
    printf("Simple interest is %f", SI);
}