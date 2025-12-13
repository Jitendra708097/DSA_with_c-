#include<iostream>
using namespace std;

void even(int *arr,int index,int n)
{
    if(index == n)
    {
        return ;
    }
    else
    {
        if(arr[index]%2 == 0)
        {
            cout<<"This is a even number : "<<arr[index]<<endl;
        }
    }

    even(arr,index+1,n);
}
int main()
{
    int arr[] = {1,22,3,3,4,55,356,6,74,6875,6,34,524,324,5};
    even(arr,0,sizeof(arr)/sizeof(arr[0]));
}