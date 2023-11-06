/*This code will show you the factorial of number from 1 to n using Recursion
use of unsigned int data type is not compulsary.
*/

#include<stdio.h>
int factorial(unsigned int input, unsigned int num2, unsigned int num1, unsigned int holder);


int main(void)
{
	unsigned int user_input,num2=1;
	printf("Enter any non-negative interger to find its factorial: ");
	scanf("%u",&user_input);
	unsigned int num1=1,holder=2;
	holder=1;
	while(num2<=user_input)
	{
	
	factorial(user_input,num2,num1,holder);
	unsigned int num1=1,holder=1;
	++num2;
	
	}
	return 0;
	
}

int factorial(unsigned int input, unsigned int num2, unsigned int num1, unsigned int holder)
{
	
	if(num1>num2)
	{
		if(holder>=num2)
		{
			printf("=%u\n",holder);
		}
		return 0;
	}
	else
	{
		holder*=num1;
		printf(" %u",num1);
		++num1;
		
		if(num1<=num2)
		{
		printf(" *");
		}
		
		factorial(input,num2, num1, holder);
		
		
		
	}
	
	
	
}
