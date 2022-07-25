#include <stdio.h>
#include <stdlib.h>

int main()
{

  char x;
    printf("Enter a character\n");
    scanf("%c",&x);
  if(x=='a'||x=='e'||x=='o'||x=='i'||x=='u')
  {
      printf("this character is vowel\n");
  }
  else if(x=='A'||x=='E'||x=='O'||x=='I'||x=='U')
  {
    printf("This character is vowel");
  }
    else
    {
        printf("this character is constant");
    }
    return 0;
}


