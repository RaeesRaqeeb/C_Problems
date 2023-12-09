#include<stdio.h>

void lower_triangle(int D_s, int array1[][D_s]);

int main(void)
{
    int dimention;
    printf("Enter the dimention of the matrix:");
    scanf("%d",&dimention);
    int array1[dimention][dimention];
    lower_triangle(dimention,array1);


    return 0;
}


void lower_triangle(int D_s, int array1[][D_s])
{
   for(int i=0;i<D_s; ++i)
   {
    for(int j=0;j<D_s;++j)
    {
        printf("\nEnter number(%d,%d):",i,j);
        scanf("%d",&array1[i][j]);
    }
   }
int zero_checker=0, count=0;;
    for(int j=0;j<D_s;++j )
    {
        for(int i=0;i<D_s;++i)
        {
            if(i>j)
            {
                ++count;
                if(array1[j][i]==0)
                {
                    ++zero_checker;
                }
            }
        }
    }
    if(count==zero_checker)
    {
        printf("\nThe given matix is Lower Triangular matrix\n");
    }

    for(int k=0;k<D_s;++k)
    {
        for(int l=0;l<D_s;++l)
        {
            printf("%d ",array1[k][l]);
        }
        printf("\n");
    }
}