#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the value of a and b for swapping   ";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a="<<a<<endl<<"b= "<<b;
}