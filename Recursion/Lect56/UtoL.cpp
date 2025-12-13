#include<iostream>
using namespace std;

void uppertolower(string &str,int start,int end)
{
    if(start == end)
    {
        return ;
    }

    str[start] = 'a'+str[start]-'A';
    uppertolower(str,start+1,end);
}

int main()
{
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    cout<<"String before conversion : "<<str<<endl;
    uppertolower(str,0,str.length());
    cout<<"String after conversion : "<<str;
}