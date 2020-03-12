#include<iostream>
using namespace std;

class mit{
public:
    int roomno;
    int floor;
    string semsec;
    int nobench;

friend void show(mit); // declaration only

};
void show(mit m)// friend function
    {
    cout<<"using friend function"<<endl;
    cout<<m.roomno<<endl;
    cout<<m.floor<<endl;
    cout<<m.semsec<<endl;
    cout<<m.nobench<<endl;
    }
int main()
{
    cout<<"simple class"<<endl;

    mit m1;
    m1.roomno=401;
    m1.floor=4;
    m1.semsec="4C";
    m1.nobench=20;



    show(m1);


return 0;
}

