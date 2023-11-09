#include<stdio.h>


int main(void)
{
	int size=0;
	printf("enter the size of the array:");
	scanf("%d",&size);
	char word[size];
	printf("Enter the character of a word one by one to find it is palandorm or not");
	for(int num1=0; num1<size;++num1)
	{
		scanf("%s",&word[num1]);
	}
	int divide=size/2, num1=size-1;
	int value=0;
	
	for(int num2=0;num2<divide;++num2)
	{
		if(word[num2]==word[num1])
		{
			++value;
		}
		--num1;
	}
	if(value==divide)
	{
		printf("The given word is palandorm");
	}
	else
	{
		printf("The given word is not a paladrom");
		}
	
	return 0;

}
