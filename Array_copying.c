#include<stdio.h>

void placing_2d_array(int ptr1[]);

int main(void)
{   
    int arr1[8]={1,2,3,4,5,6,7,8};
   
    placing_2d_array(arr1);





    return 0;
}

void placing_2d_array(int ptr1[])
{
    int counter=0;
     int arr2[4][2];
    for(int i=0;i<4;++i)
    {
        for(int n=0; n<2;++n)
        {
            arr2[i][n]= ptr1[counter];
            ++counter;
        }
        
    }
    for(int i=0;i<4;++i)
    {
        for(int n=0; n<2;++n)
        {
            printf("%d ",arr2[i][n]);
        } 
        printf("\n");
    }


}