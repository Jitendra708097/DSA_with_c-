// Print all natural number from 1 to n
#include<iostream>
using namespace std;

// Recrusive function
void Odd(int n,int num)
{
    if(n>num)
    return ;

    cout<<n<<" ";
    Odd(n+1,num);
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    Odd(1,n);
}