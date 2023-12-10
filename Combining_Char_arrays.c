#include<stdio.h>


int main(void)
{
    char first_name[15],last_name[15],second_name[15];
    printf("Enter your first name:");
    scanf("%s",first_name);
    printf("\nEnter your last name:");
    scanf("%s", second_name);
    printf("\nEnter your last name:");
    scanf("%s", last_name);
    int array4[50];
    int i=0;
    for(;last_name[i]!='\0';++i)
    {
        array4[i]=last_name[i];
    }
    array4[i]=',';
    ++i;
    array4[i]=' ';
 //   printf("%d\n",i);
    int j=0;
    ++i;
    for(;first_name[j]!='\0';++j,++i)
    {
        array4[i]=first_name[j];
        
    }
    array4[i]=32;
    int k=0;
    ++i;
    for(;second_name[k]!='\0';++k,++i)
    {
        array4[i]=second_name[k];
    }
    for(int n=0;n<i;++n)
    {
    printf("%c",array4[n]);
    }
    return 0;
}