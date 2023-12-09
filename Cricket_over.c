/*
CODE BY: RAQEEB RAEES

    Question: In cricket, an over consists of six deliveries a bowier bowls from one end. Create a function that takes the number of balls bowled by a bowler and calculates the number of overs and balls bowled by him/her Return the value as a float in main function, in the format overs balls.

    945 balls ------157 overs and 3 balls
    164 balls ------27 overs and 2 balls

NOTE:
    First try your best to creat your own logic from the output example(Message from: CO-LAB)
*/

#include<stdio.h>

float Over_calculate(float total_balls);

int main(void)
{
    float ball_by_blower=0, overs=0;
    printf("Enter the number of ball deliver by blower:");
    scanf("%f",&ball_by_blower);
    overs=Over_calculate(ball_by_blower);
    int count=overs;
    float balls=(overs-count);
    balls=balls*10;

    printf("\nNumber of overs %d",count);
    if(balls!=0)
    {
        printf(" and %.0f balls",balls);
    }
    return 0;
}

float Over_calculate(float total_balls)
{
    float overs=0;
    int balls=0;
    //Remember when we do total_balls%6 we get balls blower had delivered but they are not making complete over. but if you directly do total_balls/6 like 164/6=27.3 according to this 27 over and 3 over. But 2 ball had delivered so be careful.
    if(total_balls>=6)
    {
        overs=(int)(total_balls/6);
        balls=((int)total_balls%6);
        overs+= (float)balls/10;
    }
    else
    {
        total_balls/=10;
        return total_balls;
    }

    return overs;
}