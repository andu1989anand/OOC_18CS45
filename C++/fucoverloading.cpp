#include<iostream>
using namespace std;
int add(int x, int y)
{
    return (x+y);
}
int add(int x, int y,int z)
{
    return (x+y+z);
}


int main()
{
    cout<<"function overloading"<<endl;

    int p=120,q=38,r=45;


    cout<<endl<<p<<endl<<q<<endl<<r<<endl;

    cout<<"sum="<<add(p,q)<<endl;
    cout<<"sum="<<add(p,q,r)<<endl;



return 0;
}

