// write a cpp program to check if the string is pallindrome {C-style}

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[]="MADAM";
    int len=strlen(str);
    for(int i=0;i<(len/2);i++)
    {
        if(str[i]==str[len-(i+1)])
        {
        }

        else
        {
            cout<<"The string is not Pallendrome";
            return 0;
        }
    }
    cout<<"The String is pallendrome";
    return 0;
}
