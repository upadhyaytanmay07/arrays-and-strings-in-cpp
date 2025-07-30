/* Tanmay Upadhyay
PRN 24070123120
ENTC B2 */

// find sum and average of array

#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int i,n;
    cout<<"Enter the elements of the array : ";
    for(i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nThe array is : ";
    for(n=0; n<5; n++)
    {
        cout<<arr[n]<<" ";
    }
    //to add the elements of array
    int sum=0;
    int average;
    for(i=0; i<5; i++)
    {
        sum= sum+ arr[i];
        // cout<<endl<<sum;
        average= sum/5;
    }
     cout<<endl<<"The sum of all elements is : "<<sum;
     cout<<endl<<"The average of all elements is : "<<average;
    
}

/* output for this code

Enter the elements of the array : 10 20 30 40 50

The array is : 10 20 30 40 50 
The sum of all elements is : 150
The average of all elements is : 30

*/
