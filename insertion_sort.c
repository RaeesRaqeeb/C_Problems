#include<stdio.h>


int main(void)
{
    int user_list[7]={8,12,4,5,6,7,0};
    int temp;
    for(int i=0;i<7;)
    {
        
         if(user_list[i]>user_list[i+1])
        {
            temp=user_list[i];
            user_list[i]=user_list[i+1];
            user_list[i+1]=temp;
            i=0;
        }
        else
        {
            
            ++i;
        
        }
    }

    printf("\nSorted list by insertion sort\n");
    for(int i=0;i<7;++i)
    {
        printf("%d ",user_list[i]);
    }


        
        
    return 0;

}