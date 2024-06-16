#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"enter the two number:";
    cin>>n1>>n2;
    char calculator;
    cout<<"enter the operator:";
    cin>>calculator;
    switch (calculator)
    {
    case '+':
        cout<<n1+n2;
        break;
    case '-':
    cout<<n1-n2;
    break;
    case '*':
    cout<<n1*n2;
    break;
    case '%':
    cout<<"n1%n2";
    break;
    case '/':
    cout<<n1/n2;
    break;
    default:
    cout<<"enter correct operator";
        break;
    }
    return 0;
}