//4. Define a function to print Pascal Triangle up to N lines.
#include<iostream>
using namespace std;
  int comb(int n,int r)
  {
     return fact(n)/(fact(r)*fact(n-r));
  }

  int fact(int n)
  {
     int i,f=1;
     for(i=1;i<=n;i++)
     {
      f=f*i;
     }
       return f;
  }
  void pascaltriangle(int n)
  {
     int i,j,k,r;
     for(i=1;i<=n;i++)
     {
        k=1;
        r=0;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i && j<=n-1+i &&k)
             {
              cout<<" "<<comb(i-1,r);
              k=0;
              r++;
             }
             else
             {
              cout<<"  ";
              k=1;
             }
        } 
             cout<<endl;             
             
      }
        
    } 

 int main()
{
    int num;
    cout<<"Enter any number"<<endl;
    cin>>num;
    pascaltriangle(num);
    return 0;
}