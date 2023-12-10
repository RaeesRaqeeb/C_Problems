#include<stdio.h>

void bar_line();


int main(void)
{
    int store_sells[5];
    printf("Enter the sells of each store:");
    for(int i=0;i<5;i++)
    {
        printf("\nStore %d:",i+1);
        scanf("%d",&store_sells[i]);

    }
    printf("\n * represents 100$ sells\n"); 
    for(int n=0;n<5;++n)
    {
        printf("\nStore %d:",n+1);
         bar_line(store_sells[n],n);
    }


    return 0;
}


void bar_line(int store_sells, int num_store)
{
    while(store_sells>=100)
    {
        printf("*");
        store_sells=store_sells-100;
    }
}