#include<stdio.h>


int main(void)
{
    int seconds;
    printf("\nENter the seconds");
    scanf("%d",&seconds);
    int seconds_remain,minutes,hourse;
    hourse=(seconds/3600);
    minutes=(seconds-(hourse*3600))/60;
    seconds_remain=(seconds-(hourse*3600 + minutes*60));
    printf("\nHours:%d\nMinutes:%d\nSeconds:%d",hourse,minutes,seconds_remain);
    

    return 0;
}