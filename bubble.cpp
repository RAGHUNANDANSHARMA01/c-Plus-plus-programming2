#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the number:";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
int counter=1;
while(counter<n)
{
    for(i=0;i<n-counter;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }

counter++;
} 
for(i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}
