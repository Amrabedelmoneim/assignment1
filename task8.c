#include <stdio.h>
#include <stdlib.h>
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
