#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter the age :";
    cin>>age;
    if(age>=30)
    {
        cout<<"the age is good:"<<age<<endl;
    }
    else if(age>=10)
    {
        cout<<"the age is very good:"<<age<<endl;
    }
    else if(age>=5)
    {
        cout<<"the age is  bad:"<<age<<endl;
    }
    else{
        cout<<"the age is very bad:"<<age<<endl;
    }
    return 0;
}