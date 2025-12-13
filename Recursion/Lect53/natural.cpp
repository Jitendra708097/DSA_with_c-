#include<iostream>
#include<fstream>
using namespace std;

void Natural(int number,int stop)
{
       if(number>=stop)
       {
          cout<<number<<" ";
          return ;
       }
       cout<<number<<" ";
       Natural(number+1,stop);
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    Natural(1,n);
}