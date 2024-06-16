#include<iostream>
using namespace std;
void swap(int a,int b);
int main()
{
    int a=43,b=21;
    int temp;
    temp=a;
    a=b;
    b=temp;
    swap(a,b);
    cout<<"after swapping value a is:"<<a<<endl;
    cout<<"after swapping value b is:"<<b<<endl;
    return 0;
}
