#include <stdio.h>
#include <cs50.h>

int insert(int array[]);

int main(void)
{
    //Aquire an array of numbers from the user

    int max_numb = get_int("Max numbers in array: ");

    int numb_array[max_numb];

    for (int i = 0; i < max_numb; i++)
    {
        int n = get_int("number %i: ", i + 1);
        numb_array[i] = n;
    }


    printf("Array before sorting: \n");
    for (int i = 0; i < max_numb; i++)
    {
        printf("%i ", numb_array[i]);
    }

    printf("\n");

    /////////////Insertion Sort Algorithm//////////////

    for (int j = 1; j < max_numb; j++)
    {
        int k = max_numb;

        while (k > 0)
        {
            int l = max_numb - k;

            if (numb_array[j] < numb_array[l])
            {
                /////SWAP///
                int i = numb_array[j];
                numb_array[j] = numb_array[l];
                numb_array[l] = i;
            }
            k--;
        }
    }

    ///print array again to see if in order
    printf("\n\nArray after sorting:\n");
     for (int i = 0; i < max_numb; i++)
    {
        printf("%i ", numb_array[i]);
    }

    printf("\n");

}
