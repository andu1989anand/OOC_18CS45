#include<iostream>
using namespace std;
int add(int x, int y)
{
    return (x+y);
}
float add(float x, float y)
{
    return (x+y);
}


int main()
{
    cout<<"function overloading"<<endl;

    int p=120,q=23;
    float s=38.99,r=45.467;


    cout<<endl<<p<<endl<<q<<endl<<r<<endl<<s<<endl;

    cout<<"sum="<<add(p,q)<<endl;
    cout<<"sum="<<add(s,r)<<endl;



return 0;
}

