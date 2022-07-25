#include <stdio.h>
#include <stdli.h>

int main(void) {

	int a;
	printf("enter the number to check it even or odd \n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);

	if((a%2)==0)
	{
		printf("%d is even number ",a);
		fflush(stdin); fflush(stdout);

	}
	else
	{
		printf("%d is odd number",a);
		fflush(stdin); fflush(stdout);

	}


	return 0;

}
