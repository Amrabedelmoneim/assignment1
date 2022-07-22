//fyjjk
#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    printf("Enter three numbers\n");
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2)
    {
        if (num1>num3)
            printf("%d is the largest number",num1 );
        else
            printf("%d is the largest number",num3);

    }
    else
        {
            if(num2>num3)
            printf("%d is the largest number ",num2);
    else
        printf("%d is the largest number",num3);
        }

    return 0;
}
*/
/*
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
*/
/*
int main()
{
    printf("enter a character");
    char alphapete;
    scanf("%c",&alphapete);
    if((alphapete>='a'&&alphapete<='z')||(alphapete>='A'||alphapete<='Z'))
        printf("this is an alphapete");
    else
        printf("it is not an alphapete");


}
*/
/*
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
*/
/*
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
*/
int main(){
    char o;
    float num1,num2;
    printf("Enter the arthematic operator:\n");
    scanf("%c",&o);
    printf("Enter the two numbers:\n");
    scanf("%f%f",&num1,&num2);

    switch(o){
         case '+':
            printf("%.f+%.f=%.f",num1,num2,num1+num2);
            break;
         case '-':
            printf("%.f-%.f=%.f",num1,num2,num1-num2);
            break;
         case '/':
            printf("%.f/%.f=%.f",num1,num2,num1/num2);
            break;
         case '*':
            printf("%.f*%.f=%.f",num1,num2,num1*num2);
            break;
        default:
            printf("error the operator isn't correct");
            break;
         }
    return 0;
}



