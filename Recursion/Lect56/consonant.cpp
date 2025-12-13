#include<iostream>
using namespace std;

int consonant(string str,int start,int end)
{
    if(start == end)
    {
        return 0;
    }

    if(str[start] != 'a' && str[start] != 'e' && str[start] != 'i' && str[start] != 'o' && str[start] != 'u')
    {
        return 1+consonant(str,start+1,end);
    }

    return consonant(str,start+1,end);
}

int main()
{
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    cout<<"Consonant in string : "<<consonant(str,0,str.length());
}