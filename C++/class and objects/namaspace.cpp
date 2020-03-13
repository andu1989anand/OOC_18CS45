#include "iostream"
using namespace std;


namespace A1
{

    class A{
    int x;
public:
    void show()
    {
        x=10;
        cout<<x<<endl;
    }
    };
}
namespace B1{
    class B{
    int x;
public:
    void show()
    {
        x=220;
        cout<<x<<endl;
    }
    };
}

int main()
{
    A1::A aobj;
    aobj.show();
using namespace B1;
    B bobj;
    bobj.show();

    return 0;
}
