#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(b == 0)
    {
        return a;
    }

    int temp = a%b;
    a = b;
    b = temp;

    return gcd(a,b);
}

int main()
{
    int n1,n2;
    cout<<"Enter the number n1 : ";
    cin>>n1;
    cout<<"Enter the number n2 : ";
    cin>>n2;
    cout<<gcd(n1,n2);
}