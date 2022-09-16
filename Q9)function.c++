//9. Write functions using function overloading to find a maximum of two numbers and
//both the numbers can be integer or real.
#include<iostream>
using namespace std;
void Tofind_max(int a,int b)
{
    if(a>b)
    cout<<"max numbers is "<<a<<endl;
    else
    if(a==b)
    cout<<"both numbers are equal";
    else
    cout<<"max number is "<<b<<endl;
}
void Tofind_max(double a,double b)
{
    if(a>b)
    cout<<"max numbers is "<<a;
    else
    if(a==b)
    cout<<"both numbers are equal";
    else
    cout<<"max number is "<<b;
}
int main()
{
    
    Tofind_max(15,5);
    Tofind_max(8.9,24.7);
    return 0;
}