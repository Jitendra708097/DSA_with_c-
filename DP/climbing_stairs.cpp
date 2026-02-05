#include<iostream>
#include<vector>
using namespace std;

// Recrusive function to count steps 
// int countSteps(int i,int n)
// {
//     // Base Cases 
//     if(i == n)
//     return 1;

//     else if(i>n)
//     return 0;

//     // General case 
//     int steps = countSteps(i+1,n) + countSteps(i+2,n);
//     return steps;
// }

// Recrusive with DP
int countSteps(int i,int n,vector<int>&dp)
{
     if(i == n)
     return 1;

     else if(i>n)
     return 0;

    //  check if exists value 
    if(dp[i] != -1)
    return dp[i];

    dp[i] = countSteps(i+1,n,dp) + countSteps(i+2,n,dp);
    return dp[i];
}

int main()
{
    int n;
    cout<<"Enter the last stairs number: ";
    cin>>n;
    // vector<int>dp(n+1,-1);

    // int i=0;
    // int count = countSteps(i,n,dp);

    // Bottom up approach (tabulation)
    int first = 1;
    int second = 1;
    int steps;
    for(int i=2;i<=n;i++)
    {
        steps = first + second;
        first = second;
        second = steps;
    }

    cout<<"Total steps to reach on last stair: "<<steps;
}