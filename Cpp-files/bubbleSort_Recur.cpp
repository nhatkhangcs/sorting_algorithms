#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    // Base case
    if (n == 1)
        return;
 
    int count = 0;
    // One pass of bubble sort. After
    // this pass, the largest element
    // is moved (or bubbled) to end.
    for (int i=0; i<n-1; i++)
        if (arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
            count++;
        }
 
      // Check if any recursion happens or not
      // If any recursion is not happen then return
      if (count==0)
           return;
 
    // Largest element is fixed,
    // recur for remaining array
    bubbleSort(arr, n-1);
}
