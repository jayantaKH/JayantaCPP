#include<iostream>
using namespace std;
int& max(int &x,int &y)
{
    if(x>y)
        return x;
    else
        return y;
}
int main()
{
    int a,b;
    a=12;
    b=20;
    max(a,b)=-2;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
    return 0;
}