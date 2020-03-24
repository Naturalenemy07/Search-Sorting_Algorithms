#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int max_numb = get_int("Max numbers in array: ");

    int numb_array[max_numb];

    for (int i = 0; i < max_numb; i++)
    {
        int n = get_int("number %i: ", i + 1);
        numb_array[i] = n;
    }

    for (int i = 0; i < max_numb; i++)
    {
        printf("%i ", numb_array[i]);
    }

    printf("\n");
}
