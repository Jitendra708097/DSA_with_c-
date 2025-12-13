#include<iostream>
using namespace std;

void fun3(int number)
{
    if(number == 0)
    {
        cout<<"Happy Birthday Jitendra";
        return ;
    }
    cout<<number<<" Day left for birthday"<<endl;
    fun3(number-1);
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    fun3(n);
}