#include<iostream>
using namespace std;

void lowertoupper(string &str,int start,int end)
{
    if(start == end)
    {
        return ;
    }

    str[start] = 'A'+str[start]-'a';
    lowertoupper(str,start+1,end);
}

int main()
{
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    cout<<"String before conversion : "<<str<<endl;
    lowertoupper(str,0,str.length());
    cout<<"String after conversion : "<<str;
}