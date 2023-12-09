#include<stdio.h>

void friendly_pair(int num1, int num2);

int main(void)
{
    printf("Enter two numbers to find Friendly pair or not:");
    int value1,value2;
    scanf("%d %d",&value1,&value2);
    friendly_pair(value1,value2);

    return 0;
}

void friendly_pair(int num1, int num2)
{
    int values[2]={num1,num2}, sum[2]={0,0};
    float result1=0, result2=0;

    for(int i=0;i<2;++i)
    {
        for(int j=1;j<values[i];++j)
        {
            if(values[i]%j==0)
            {
                sum[i]+=j;
            }
        }
    }

    result1= (float)sum[0]/(float)values[0];
    result2=(float)sum[1]/(float)values[1];

    if(result1==result2)
    {
        printf("THe give number is friendly pair");
    }
    else
    {
        printf("THe given number is not friendly pairs");
    }
}