#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1,num2,num3;
    printf("enter three numbers");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2&&num1>num3)
    printf("largest numbers is :%d",num1);
    else if(num2>num1&&num2>num3)
     printf("largest numbers is :%d",num2);
     else 
      printf("largest numbers is :%d",num3);
}