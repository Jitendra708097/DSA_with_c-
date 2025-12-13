#include<iostream>
using namespace std;
int main()
{
    int first =0,second=1;
    int n;
    cout<<"Enter the value n : ";
    cin>>n;
    cout<<first<<" "<<second<<" ";
    for(int i=2;i<=n;i++)
    {
        int current = first+second;
        first = second;
        second = current;
        cout<<current<<" ";
    }

    return 0;
}