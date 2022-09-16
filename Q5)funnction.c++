//5. Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
using namespace std;
void is_fib(int n)
{
    int i,next=0,cur=1,prev=0;
    for(i=0;1;i++)
    {
      next=prev+cur;
      prev=cur;
      cur=next;
      
       if(next==n)
      {
        cout<<"given number is fibonacci number";
        break;
      }
      if(next>n)
      {
         cout<<"given number is not fibonacci number";
         break;
      }
    }
}
int main()
{
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    is_fib(num);
    return 0;
}