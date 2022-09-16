//7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int add(int a,int b,int c=0)
{
   return(a+b+c);
}
int main()
{   
   cout<<"sum of a and b is "<<add(5,6)<<endl;
   cout<<"sum of a,b and c is "<<add(10,20,30)<<endl;

    return 0;
}