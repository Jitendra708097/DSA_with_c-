// to find minimum element from array
#include<iostream>
using namespace std;

int min(int arr[],int index,int &ans)
{

    if(index<0)
    return 0;

    ans = min(ans,arr[index]);
   return min(arr,index-1,ans);
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
    min(arr,n-1,ans);
    cout<<"the min element of array : "<<ans;
}