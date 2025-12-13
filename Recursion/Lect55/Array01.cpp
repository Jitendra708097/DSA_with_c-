// Print array using recrusion with three arguments
#include<iostream>
using namespace std;

void print(int arr[],int index,int n)
{
    if(index == n)
    {
        return ;
    }

    cout<<arr[index]<<" ";
    print(arr,index+1,n);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    print(arr,0,10);
}