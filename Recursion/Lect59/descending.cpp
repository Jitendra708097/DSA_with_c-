#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int start,int mid,int end)
{
    vector<int>temp(end-start+1);
    int left  = start,right = mid+1,index=0;
    while (left<=mid && right<=end)
    {
        if(arr[left]>=arr[right])
        {
            temp[index] = arr[left];
            left++,index++;
        }
        else
        {
            temp[index] = arr[right];
            index++,right++;
        }
    }

    while (right<=end)
    {
        temp[index] = arr[right];
        right++,index++;
    }

    while (left<=mid)
    {
        temp[index] = arr[left];
        index++,left++;
    }

     index = 0;
    while (start<=end)
    {
        arr[start] = temp[index];
        start++,index++;
    }
    
    
    
    

}

void MergeSort(int arr[],int start,int end)
{
    if(start == end)
    return ;

    int mid = (start+end)/2;
    MergeSort(arr,start,mid);
    MergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
int main()
{
    // int arr[] = {9,3,2,4,6,2,10,8,3,1,6};
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};

    cout<<"Print array before sorted"<<endl;
    for(int i=0;i<11;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    MergeSort(arr,0,10);

    cout<<"Print array after sorted"<<endl;
    for(int i=0;i<11;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}