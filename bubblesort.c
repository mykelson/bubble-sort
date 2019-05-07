// Sort an array of integers using bubble sort.

#include <stdio.h>

void bubble_sort(int array[], int n);

int main(void)
{
    int list[100], c, n;
    printf("Enter a number: ");
    scanf("%i", &n);

    //Populate the array
    printf("Enter %i numbers:\n", n);
    for (c=0; c < n; c++)
        scanf("%i", &list[c]);

    //Sort the array
    bubble_sort(list, n);

    // Display sorted array
    printf("Here is your sorted array in ascending order:\n");
    for (c=0; c < n; c++)
        printf("%i", list[c]);
}

void bubble_sort(int array[], int n)
{
    int c, d, t;

    for (c = 0; c < n-1; c++)
    {
        for(d = 0; d < n - c - 1; d++)
        {
            if (array[d] > array[d+1])
            {
                // swapping
                t = array[d];
                array[d] = array[d+1];
                array[d+1] = t;
            }
        }
    }
}