#include<iostream>
using namespace std;
int main()
{
int a,b;
char calculator;
cout<<"enter the two number:"<<endl;
cin>>a>>b;
cout<<"enter the operator:";
cin>>calculator;
switch (calculator)
{
case '+':
cout<<a+b;
    break;
case '-':
cout<<a-b;
    break;
case '*':
cout<<a*b;
    break;
case '/':
cout<<a/b;
    break;
case '%':
cout<<a%b;
    break;
default:
cout<<"Invalid operator are you selected";
    break;
}
return 0;
}