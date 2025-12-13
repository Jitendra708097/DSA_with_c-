// print array reverse using recrusion with three argument
#include<iostream>
using namespace std;

void reverse(int arr[],int index,int n)
{
    cout<<"call array"<<index<<endl;
    if(index == n)
    {
        return;
    }

    reverse(arr,index+1,n);
    cout<<arr[index]<<" ";
}

int main()
{
    int arr[] = {11,12,13,14,15,16,17,18,19,20};
    reverse(arr,0,10);
}