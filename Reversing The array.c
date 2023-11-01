#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d", &num);
    int Reversing[num],i;
    for(i = 0; i < num; i++) {
        scanf("%d", &Reversing[i]);
    }


    /* Write the logic to reverse the array. */

    for(i = (num-1); i >=0; i--)
        printf("%d ", Reversing[i]);
    return 0;
}
