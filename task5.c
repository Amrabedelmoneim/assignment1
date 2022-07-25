#include <stdio.h>
#include <stdlib.h>

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
