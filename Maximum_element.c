#include<stdio.h>


void max_finder(int (*arr2)[3]);


int main(void)
{
    int arr1[2][3]={{1,2,3},{10,5,6}};
    int (*ptr1)[3]=arr1;

    max_finder(ptr1);

    return 0;
}

void max_finder(int (*arr2)[3])
{
    int max=0;
    max=arr2[0][0];
    for(int i=0;i<2;++i)
    {
        for(int j=0;j<3;++j)
        {
            if(max<arr2[i][j])
            {
                max=arr2[i][j];
            }
        }
    }
    printf("\nMaximum Number in the array is %d",max);


}
