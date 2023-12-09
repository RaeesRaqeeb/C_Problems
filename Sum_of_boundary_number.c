#include<stdio.h>


void boundar_adding(int d1,int d2, int arry1[][d2] );



int main(void)
{   
    int d1,d2;
    printf("Enter the 1 and 2 dimention of array:");
    scanf("%d %d",&d1,&d2);
    int arry1[d1][d2];
     for(int i=0;i<d1;++i)
    {
        for(int j=0;j<d2;++j)
        {
            scanf("%d",&arry1[i][j]);
        }
    }
    boundar_adding(d1,d2,arry1);
   



    return 0;
}

void boundar_adding(int d1,int d2, int arry1[][d2] )
{   
    int sum_boundary=0;
    for(int i=0;i<d1;++i)
    {
        for(int j=0;j<d2;++j)
        {
            if(i==0 || j==0 ||i==(d1-1)||j==(d2-1))
            {
                sum_boundary+=arry1[i][j];
            }
        }
    }

    printf("\nSum of boundary line number: %d",sum_boundary);


}