/* Tanmay Upadhyay
PRN 24070123120
ENTC B2 */

// min and max element in array

#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements:\n";
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];
    for(int i = 1; i < n; i++) 
    {
        if(arr[i] > max) 
        {
            max = arr[i];
        }
        if(arr[i] < min) 
        {
            min = arr[i];
        }
    }

    cout << " The maximum element is : " << max << endl;
    cout << "The minimum element is : " << min << endl;
}

/* output for this code 

Enter the number of elements in the array: 5
Enter the elements:
10 20 30 40 50
 The maximum element is : 50
The minimum element is : 10
  */
