#include<iostream>
using namespace std;
int power(int num,int pow)
{
    if(num ==1||pow==0)
    return 1;

    return num*power(num,pow-1);
}
int main()
{
    int num;
    cout<<"enter num : ";
    cin>>num;
    int pow;
    cout<<"enter powwer : ";
    cin>>pow;
   cout<< power(num,pow);
}