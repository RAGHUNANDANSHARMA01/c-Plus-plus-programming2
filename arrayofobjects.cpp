#include<iostream>
class rec
{
    private:
    int a;
    int b;
    public:
    rec(int a,int c)
    {
        a=b;
        b=a;
    }
    void put()
    {
        cout<<a*b;
    }
};
int main()
{
    rec obj[3]={rec(3,6),rec(2,5),rec(3,3)};
    for(int i=0;i<3;i++)
    obj[i].put();
}