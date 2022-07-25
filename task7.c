#include <stdio.h>
#include <stdlib.h>

int main(){
unsigned long long factorial=1;
int count,num;
printf("enter the number");
scanf("%d",&num);
if (num<=0)
    printf("error!!! factorial must be positive");
else{
for (count=1;count<=num;++count)
{
    factorial*=count;
}
printf("Factorial =%lu",factorial);
}
}
