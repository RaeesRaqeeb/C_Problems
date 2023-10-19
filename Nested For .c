#include<stdio.h>



int main(void)
{
	int num1[20],checker=0,equality=0,b,c;
	printf("Enter number of integers:");
	for(int a=0;a<=10;a++)
	{
		scanf("%d",&num1[a]);
	
	}
	for( b=0;b<=10;b++)
	{
	checker=0;
	
	   for( c=0;c<=10;c++)
	      {
	        
	      	if(num1[b]>=num1[c])
	      	{
	      	if(b!=c)
	      	{
	      	checker++;
	      	}
	      		if(num1[b]==num1[c])
	      		++equality;
	        }
	       
	        else
	        {
	        break;
	        }
	        }
	      
	     if(checker==10)
	     {
	     printf("Greatest value is %d",num1[b]);
	     printf("\n%d time it occures",equality);
	     break;
	     }
	     else
	     {
	     equality=0;
	     }
	 }  
	


	return 0;
}
