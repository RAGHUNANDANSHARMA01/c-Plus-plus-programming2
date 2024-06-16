#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=23;
    int b=54;
    swap(a,b);
    cout<<"value of a:"<<a<<endl;
    cout<<"value of b:"<<b<<endl;
    return 0;
}
