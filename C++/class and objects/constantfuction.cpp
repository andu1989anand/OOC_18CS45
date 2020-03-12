#include<iostream>
using namespace std;

class A{



public : int a;
        mutable int b;

         A()
    {
    a=999;
    b=767;
    }

void show() const
{
    cout<<"before trying to change"<<endl;
     cout<<a<<endl<<b<<endl;
   // a=10; //ERROR
    //a++; //ERROR
    cout<<"after trying to change"<<endl;
    b++;
    cout<<a<<endl<<b<<endl;
    b=b+20;
    cout<<a<<endl<<b<<endl;
}

};
int main()
{
    cout<<"constant function"<<endl;
A obj1;
obj1.show();

return 0;
}

