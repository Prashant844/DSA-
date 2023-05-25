#include <stdio.h>
void main()
{
    // CREATING STATIC ARRAY
    int arr[10] = {5, 7, 6, 8, 1, 2, 3, 4, 10, 9};
    
    // CALCULATE THE LENGTH OF THE ARRAY USING SIZEOF FUNCTION.
    int length = sizeof(arr) / sizeof(arr[0]);

    int counter = 1;
    while (counter<length)
    {
        for (int i = 0; i <length-counter; i++)
        {
            if(arr[i]>arr[i+1])   
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }  
        }
        counter++;
    } // SORTING PROCEDURE END
    for (int i = 0; i < length; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
