#include <stdio.h>
#include <stdlib.h>

int main()
{
 int num,count,sum=0;
 printf("enter an integer");
 scanf("%d",&num);
 count=1;
 for(count=1;count<=num;++count)
 {
     sum+=count;

 }
 printf("Sum = %d",sum);
}
