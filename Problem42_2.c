#include<stdio.h>
/*This program give you this pattern
*
***
*****
*******
*********
*********
*******
*****
***
*
*/

void pattern();

int main(void)
{
	pattern();
	
	
	return 0;

}


void pattern()
{
	int num1=1,num3=1;
	for(;num1<=10 && num1>=0;num1+=2)
	{
		int num2=1;
		for(;num2<=num1;num2++)
		{
			printf("*");
			
			
		}
		//Code Below help us to do reverse of the pattern
		++num3;
		if(num3==6)
		{
			num1+=2;
		}
		if(num3>=6)
		{
		num1-=4;
		}
		printf("\n");
		
	}
	
	
	
	




}
