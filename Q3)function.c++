//3. Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;
int To_cal_power(int num,int pow)
{
   int i,p=1;
   for(i=1;i<=pow;i++)
   {
      p=p*num;
   }
    return p;
}
int main()
{
    int x;
    cout<<"Enter a number\n";
    cin>>x;
    int y;
    cout<<"Enter the power\n";
    cin>>y;
    cout<<"The result is "<<To_cal_power(x,y);
    return 0;
}