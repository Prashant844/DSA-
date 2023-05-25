#include <stdio.h>
void main()
{
    // CREATING STATIC ARRAY
    int arr[10] = {5, 7, 6, 8, 1, 2, 3, 4, 10, 9};

    // CALCULATE THE LENGTH OF THE ARRAY USING SIZEOF FUNCTION.
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
}
