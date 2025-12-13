#include<iostream>
using namespace std;

void gcd(int a,int b)
{
    if(b == 0)
    {
        cout<<a;
        return ;
    }

     gcd(b,a%b);
}

int main()
{
    int n1,n2;
    cout<<"Enter the number n1 : ";
    cin>>n1;
    cout<<"Enter the number n2 : ";
    cin>>n2;
    gcd(n1,n2);
}