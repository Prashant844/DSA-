
    //PROBLEM OF THE DAY : WAP TO SWAP THE TWO CONJUCATIVE ELEMENT IN AN ARRAY.
    //EXAMPLE : GIVEN OR TAKEN AN ARRAY WITH SOME ELEMENTS
    //LIKE THAT : int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //REQUIRED OUTPUT IN THE FORM OF LIKE THIS : { 2,1, 4,3, 6,5, 8,7, 10,9 };
    //SWAPPED TWO CONJUCATIVE ELEMENTS LIKE THAT.

#include <stdio.h>
int main()
{
    //HERE WE TAKEN AN ARRAY WITH 10 ELEMENTS.
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //HERE WE CALCULATE THE LENGTH OF THE ARRAY.
    int length = sizeof(arr) / sizeof(arr[0]);

    //HERE WE CREATE A LOOP FOR SWAP THE ELEMENTS.
    for (int i = 0; i < length; i++)
    {
        //HERE WE CREATE TWO VARIABLE :

        // FIRST ONE FOR ACCESS THE ODD INDEX ELEMENTS.
        int prev = i;

        // SECOND ONE FOR ACCESS THE EVEN INDEX ELEMENTS.
        int next = i + 1;
        
        //HERE WE SET THE SWAPPING LOGIC OF TWO ELEMENT USING THIRD VARIABLE CALLED TEMP.
        int temp = arr[prev];
        arr[prev] = arr[next];
        arr[next] = temp;

        //HERE WE AGAIN INCREMENT VALUE OF THE 'i' VARIABLE FOR ACCESSING ELEMENTS IN PAIRWISE.
        i++;
    }
    
    //FINALLY WE PRINT THE SWAPPED ARRAY AS PER THE QUESTION REQUIREMENT.
    for (int i = 0; i < length; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}