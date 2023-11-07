#include<stdio.h>

//This program find the value raise to its some power. 

long int Power_finder(long int Raise_to_power, long int Base_number, long int holder, long int multipler, long int checker);

int main(void)
{	
//we have used long int for the case of large value like 9^9
	long int Raise_to_power, Base_number,holder=0,checker=0;
	printf("Enter the base value and its raise to power");
	printf("\nBase number:");
	scanf("%ld",&Base_number);
	printf("\nPower of base:");
	scanf("%ld",&Raise_to_power);
	long int multipler=1;
	printf("=%ld",Power_finder(Raise_to_power,Base_number,holder,multipler,checker));
	

	return 0;
}

long int Power_finder(long int Raise_to_power, long int Base_number, long int holder, long int multipler, long int checker)
{
	if(checker>=Raise_to_power)
	{
		return multipler;
	}
	else
	{
		multipler*=Base_number;
		printf("%ld",Base_number);
		
		++checker;
		if(checker<Raise_to_power)
		{
			printf(" * ");
		}
		Power_finder(Raise_to_power, Base_number, holder, multipler, checker);
	}
}
		
