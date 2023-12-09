#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int arr[14], random, exist, search_completed=0, search_successful=0;

    // Seed the random number generator with the current time
    srand(time(NULL));

    for (int i = 0; i < 14; ++i)
    {
        do
        {
            random = (rand() % 20) + 1;
            exist = 0;

            // Check if the random number already exists in the array
            for (int j = 0; j < i; ++j)
            {
                if (random == arr[j])
                {
                    exist = 1;
                    break;
                }
            }
        } while (exist); // Repeat the loop if the random number already exists

        arr[i] = random;
    }

    printf("Randomly generated values in array\n");
    for (int k = 0; k < 14; ++k)
    {
        printf("%d ", arr[k]);
    }

     int arr2[14], random2, exist2;

    // Seed the random number generator with the current time


    for (int i = 0; i < 14; ++i)
    {
        do
        {
            random2 = (rand() % 20) + 1;
            exist2 = 0;

            // Check if the random number already exists in the array
            for (int j = 0; j < i; ++j)
            {
                if (random2 == arr2[j])
                {
                    exist2 = 1;
                    ++search_completed;
                    break;
                }
                ++search_successful;
                ++search_completed;
            }
        } while (exist2); // Repeat the loop if the random number already exists

        arr2[i] = random2;
    }
    int tests_search=0, test_per_search=0, total_number_of_tests_per_search=0;
    printf("\n");
for(int j=0; j<14;++j)
{
    printf("%d ",arr2[j]);
}
   printf("\n");
    for(int i=0;i<14;++i)
    {
        test_per_search=0;
        int num_count=0;
        for(int k=0;k<14;++k)
        {
            if(arr[k]==arr2[i])
            {
                ++test_per_search;
                ++total_number_of_tests_per_search;
                ++num_count;
            }
        }
        tests_search+=test_per_search;
        //printf("%3d exist %3d times in array \n",arr2[i],num_count);
    }
    float percentage_of_successful_search=0, average_test_per_search=0;
    percentage_of_successful_search=((float)search_successful/(float)search_completed)*100;
    printf("\nSuccessfull search:%d \nCompleted search:%d\nPercentage 0f Successful Search:%f",search_successful,search_completed,percentage_of_successful_search);
    average_test_per_search=((float)tests_search/(float)total_number_of_tests_per_search);
    printf("\nAverage number of tests per search %.1f", average_test_per_search);
    return 0;
}

