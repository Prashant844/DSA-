
            //Problem of the day : WAP for linear searching.

#include <stdio.h>
void main()
{
    //here we craete a array with 10 elements.
    int arr[10] = {7, 6, 8, 1, 2, 3, 4, 10, 9, 5};
    
    //here we calculate the length of the array for array traversing.
    int length = sizeof(arr) / sizeof(arr[0]);

    //here we create two variable
    //1. firsr one for User search element storing. 
    //2. last one for trigger the index of the search element. 
    int searchKey, triggerValue;

    //here we taking the User Input for searching the given array.
    printf("Enter a Key(number) for Search :");
    scanf("%d", &searchKey);

    //here we traverse the whole array for searching the element.
    for (int i = 0; i < length; i++)
    {
        //if seachkey is found
        if (arr[i] == searchKey)
        {
            //set the triggerValue is index of that element.
            triggerValue = i;
        }
    }

    //if trigger value is triggered
    if (triggerValue >= 0)
    //display the index of searched element.
        printf("\nkey are present at index %d", triggerValue);
    else
    //display the element not found in the given array.
        printf("\nkey not found!");
}