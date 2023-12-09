#include<stdio.h>


void transpost_matrix(int (*ptr)[4]);


int main(void)
{
    int arr1[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int (*ptr1)[4]=arr1;
    for (int i = 0; i < 4; i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%3d ",arr1[i][j]);
        }
        printf("\n");
    }
    
    transpost_matrix(ptr1);
    return 0;
}


void transpost_matrix(int (*ptr)[4])
{
    
    int temp_index=0;
    printf("\n\n");
    int j=3;
    for(int i=3;i>=0;--i)
    {
        j=i;
        for(;j>=0;--j)
        {
          temp_index=ptr[i][j];
          ptr[i][j]=ptr[j][i];  
          ptr[j][i]=temp_index;
         // printf("%3d  %3d \n",ptr[i][j],ptr[j][i]);
        }
        
    }
    
        for (int i = 0; i < 4; i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%3d ",ptr[i][j]);
        }
        printf("\n");
    }
    
}