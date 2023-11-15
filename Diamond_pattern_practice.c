#include<stdio.h>

void pattern();

int main(void)
{
	pattern();
	return 0;
}

void pattern()
{
	int terms=10,num3=1;
	for(int num=1;num<=5;++num)
	{
		int num2=1;
		for(;num2<=(terms-num3);++num2)
		{
			printf(" ");
			}
		for(;num2<=terms;++num2)
		{
			printf(" %d",num3);
			
			
		}
		num3+=2;
		printf("\n");
	}
	num3=9;
	for(int num=5;num>=0;--num)
	{
		int num5=1;
		num3-=2;
		for(;num5<(terms-num3);++num5)
		{
			printf(" ");
			}
			printf(" ");
		for(;num5<terms;++num5)
		{
			printf(" %d",num3);
			
			
		}
		
		printf("\n");
	}
	
}
