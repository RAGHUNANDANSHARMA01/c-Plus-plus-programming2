#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the number:";
    cin>>n;
    int arry[n];
    for(i=0;i<n;i++)
    {
        cin>>arry[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arry[i]<<" ";
    }
    return 0;
    }