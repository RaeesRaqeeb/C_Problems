#include<stdio.h>

void pattern();

int main(void)
{
	pattern();
	return 0;
}

void pattern()
{	
	for(int a=1;a<=12;a++)
	{
		int num1=0;
		for(int b=1;b<=a;b++)
		{
		        if(num1<=a)
		        {	
	 			for(int c=14;c>=a;c--)
	 			{
					printf(" ");
				}
		        }
		        num1+=14;
			
			printf("* ");
		}
		printf("\n");
	}

}
