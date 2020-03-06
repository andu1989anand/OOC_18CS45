#include<iostream>
using namespace std;
int main()
{
    cout<<"reference variable"<<endl;

    int p=20;
    int &x=p;
    int y=p;
    cout<<endl<<p<<endl<<x<<endl<<y;
    x++;
    cout<<endl<<p<<endl<<x<<endl<<y;
    cout<<endl<<&p<<endl<<&x<<endl<<&y;

return 0;
}

