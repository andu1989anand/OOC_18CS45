#include<iostream>
using namespace std;

class mit{
public:
    int roomno;
    int floor;
    string semsec;
    int nobench;
};

int main()
{
    cout<<"simple class"<<endl;

    mit m1;
    m1.roomno=401;
    m1.floor=4;
    m1.semsec="4C";
    m1.nobench=20;


    cout<<m1.roomno<<endl;
    cout<<m1.floor<<endl;
    cout<<m1.semsec<<endl;
    cout<<m1.nobench<<endl;




return 0;
}

