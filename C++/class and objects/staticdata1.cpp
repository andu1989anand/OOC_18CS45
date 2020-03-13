#include "iostream"
using namespace std;

class Account{
 private:float Tbalance;
 static float Irate;
public :
    void init(int Deposite)
    {
    Tbalance=1000;
    Tbalance=Tbalance+Deposite;
    }

void showA()
{
    cout<<"available balance"<<Tbalance<<endl;
    cout<<"----------------------------\n";
    cout<<"rate of Interest:"<<Irate<<endl;
    float Iearn=Tbalance*(Irate/100);
    cout<<"interest earned:"<<Iearn<<endl;
    cout<<"total balance:"<<Tbalance+Iearn<<endl;
    cout<<"----------------------------\n";
}
};
float Account::Irate=4;

int main()
{

Account obj1;
cout<<"Account 1"<<endl;
obj1.init(1000);
obj1.showA();

Account obj2;
cout<<"Account 2"<<endl;
obj2.init(10200);
obj2.showA();

Account obj3;
cout<<"Account 3"<<endl;
obj3.init(12500);
obj3.showA();
return 0;
}
