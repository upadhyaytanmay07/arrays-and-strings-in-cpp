/* Tanmay Upadhay
PRN 24070123120
ENTC B2 */

// take array input from user and display

#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"take array input from the user\n";
    int arr[5];
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nThe array is : ";
    for(n=0; n<5; n++)
    {
        cout<< arr[n]<<" ";
        
    }
}

/* output for this code
take array input from the user
10 20 30 40 50

The array is : 10 20 30 40 50
*/
