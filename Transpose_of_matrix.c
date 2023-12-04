//COde by RAQEEB RAEES 
//NOtE: First Try your best to create your own logic.
#include<stdio.h>


int main(void)
{	
	int row,col;
	printf("Enter the row and col of matrix");
	printf("\nROw:");
	scanf("%d",&row);
	printf("\nCOl:");
	scanf("%d",&col);
	printf("\nEnter value of array");
	
	int arr1[row][col];
	for(int value_=0; value_<row;++value_)
	{
		for(int value=0; value<col; ++value)
		{
			printf("Value in arra(%d,%d):", value_,value);
			scanf("%d",&arr1[value_][value]);
			}
			printf("\n");
	}
	printf("\nMatrix Before transpost\n");
	for(int value3=0; value3<row; ++value3)
	{
		for(int value4=0; value4<col; ++value4)
		{
			printf("%d ",arr1[value3][value4]);
			}
			printf("\n");	
		}
	int temp=0;	
	
	int arr2[col][row];

	for(int value1=0; value1<col;++value1)
	{
		for(int value2=0; value2<row;++value2)
		{	
			arr2[value1][value2]=arr1[value2][value1];
		}
	}
	temp=col;
	col=row;
	row=temp;	
	printf("\n Matrix after transpost \n");
	for(int value3=0; value3<row; ++value3)
	{
		for(int value4=0; value4<col; ++value4)
		{
			printf("%d ",arr2[value3][value4]);
			}
			printf("\n");
		}
		
      return 0;
}


