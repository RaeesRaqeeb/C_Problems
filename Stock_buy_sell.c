//Read the question and try to do it by yourself.

/*Code By: RAQEEB RAEES
Create a function that takes an array of integers that represent the amount in dollars that a single stock is worth, and return the maximum profit that could have been made by buying stock on day s and selling stock on day y where yax

If given the following array [44,30,24,32,30,40,38,15]then your program should show 16$ profit if person by at 24$ and sells at 40$ which is maximum. And if there is no profit it should return -1*/


#include<stdio.h>


int Stock_checker(int stocks, int stock_l[stocks]);

int main(void)
{
    printf("Enter the number of stock:");
    int Number_of_stocks;
    scanf("%d",&Number_of_stocks);
    printf("\nEnter the list of stocks:");
    int stock_list[Number_of_stocks];
    for(int i=0;i<Number_of_stocks;++i)
    {
        scanf("%d",&stock_list[i]);
    }
int value=Stock_checker(Number_of_stocks,stock_list);
    if(value==-1)
    {
        printf("\n%d",value);
    }

    return 0;
}

int Stock_checker(int stocks, int stock_l[stocks])
{
    int min, min_index=0,max=0,max_index=0,max_number;
    int max_profit=0;
        for(int j=0; j<stocks;++j)
        {
            for(int i=j;i<stocks;++i)
            {
                max_profit=stock_l[i]-stock_l[j];
                if(max_profit>max)
                {
                    max=max_profit;
                    max_number=stock_l[i];
                    max_index=i;
                    min_index=j;
                    min=stock_l[j];
                }
            }
        }
        if(max)
        {
        printf("\nIf he buys at %d and sell it when it is %d you will get maximum profit",min,max_number);
        int cal=max_number-min;
        printf("\nProfit:%d",cal);
        }
        else
        {
            return -1;

        }
        }
    



