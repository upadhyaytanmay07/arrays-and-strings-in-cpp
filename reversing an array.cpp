/* Tanmay Upadhyay
PRN 24070123120
ENTC b2 */

// reversing an array

#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int arr[5];
    cout<<"Enter the elements of the array : \n";
    for(i=0; i<5; i++)
    {
        cin>>arr[i];
        
    }
    cout<<"\nThe array is : ";
    for(n=0; n<5; n++)
    {
        cout<<arr[n]<<" ";
    }
    // to rerverse the array
    cout<<"\nThe reversed array is : ";
    for(i=4; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    
}

/* output for this code

Enter the elements of the array : 
10 20 30 40 50

The array is : 10 20 30 40 50 
The reversed array is : 50 40 30 20 10
*/
