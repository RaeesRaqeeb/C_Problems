#include<stdio.h>
char name[11]={'R','A','Q','E','E','B','R','A','E','E','B'};
int size=11,value=0;
int reverser_function(	);
int main(void)
{	
	//char Name[6]={'R','A','Q','E','E','B'};
	
	reverser_function();
	for(int num1=0;num1<size;++num1)
	{
		printf("%c ",name[num1]);
		}
	return 0;
}

int reverser_function()
{
	char carrier;
	if(value==(size/2))
	{
		return 0;
	}
	else
	{
		carrier=name[value];
		name[value]=name[size-(value+1)];
		name[size-(value+1)]=carrier;
		//printf("%c %c \n",name[value],name[size-(value+1)]);
		++value;
		reverser_function();
	}
	
}
	
