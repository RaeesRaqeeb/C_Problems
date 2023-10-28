#include<stdio.h>

/* The program will find maximum and minimum
 number from the list of the user input also 
 it finds the average of the given numbers*/
 
int maximum_minimum();

int average();

int main(void){
	int num;
	num=maximum_minimum();
	printf("Maximum Number in the list is: %d",num);
	return 0;
	
}

int maximum_minimum()
{
	int num_list[100],total;
	for(int a=0;a<20;a++)
	{
		scanf("%d",&num_list[a]);
		total+=num_list[a];
	}
	int num1=0,num2=0,min,max,num3=0,num4=0;
	for(;num2<20;num2++)
	{
		for(;num1<=20;num1++)
		{
				if(num_list[num2]>=num_list[num1])
				{
					max=num_list[num2];
				}
				
				else
				{
					break;
				}
				
		}

	}
	for(;num3<=20;num3++)
	{
		for(;num4<=20;num4++)
		{
			if(num_list[num3]<=num_list[num4])
				{
					min=num_list[num3];
				}
				else
				{
					break;
				}
				
		}

	}
	printf("Minimum Number in the List: %d\n",min);
	average(total);
	 return max;
	
}


int average(int number)
{
	float Average;
	Average= number/20;
	printf("\nAverage is %f ",Average);
}

