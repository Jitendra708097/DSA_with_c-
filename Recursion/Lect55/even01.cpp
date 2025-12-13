#include<iostream>
using namespace std;

void even(int *arr,int index)
{
    if(index == -1)
    {
        return ;
    }
    else
    {
        even(arr,index+1);
        if(arr[index]%2 == 0)
        {
            cout<<"This is a even number : "<<arr[index]<<endl;
        }
    }
}
int main()
{
    int arr[] = {1,22,3,3,4,55,356,6,74,6875,6,34,524,324,5};
    even(arr,sizeof(arr)/sizeof(arr[0]));
}