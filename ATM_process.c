#include<stdio.h>


int ATM_process(int pin, int *amount);

int main(void)
{
    int Pin=1234, amount=1000;
    int *ptr1=&amount;
    ATM_process(Pin, ptr1);
    return 0;
}

int ATM_process(int pin, int *amount)
{
    int user_pin;
    int user_input, cash_withdraw=0,cash_deposit=0;
    printf("\n*****WELCOME TO ATM SYSTEM******\n");
    while(user_input!=4)
    {
    printf("\nEnter 4 to end the program");
    printf("\nEnter Your Pin Code:\n");
    scanf("%d",&user_pin);
    if(user_pin==pin)
    {
    printf("\n1)Balance checking.\n2)Cash withdrawal\n3)Cash deposition.\n4)Exit program\n");
    
    
    while(user_input!=4)
    {
        printf("\n");
        scanf("%d",&user_input);
        switch (user_input)
        {
            case 1:
            printf("\nAmount in bank:%d",*amount);
            break;

            case 2:
           
            printf("\n*****CASH WITHDRAW******\n");
            printf("\nAmount withdraw:");
            scanf("%d",&cash_withdraw);
             if(*amount>cash_withdraw)
            {
            *amount-=cash_withdraw;
            printf("\n****%d Amount withdraw successfully****\n",cash_withdraw);
            }
            else
            {
                printf("\nYou have %d money in you account.\n",*amount);
            }
            break;

            case 3:
            printf("\n*******Deposit MOney*****\n");
            printf("\nAmount Deposit:");
            scanf("%d",&cash_deposit);
            *amount+=cash_deposit;
            printf("\n*****%d Amount Deposit Successfully ****",cash_deposit);
            break;

            case 4:
            return 0;
            break;

            default:
            printf("\n****Wrong input****\n");

        }
         printf("\n1)Balance checking.\n2)Cash withdrawal\n3)Cash deposition.\n4)Exit program\n");
    }
 }
 else if(user_pin==4)
 {
    return 0;
 }
 else
 {
    printf("\n***WRONG INPUT****");
 }

}

}

