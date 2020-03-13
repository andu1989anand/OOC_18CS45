#include "iostream"
using namespace std;
class B;
class A{
 private:int a, b;
public :
    init()
    {
    a=10;
    b=50;
    }

void showA()
{
    b=b+20;
    cout<<a<<endl<<b<<endl;
}
friend class B;
};

class B{
 private:
 int x,y;

 public:

void init(A a1)
{
    x=a1.a;
    y=a1.b;
}

void showB()
{
    cout<<x<<endl<<y<<endl;
}


};
int main()
{

A obj1;
obj1.init();
obj1.showA();
B objb;
objb.init(obj1);
objb.showB();

return 0;
}


