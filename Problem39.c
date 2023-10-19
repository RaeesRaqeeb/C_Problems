#include<stdio.h>

int Pattern(int height, int width);

int main(void)
{
	int height1, width1;
	printf("Enter Height(number of rows) and Weight(character per line)");
	scanf("%d %d",&height1,&width1);
	Pattern(height1,width1);
	
	return 0;
	
}

int Pattern(int height, int width)
{
for(int a=0; a<=width;a++)
{
	printf("=");
	}
	printf("\n");
	for(int b=0;b<=(height-2);b++)
	{
		printf("*");
		for(int c=0; c<=(width-2); c++)
			{
				printf(" ");
				}
		printf("*");
		printf("\n");
		}
for(int a=0; a<=width;a++)
{
	printf("=");
	}
	}
