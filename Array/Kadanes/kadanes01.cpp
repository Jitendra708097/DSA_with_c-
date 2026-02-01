// find maximum between two max element from an array 
// but condition we find another max from their right.

// Brute force O(n^2);
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {3, 4, 5, 8, 12, 7, 6, 2};
//     int maxi = 0;

//     for (int i = 0; i < 8-1; i++)
//     {
//         for (int j = i+1; j < 8; j++)
//         {
//             if(arr[j]>arr[i])
//             {
//                 maxi = max(maxi,arr[j]-arr[i]);
//             }
//         }
//     }

//     cout << "Maximum sum of a subarray: " << maxi;
// }

// In O(n) using find suffix max.
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[] = {3, 4, 5, 8, 12, 7, 6, 2};
    int maxi = 0;
    vector<int>suffix(8);
    for (int i = 7; i >= 0; i--)
    {
       maxi = max(maxi,arr[i]);
       suffix[i] = maxi;
    }

    maxi = 0;
    // find maximum difference between two numbers from this array using max suffix 
    for(int i=0;i<7;i++)
    {
       maxi = max(maxi,abs(suffix[i+1]-arr[i]));
    }

    cout << "Maximum sum of a subarray: " << maxi;
}