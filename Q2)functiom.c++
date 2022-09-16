//2. Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
 void print_highest_dig(int num)
 {
  
   int res=0,rem;
   
    while(num!=0)
    {
      rem=num%10;
      if(res<rem)
      {
        res=rem;
      }
      num/=10;
    }
    cout<<"the largets digit in given number is "<<res;   
 }
int main()
{   
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    print_highest_dig(n);
    return 0;
}