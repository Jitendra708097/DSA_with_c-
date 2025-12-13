// to find maximum element from array
#include<iostream>
using namespace std;

int max(int arr[],int index,int size,int &ans)
{

    if(index == size)
    return 0;

    ans = max(ans,arr[index]);
    max(arr,index+1,size,ans);
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the size array : ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter element of array : ";
        cin>>arr[i];
    }

    int ans=0;
    max(arr,0,n,ans);
    cout<<"the max element of array : "<<ans;
}