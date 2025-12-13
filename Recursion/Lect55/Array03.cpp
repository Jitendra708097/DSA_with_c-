// print reverse array using recrusion with passed only two arguments

#include<iostream>
using namespace std;

void print(int arr[],int index)
{
     if(index == -1)
     {
        return ;
     }
     cout<<arr[index]<<" ";
     print(arr,index-1);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    print(arr,9);
}