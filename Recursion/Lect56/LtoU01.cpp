#include<iostream>
using namespace std;

void lowertoupper(string &str,int start)
{
    if(start == -1)
    {
        return ;
    }

    str[start] = 'A'+str[start]-'a';
    lowertoupper(str,start-1);
}

int main()
{
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    cout<<"String before conversion : "<<str<<endl;
    lowertoupper(str,str.length()-1);
    cout<<"String after conversion : "<<str;
}