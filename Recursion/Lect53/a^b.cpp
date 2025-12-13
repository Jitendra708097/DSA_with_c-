#include<iostream>
using namespace std;
int power1(int a,int b)
{
    if(a == 0)
    return 0;
    if(b == 0)
    return 1;

    int ans = a*power1(a,b-1);
    return ans;
}
int main()
{
    int base,power;
    cout<<"Enter the base : ";
    cin>>base;
    cout<<"Enter the power : ";
    cin>>power;
    int ans = power1(base,power);
    cout<<"Answer : "<<ans;
}