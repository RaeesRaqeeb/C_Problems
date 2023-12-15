#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    FILE *testing;
    testing=fopen("Testing_File.txt","w");
    char alpha=65;
    if(testing==NULL)
    {
        printf("\nError in opening file\n");
        exit(0);
    }
    for(int i=0;i<26;++i)
    {
    fputc(alpha,testing);
    fprintf(testing,"\n");
    ++alpha;
    }
    fclose(testing);
    

    testing=fopen("Testing_File.txt","r");
    FILE *file2;
    file2=fopen("Copytofile.txt","w");
 
    char carrier;
  
        while((carrier=fgetc(testing)) != EOF)
        {
            fputc(carrier,file2);
            
        
        }
        fclose(file2);
        fclose(testing);
   
    return 0;
}