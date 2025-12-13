// to print odd number from 1 to n
#include<iostream>
using namespace std;

// Function
void odd(int n,int num)
{
    if(n>num)
    return;

    cout<<n<<" ";
    odd(n+2,num);
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    odd(1,n);
}