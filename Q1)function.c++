//1. Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;
int check_prime(int num)
{
    int i,count=0;
    for(i=2;i<num/2;i++)
    {  
        if(num%i==0)
        {
            count=1;
        }
        
       
    }
    if(count==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
     
}
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int res=check_prime(n);
   if(res==1)
   {
      cout<<"given number is  prime number";
   }
   else
   {
      cout<<"given number is not a prime number";  
   }

    return 0;
}