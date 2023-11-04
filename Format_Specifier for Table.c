//Formate specifier for making table in c(rows and columns).
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int Return (int num1,int num2,int num3,int num4);

int main(void)
{
	float amount=2000;
	printf("%4s%21s\n", "Year", "Amount on deposit");
	for(unsigned int year=0;year<2023;year++)
	{
	printf("%4u%21.2f\n", year, amount);
	amount+=250;
	}
}

int Return (int num1,int num2,int num3,int num4)
{

	int sum;
	sum=num1+num2;
	//return sum;
	sum=sum+(num3+num4);
	return sum;
	printf("it should not be displayed");
	}
