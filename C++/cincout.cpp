#include<iostream>
using namespace std;
int main()
{
    char a[100];
    string name;
    cout<<"enter your name:";
//    cin>>name;
    cout<<"Hi "<<name<<", Greetings of the day";

    int p=20;
    int &x=p;
    cout<<endl<<p<<endl<<x;
    x++;
    cout<<endl<<p<<endl<<x;

return 0;
}

