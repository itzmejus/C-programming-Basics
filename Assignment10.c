#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit;
		int i;
		int a[100],b[100];
		int temp[100];
	printf("enter the limit");
	scanf("%d",&limit);
	printf("enter the array 1 :");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the array 2 : ");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("array after swapping :\n");
	for(i=0;i<limit;i++)
	{
	temp[i]=a[i];
	a[i]=b[i];
	b[i]=temp[i];
	}
	printf("array 1 :");
	for(i=0;i<limit;i++)
	{
		printf("%d ,",a[i]);
	}
	printf("\n");
	printf("array 2 : ");
	for(i=0;i<limit;i++)
	{
		printf(" %d, ",b[i]);
	}



	return EXIT_SUCCESS;
}