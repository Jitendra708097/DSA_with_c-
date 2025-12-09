#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double m;
    int n;
    cout<<"Enter the value : ";
    cin>>m;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<fixed<<setprecision(n)<<m;

    // setprecision = iska use krke hm chahe jitne decimal print kra skte hai
    // ex = 4.22222 mene kaha mujhe decimal ke 2 digit tk hi chahiye to ye dega 4.22 

    int x = 57.585;
    if(x == 57.585)
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}