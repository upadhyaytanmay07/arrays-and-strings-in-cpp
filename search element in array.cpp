/* Tanmay Upadhyay
PRN 24070123120
ENTC B2 */

// searching an element in an array

#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {10,20,30,40,50 };
    int i;
    int num;
    cout<<"Enter the number to be searched : \n";
    cin>>num;
    for(i=0; i<5; i++)
    {
        if(num==arr[i])
        {
            cout<<"\nThe num is found at location : "<<i+1;
        }
    }
}

/* output for this code
Enter the number to be searched :
20

The num is found at location : 2
*/  
