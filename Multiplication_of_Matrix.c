/*CODE By:RAQEEB_RAEES 
QUESTION: Multiplication of any matrix.
Alert: IF you are seeing this code without even trying to make your own logic then you are not welcome here.
*/

#include<stdio.h>

void Multiplication_of_matrix(int rows1, int col1, int row2,int col2, int array1[rows1][row2], int array2[row2][col2] );

int main (void)
{
    int rows1,col1,rows2,col2;
   
    printf("Enter the rows and columns of a matrixs to find their multiplication\n");
    while(1)
    {
    printf("Rows of first matrix:");
    scanf("%d",&rows1);
    printf("Rows of second matrix:");
    scanf("%d",&rows2);
    printf("columns of first matrix:");
    scanf("%d",&col1);
    printf("columns of second matrix:");
    scanf("%d",&col2);
	//Condition for mulitplication of matrix column of first matrix should be equal to rows to second matrix.
	//Order of result matrix after multiplication will be (rows1 x columns2)
	    if(col1==rows2)
	    {
		break;
	     }
	     else{
	     printf("\nColumns of first matrix should be equal to rows of second matrix");
	    }

      }
	  int arr1[rows1][col1], arr2[rows2][col2];

    Multiplication_of_matrix(rows1,col1,rows2,col2,arr1,arr2);
   
   
   
    return 0;
}

void Multiplication_of_matrix(int rows1, int col1, int row2,int col2, int array1[rows1][row2], int array2[row2][col2] )
{
	
	
	for(int num1=0; num1<rows1;++num1)
	{
		for(int num2=0;num2<col1;++num2)
		{
		printf("\nArry1 (%d,%d):",num1,num2);
			scanf("%d",&array1[num1][num2]);
		}
		
	}
	for(int num1=0; num1<row2;++num1)
	{
		for(int num2=0;num2<col2;++num2)
		{
		printf("\nArry2 (%d,%d):",num1,num2);
			scanf("%d",&array2[num1][num2]);
		}
		
	}
	
	
	
	for(int i=0;i<rows1;++i)
	{
		for(int j=0;j<col2;++j)
		{
		int container=0;
		     for(int k=0; k<col1;++k)
		     {
		     	
		     	container+=(array1[i][k])*(array2[k][j]);
		     	
		     	}
		     printf("%d  \t", container);
		     }
		     printf("\n");
	}
	
	}
