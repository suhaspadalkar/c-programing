/* calculate total percentage of three suject*/


#include <iostream>
using namespace std;
int main()
{
    int rno,m1,m2,m3,m4,m5,total;
    float per;
    
    cout<<"enter the marks of five subject=";
    cin>>m1>>m2>>m3>>m4>>m5;
    total=m1+m2+m3;
    per=(m1+m2+m3+m4+m5)/5;
    cout<<"total ="<<total<<endl<<"percentage="<<per;
    return 0;




}