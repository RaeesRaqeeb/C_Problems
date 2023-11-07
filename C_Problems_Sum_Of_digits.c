#include<stdio.h>


int Finding_digits(int Input,int value1, int value2);

int main (void)
{
	int user_input,value2=0,value3=1,value1=1;
	printf("Enter a number to find sum till it");
	scanf("%d",&user_input);
	printf("=%d",Finding_digits(user_input,value1,value2));
	return 0;
}

int Finding_digits(int Input,int value1, int value2)
{
	if(Input<1)
	{
	
	return value2;
	}
	else
	{
		value1=(Input%10);
		value2+=value1;
		printf("%d",value1);
		Input/=10;
		if(Input>1)
		{
			printf(" + ");
		}
		Finding_digits(Input,value1,value2);
		
	}

}
