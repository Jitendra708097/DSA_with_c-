#include<iostream>
#include<vector>
using namespace std;

void permutations(vector<vector<int>>&ans, int arr[],vector<int>&temp,vector<bool>visited,int n)
{
    
    
    // Base condition 
    if(temp.size() == n)
    {
        ans.push_back(temp);
        return ;
    }

    
    for(int i=0;i<n;i++)
    {
        if(visited[i] == 0)
        {
            visited[i] = 1;
            cout<<"This is visited array ";
            for(int i=0;i<3;i++)
            cout<<visited[i];
            cout<<endl;


            temp.push_back(arr[i]);
            cout<<"This is beforetemp array ";
            for(int i=0;i<temp.size();i++)
            cout<<temp[i];
            cout<<endl;
            permutations(ans,arr,temp,visited,n);
            visited[i] = 0;
            cout<<"This is unvisited array ";
            for(int i=0;i<3;i++)
            cout<<visited[i];
            cout<<endl;


            temp.pop_back();
            cout<<"This is temp array ";
            for(int i=0;i<temp.size();i++)
            cout<<temp[i];
            cout<<endl;
        }
    }

}

int main()
{
    int arr[] = {1,2,3};
    vector<vector<int> >ans;
    vector<int>temp;
    vector<bool>visited(3,0);
    permutations(ans,arr,temp,visited,3);


    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<ans[i][j]<<" ";
        }

        cout<<endl;
    }
}