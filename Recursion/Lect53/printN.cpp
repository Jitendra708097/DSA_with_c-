// print 1 to n tk number
#include<iostream>
using namespace std;
void print1toN(int n)
{
    if(n==1)
    {
        cout<<"1"<<" ";
        return;
    }
    //coutm<<n<<" ";  //n to 1
    print1toN(n-1);
    cout<<n<<" ";  // 1 to n
}
int main()
{
    int n;
    cout<<"enter n : ";
    cin>>n;
    print1toN(n);
    cout<<endl;
    cout<<'1'-0;
}