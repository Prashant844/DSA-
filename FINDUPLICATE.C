
// PROBLEM OF THE DAY : FIND DUPLICATE ELEMENT IN AN ARRAY, AND DISPLAY THEMI IT.

#include <stdio.h>
int main()
{
    // HERE WE TAKEN AN ARRAY WITH LENGTH 10.
    int arr[11] = {1, 2, 5, 4, 8, 6, 8, 5, 4, 20, 15};

    // HERE WE CALCULATE THE LENGTH OF THE ARRAY.
    int length = sizeof(arr) / sizeof(arr[0]);

    // HERE WE CREATE A COUNTER VARIABLE, USED FOR COUNT THE NUMBER OF DUPLICATE ELEMENTS IN AN ARRAY.
    int counter = 0;

    // HERE WE TRAVERSE BOTH THE ARRAY USING FOR LOOP.
    for (int i = 0; i < length; i++)
    {
        // HERE WE SET THE INNER LOOP WITH '+1' FROM 'I', BECAUSE WE COMPARE THE OTHER ELEMENTS FROM PREVIOUS ELEMENTS.
        for (int j = i + 1; j < length; j++)
        {
            // HERE WE COMPARE THE ARRAY ELEMENTS
            if (arr[i] == arr[j])
            {
                // IF IT IS TRUE, INCREMENT THE COUNTER VALUE.
                counter++;

                // HERE WE PRINT THE DUPLICATE ELEMENTS.
                printf("%d ", arr[j]);
            }
        }
    }
    // HERE WE PRINT THE TOTAL NUMBER OF DUPLICATE ELEMENTS IN AN ARRAY.
    printf("\nTotal Duplicate elements is : %d", counter);
}