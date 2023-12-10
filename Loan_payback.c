#include<stdio.h>

void Loan_calculator(float *Loan_amount, float monthly_installment, float interest_rate_monthly, float interest_rate_yearly);

int main(void)
{
    float loan_amount, monthly_payment, interest_rate_per_year, interest_rate_per_month;
    float *amount=&loan_amount;
    printf("\nLOAN CALCULATOR\n");
    printf("Enter the amount of load you have taken:");
    scanf("%f",&loan_amount);
    printf("\nEnter monthly loan payment:");
    scanf("%f",&monthly_payment);
    printf("\nEnter interest rate per year in percentage:");
    scanf("%f",&interest_rate_per_year);
    interest_rate_per_month=interest_rate_per_year/12;
    if(monthly_payment<(loan_amount*(interest_rate_per_month/100)))
    {
        printf("\nLoan cannot be repaid because monthly installment is less then the monthly interest\n");
        }
        else
        { 
               Loan_calculator(amount,monthly_payment,interest_rate_per_month,interest_rate_per_year);

        }

    return 0;
}

void Loan_calculator(float *Loan_amount, float monthly_installment, float interest_rate_monthly, float interest_rate_yearly)
{
       // float current_month_interest=((*Loan_amount)*(interest_rate_monthly/100));
        int months_to_Repaid=0;
        while(*Loan_amount>0)
        {
            
            *Loan_amount=*Loan_amount-(monthly_installment-((*Loan_amount)*(interest_rate_monthly/100)));
            ++months_to_Repaid;
        }

        printf("\nIt will take almost %d months to repay your loan\n",months_to_Repaid);
        

}