#include<iostream>
using namespace std;

class mobile{
private:
    string brand;
    string ver;
    float price;
    float discount;
    float finalprice;
public:
    void init();
    void show();
    void disprice(); // declaration only

};
void mobile::init()
{
    cout<<"brand ver  price discount"<<endl;
    cin>>brand;
    cin>>ver;
    cin>>price;
    cin>>discount;
}

void mobile::show()// function body outside the class using scope resolution operator
    {
    cout<<"using member function, outside the class"<<endl;
    cout<<brand<<endl;
    cout<<ver<<endl;
    cout<<price<<endl;
    cout<<discount<<endl;
    cout<<finalprice<<endl;
    }
void mobile::disprice()
{
    finalprice=price-(price*(discount/100));
}
int main()
{
    cout<<"mobile class"<<endl;
    mobile m1;

    m1.init();
    m1.disprice();
    m1.show();


return 0;
}

