#include<stdio.h>

void triangle_pattern();

int main(void)
{
	triangle_pattern();
	return 0;
	
}

void triangle_pattern()
{
	int row=10, num1=1,num2;
	num2=row;
	do
	{
		int num3=1;
		do{
			printf(" ");
			++num3;
			}while(num3<num2);
		int num4=1;
		do{
			printf("* ");
			++num4;
			
		}while(num4<=num1);
		printf("\n");
		
		--num2;
		
		++num1;
	}while(num1<row);

}
