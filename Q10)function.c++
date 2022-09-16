//10. Write functions using function overloading to add two numbers having different data
//types.
#include<iostream>
using namespace std;
void add(int x,int y)
{
    int sum=x+y;
    cout<<"sum of two number is "<<sum<<endl;
}
void add(double x,double y)
{
    double sum=x+y;
    cout<<"sum of two number is "<<sum<<endl;
}

int main()
{
    add(20,30);
    add(40.14,60.16);
    return 0;
}