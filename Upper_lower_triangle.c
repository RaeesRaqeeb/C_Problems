#include<stdio.h>


void action(int arr1[][6]);

int main(void)
{
    int arr1[6][6];
    action(arr1);
    return 0;
}

void action(int arr1[][6])
{
    for(int i=0;i<6;++i)
    {
        for(int j=0;j<6;++j)
        {
            if(j==i)
            {
                arr1[i][j]=0;
            }
            else if(j>i)
            {
                arr1[i][j]=1;
            }
            else if(i>j)
            {
                arr1[i][j]=-1;
            }
        }

    }
    for(int k=0;k<6;++k)
    {
        for(int l=0;l<6;++l)
        {
            printf(" %3d",arr1[k][l]);
        }
        printf("\n");
    }
}