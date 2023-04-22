
// PROBLEM OF THE DAY : REVERSE THE ARRAY ORDER.

#include <stdio.h>
void main()
{
    // TAKEN AN ARRAY WITH 10 ELEMENTS.
    int arr[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    // CALCULATE THE LENGTH OF THE ARRAY.
    int size = sizeof(arr) / sizeof(arr[0]);
    // TRAVERSE ARRAY ELEMENTS
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            // APPLY SWAPPING LOGIC
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        // DISPLAY FINAL OUTPUT.
        printf("%d ", arr[i]);
    }
}