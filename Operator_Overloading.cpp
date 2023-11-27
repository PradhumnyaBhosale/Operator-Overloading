include<iostream>
#include<stdio.h>
using namespace std;
class complex
{
    public:
    float a,b;

    void Setdata(float x,float y)
    {
        a=x;
        b=y;
    }
    void Showdata()
    {
        if(b>0)
        cout<<" "<<a<<" + "<<b<<" i ";
        else
        cout<<" "<<a<<" -"<<-b<<" i ";
    }
  complex operator +(complex c)
  {
    complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
  }
  complex operator -()
  {
    a=-a;
    b=-b;

  }
 complex operator *(complex c)
 {
    complex temp;
    temp.a=a/c.a;
    temp.b=b/c.b;
    return temp;
 }
 complex operator <<(complex c)
 {
     complex temp;
     temp.a=a*c.a;
     temp.b=b*c.b;
     return temp;
 }

};

int main()
{
    complex c1,c2,c3,c4,c5;

    c1.Setdata(8,8);
    c2.Setdata(4,4);
    c3=c1+c2;
    c4=c1*c2;
    -c1;
    c5=c1<<c2;
    c3.Showdata();
    c4.Showdata();
    c1.Showdata();
    c5.Showdata();
    return 0;
}


