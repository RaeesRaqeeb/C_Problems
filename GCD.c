#include<stdio.h>

int Greatest_common();

int main(void)
{
    int num1,num2,gcd;
    printf("Enter two integer");
    printf("\nNum1:");
    scanf("%d",&num1);
    printf("\nNum2:");
    scanf("%d",&num2);
    gcd=Greatest_common(num1,num2);
    float lcm=(num1*num2)/gcd;
    printf("\nGCD is %d\nLCM:%.0f",gcd,lcm);


    return 0;
}

int Greatest_common(int num1, int num2)
{
    int min=(num1<num2)?num1:num2;
    int gcd;
    for(int i=1;i<min;++i)
    {
        if(num1%i==0 && num2%1==0)
        {
            gcd=i;

        }
    }
    return gcd;
}