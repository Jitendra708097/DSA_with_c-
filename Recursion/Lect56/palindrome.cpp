#include<iostream>
#include<string>
using namespace std;

void Palindrome(string str,int start,int end)
{
    if(start>=end-1)
    {
        cout<<"This is in the form of palindrome : "<<str;
        return ;
    }

    else
    {
        if(str[start] != str[end-1])
        {
            cout<<"This is not a palindrome : "<<str;
            return ;
        }
    }

    Palindrome(str,start+1,end-1);

}

int main()
{
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    Palindrome(str,0,str.length());
}