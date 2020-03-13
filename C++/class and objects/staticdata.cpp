#include "iostream"
using namespace std;

class A{
 private:int a, b;
 static int mystatic;
public :
    init(int x, int y)
    {
    a=x;
    b=y;
    }

void showA()
{
    cout<<a<<endl<<b<<endl<<mystatic<<endl;
    a++;b++;mystatic++;
    cout<<a<<endl<<b<<endl<<mystatic<<endl;
}
};
int A::mystatic=999;

int main()
{

A obj1;
cout<<"object 1 values"<<endl;
obj1.init(10,20);
obj1.showA();

A obj2;
cout<<"object 2 values"<<endl;
obj2.init(100,200);
obj2.showA();

A obj3;
cout<<"object 3 values"<<endl;
obj3.init(1,2);
obj3.showA();
return 0;
}


