#include <stdio.h>
#include <stdlib.h>

int main()
{
printf("Enter a number\n");
int num;
scanf("%d",&num);
if(num<=0)
{
    if (num==0)
        printf("the number is zero");
    else
        printf("the number is negative");

}
else{
    printf("the number is positive");

}
}
