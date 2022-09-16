//8. Define overloaded functions to calculate area of circle, area of rectangle and area of
//triangle
#include<iostream>
using namespace std;
void Area_of_rect(float l,float b)
{
     float area=l*b;
    cout<<"Area of rectangle is "<<area<<endl;
}
void Area_of_tri(float b,float h)
{
    float area=b*h/2;
    cout<<"Area of triangle is "<<area<<endl;;
}
void Area_of_circle(float r,float pi)
{
    float area=pi*r*r;
    cout<<"Area of circle is "<<area<<endl;;
}

int main()
{
    float l,b,h;
    float pi=3.14,rad;
    cout<<"Enter length,breadth and height"<<endl;
    cin>>l>>b>>h;
    cout<<"Enter radius"<<endl;
    cin>>rad;
    Area_of_circle(rad,3.14);
    Area_of_rect(l,b);
    Area_of_tri(b,h);
    
    return 0;
}