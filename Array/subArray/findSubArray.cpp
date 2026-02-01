// Find longest subArray whose elements sum is equals to K
// array contains integers i.e. Negative and positive type values.
#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int arr[] = {10,5,2,7,1,-10};
    int k = 15;

    // 2 8 11 15 10 12 13 8 1 -7 

    int start = 0,end = 0;
    unordered_map<int,int>mp;
    int prefixSum = 0;
    mp[0] = -1;
    int max_size = 0;

    for(int i=0;i<6;i++)
    {
        prefixSum+=arr[i];
        
        if(mp.count(prefixSum-k) == 1)
        {
            start = mp[prefixSum-k];
            end = i;
            max_size = max(max_size,i-mp[prefixSum-k]);
            mp[prefixSum] = i;
        }
        else
        {
            mp[prefixSum] = i;
        }
    }

    // print subArray whose some is equals to k.
    cout<<"Longest SubArray whose sum is equals to k: ";
    while (start<end)
    {
        cout<<arr[start+1]<<" ";
        start++;
    }
    

    cout<<endl<<"Longest subArray whose length: "<<max_size;
}    