#include <stdio.h>
#include <calc.h>
#include <area.h> 
int main()
{
	printf("\nCalculator Application\n");
	printf("\nAddition of two numbers: %d",add(10,20));
	printf("\nSub of two numbers: %d",sub(10,20));
	printf("\nMultiplication of two numbers : %d",mul(2,3));
	printf("\n Area:%d",square(5));
	printf("\n Area:%d",rect(10,8));
	printf("\nEnd of Program\n");
	return 0;
}

