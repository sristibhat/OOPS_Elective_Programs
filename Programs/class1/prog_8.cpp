// write a cpp program to check if the string is pallindrome {C++ style}

#include <iostream>
using namespace std;

int main()
{
    string str;
    int flag = 0;

    cout << "Enter string: ";
    cin >> str;

    int i = 0;
    int j = str.length() - 1;

    while(i < j)
    {
        if(str[i] != str[j])
        {
            flag = 1;
            break;
        }

        i++;
        j--;
    }

    if(flag == 0)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
