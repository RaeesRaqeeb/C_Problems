#include<stdio.h>

int Fibonacci_sequence(int input,int s1, int s2, int holder);

int main(void)
{
	int user_input,s1=0,s2=1,holder=0;
	printf("Enter any number");
	scanf("%d",&user_input);
	Fibonacci_sequence(user_input,s1,s2,holder);
	return 0;
}


int Fibonacci_sequence(int input,int s1, int s2, int holder)
{
	if(holder>=input)
	{
		return 0;
	}
	else 
	{
		holder=s1+s2;
		printf("%d + %d=%d\n",s1,s2,holder);
		s1=s2;
		s2=holder;
		Fibonacci_sequence(input, s1,s2,holder);
	}
}
		
	
	
