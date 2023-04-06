//Problem of the Day : Traversing an array of length n and display all the elements of the Array.

#include<stdio.h>
int main()
{
  // Taking a random array of size 10, which contain 10 elenments.
   int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  
  // here we find the length of the array.
  int length = sizeof(arr)/sizeof(arr[0]);
  
  // here we create a loop for traversing the array and print all the elemnets of the Array.
  printf("\nArray Elements ");
  printf("\n);
  for(int i=0; i < length; i++)
  {
     printf("%d ",arr[i]);
  }
  return 0;
}
