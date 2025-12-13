#include<iostream>
using namespace std;

void uppertolower(string &str,int start)
{
    if(start == -1)
    {
        return ;
    }

    str[start] = 'a'+str[start]-'A';
    uppertolower(str,start-1);
}

int main()
{
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    cout<<"String before conversion : "<<str<<endl;
    uppertolower(str,str.length()-1);
    cout<<"String after conversion : "<<str;
}