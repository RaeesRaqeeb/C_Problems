
#include<stdio.h>


int main(void)
{
	int a[16],n,b;
	printf("Enter any number");
	scanf("%d",&n);
	for(b=0; n>0; b++)
	{
	    a[b]=n%16;
	    n/=16;
	  }
	  printf("\nBinary value is");
      for(b-=1;b>=0;b--)
      {	
      	if(a[b]<9)
      	{
	printf("%d",a[b]);
	}
	else if(a[b]>9)
	{
		if(a[b]==15)
		{
			printf("F");
		}
		else if(a[b]==14)
		{
			printf("E");
		}
		else if(a[b]==13)
		{
			printf("D");
		}
		else if(a[b]==12)
		{
			printf("C");
		}
		else if(a[b]==11)
		{
			printf("B");
		}
		else if(a[b]==10)
		{
			printf("A");
		}
	 }
      }
    return 0;    
}

