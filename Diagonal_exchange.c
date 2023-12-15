/*Code By: Tayra_Raqeeb*/


#include<stdio.h>


void interchanger();

int main(void)
{
    int row,col; 
    printf("\nEnter the row:");
    scanf("%d",&row);
    printf("\nEnter the col:");
    scanf("%d",&col);
    int arry1[row][col];
    int (*ptrarray)[col]=arry1;
    interchanger(row,col,ptrarray);

    return 0;
}

void interchanger(int row, int col, int (*ptr1)[col])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("\nElement(%d,%d):",i,j);
            scanf("%d",&ptr1[i][j]);
        }
    }
printf("\nBefor interchange of Diagonals\n");
for(int i=0;i<row;++i)
    {
        for(int j=0;j<col;++j)
        {
            printf("%3d ",ptr1[i][j]);
        }
        printf("\n");
    }

//Process of interchanging
    int first_Digonal[row],second_diagonal[row];
    for(int i=0;i<row;++i)
    {
        first_Digonal[i]=ptr1[i][i];
    }
    int j=(col-1),k=0;
    while(k<(row))
    {   
        second_diagonal[k]=ptr1[k][j];
        --j;
        ++k;
    }

//INterchanging
    for(int i=0;i<row;++i)
    {
        ptr1[i][i]=second_diagonal[i];
    }
    int l=(col-1),m=0;
    while(m<row)
    {
        ptr1[m][l]=first_Digonal[m];
        --l;
        ++m;
    }
printf("\nAfter Diagonal Tranformation \n");
    for(int i=0;i<row;++i)
    {
        for(int j=0;j<col;++j)
        {
            printf("%3d ",ptr1[i][j]);
        }
        printf("\n");
    }
}