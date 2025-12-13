#include<iostream>
using namespace std;
int average(int arr[],int index,int size,int &sum)
{
    if(index == size)
    return 0;
    
    sum+=arr[index];
    average(arr,index+1,size,sum);
    return sum;
}
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n],aveg=0;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element of array : ";
        cin>>arr[i];
    }

    average(arr,0,n,aveg);
    cout<<"The avearge of elements : "<<aveg/n;
}