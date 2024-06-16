#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int x=23;
    int y=43;
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}