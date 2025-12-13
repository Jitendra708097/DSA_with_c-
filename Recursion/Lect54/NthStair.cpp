#include<iostream>
using namespace std;

int NthStair(int n)
{
    if(n == 1)
    return 1;
    if(n == 2)
    return 2;

    return NthStair(n-1)+NthStair(n-2);
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<NthStair(n);
}