#include<stdio.h>


void Pattern(); //function prototype or declaration

int main(void)
{

	Pattern();
	
	return 0;
	
}

//Function Definition

void Pattern()
{
	int height=0;
	printf("Enter the number of rows or height");
	scanf("%d",&height);
	for(int a=1;a<=height;a++)
	{
		for(int b=0;b<a;b++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(int c=height;c>=0;c--)
	{
		for(int d=0;d<c;d++)
		{
			printf("*");
		}
		printf("\n");
	}
}

