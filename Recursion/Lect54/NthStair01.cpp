#include<iostream>
using namespace std;
int main()
{
    int totalStair;
    int first = 1,second = 2;
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(n == 1)
    cout<<"1";
    else if(n == 2)
    cout<<"2";
    for(int i = 3;i<=n;i++)
    {
        totalStair = first + second;
        first = second;
        second = totalStair;
    }

    cout<<"These are total step to reach on top stair : "<<totalStair;
}