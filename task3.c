#include <stdio.h>
#include <stdlib.h>

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

