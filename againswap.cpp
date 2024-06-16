#include<iostream>
using namespace std;
void swap(int x, int y)
{
 int temp;
 temp=x;
 x=y;
 y=temp;
}
int main()
{  
 int x=25, y=50;  
 swap(x, y);   // passing value to function
 cout<<"The Value of x: "<<x;
 cout<<"The Value of y: "<<y;
 return 0;
}  