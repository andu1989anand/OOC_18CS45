#include<iostream>
using namespace std;
int &large(int &m , int &n)
{
    if(m>n) return m;
    else return n;
}


int main()
{
    cout<<"reference variable"<<endl;

    int p=120,q=38;
    int &x=p;

    cout<<endl<<p<<endl<<q<<endl<<x;
    x++;
    cout<<endl<<p<<endl<<q<<endl<<x;
    cout<<endl<<&p<<endl<<&q<<endl<<&x<<endl;

    cout<<"larger:"<<endl;
    int &y=large(p,q);
    p++;q++;
    cout<<y;

return 0;
}

