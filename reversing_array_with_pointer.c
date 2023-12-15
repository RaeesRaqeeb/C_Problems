#include<stdio.h>


void reversing();

int main(void)
{
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptrarry=arr1;
    for(int i=0;i<10;++i)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");
    reversing(ptrarry);
 
    for(int i=0;i<10;++i)
    {
        printf("%d ",arr1[i]);
    }

    return 0;
}

void reversing(int *arry)
{
    int temp=0,value=10,size=10;
    for(int n=0;n<(size/2);++n)
    {
        temp=arry[n];
        arry[n]=arry[--value];
        arry[value]=temp;
    }
    return ;
}