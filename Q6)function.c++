//6. Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;
 int swap_data(int* a,int* b)
 {
    int temp=*a;
        *a=*b;
        *b=temp;
     return(*a,*b);
 }
int main()
{
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"before swaping the values"<<endl;
    cout<<"a="<<a<<" b="<<b<<endl;
    swap_data(&a,&b);
    cout<<"after swapping the values"<<endl;
    cout<<"a="<<a<<" b="<<b;
    
    return 0;
}   