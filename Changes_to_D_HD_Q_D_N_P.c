#include<stdio.h>

float changer_amount(float amount);


int main(void)
{
    float change_amount;
    printf("\nEnter the change amount you get:");
    scanf("%f",&change_amount);
    changer_amount(change_amount);
    


    return 0;
}

float changer_amount(float amount)
{
    int dollar=amount;
    printf("%d\n",dollar);
    float remains=amount-dollar;
    remains*=100;
    int half_dollar,quater,dime,nickles,pinnes;
    half_dollar=(int)(remains)/50;
    quater=(remains-(half_dollar*50))/25;
    dime=(remains-((half_dollar*50)+(quater*25)))/10;
   nickles=((remains-((half_dollar*50)+(quater*25)+(dime*10)))/5);
  
    pinnes=(remains-((half_dollar*50)+(quater*25)+(dime*10)+(nickles*5)));

    printf("\nDollar:%d\nHalf_dollar:%d\nQuater:%d\nDime:%d\nNickles:%d\nPinnes:%d",dollar,half_dollar,quater,dime,nickles,pinnes);

}