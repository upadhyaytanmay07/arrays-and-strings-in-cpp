/*Tanmay Upadhyay
24070123120
ENTC B2
*/

#include <iostream>
#include <string>
using namespace std;

int main() 
   {
    string str1;
    cout << "Enter string: " << endl;
    cin >> str1;
    int a = str1.length();
    int s = 0;

    for (int i = 0; i < a / 2; i++) {
        if (str1[i] == str1[a - 1 - i]) 
        {
            s++;
        } else 
        {
            break;
        }
    }

    if (s == a / 2) 
    {
        cout << "String is palindrome" << endl;
    } else 
    {
        cout << "String is not a palindrome" << endl;
    }

    return 0;
}


/*Output
Enter string: 
tennet
String is palindrome
*/
