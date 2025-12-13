#include<iostream>
#include<vector>
using namespace std;

void permutations(vector<vector<int>>&ans, int arr[],int index,int n)
{
    
    
    // Base condition 
    if(index == n)
    {
        ans.push_back(vector<int>(arr,arr+n));
        return ;
    }

    
    for(int i=index;i<n;i++)
    {
        swap(arr[i],arr[index]);
        permutations(ans,arr,index+1,n);
        swap(arr[i],arr[index]);
    }

}

int main()
{
    int arr[] = {1,2,3};
    vector<vector<int> >ans;
    permutations(ans,arr,0,3);


    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }

        cout<<endl;
    }
}