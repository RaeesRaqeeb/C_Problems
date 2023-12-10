/*CODE BY: RAQEEB RAEES (CO-LABIAN) FAST NU*/

#include<stdio.h>


int bullble_sorting();

int main(void)
{
    int size=0;
    printf("Enter the size of array you want to make:");
    while(size<20)
    {
    scanf("%d",&size);
    if(size<20)
    {
        printf("\nArray size should be more the 20");
    }
    }
    printf("\nEnter the numbers in the array:\n");
    int array[size];
    for(int i=0;i<size;++i)
    {
        printf("\nArray number %d:",i);
        scanf("%d",&array[i]);
    }
    int *ptr_arry=array;//Pointer use to get address of first
                        //element of array.
    int Number_of_exchanges=0;


   Number_of_exchanges=bullble_sorting(size,ptr_arry);//Passing Address of array 
    printf("\nNumber of exchange done are:%d",Number_of_exchanges);
    return 0;



}

int bullble_sorting(int size, int *ptr1)//Pointer to get address of array 
{
    int tem=0,count=0;
    for(int i=0;i<size;++i)
    {
        for(int n=0;n<size;++n)
        {
            if(ptr1[i]<ptr1[n] && i>n)
            {
                ++count;
                tem=ptr1[n];
                ptr1[n]=ptr1[i];
                ptr1[i]=tem;
                n=0;
                --i;
            }

        }
    }

    for(int k=0;k<size;++k)
    {
        
            printf("%d ",ptr1[k]);

    }
    return count;
}