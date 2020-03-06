#include<iostream>
using namespace std;
int main()
{
    cout<<"reference variable"<<endl;

    int p=20;
    int &x=p;
    cout<<endl<<p<<endl<<x;
    x++;
    cout<<endl<<p<<endl<<x;

return 0;
}

