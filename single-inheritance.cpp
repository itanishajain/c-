#include <iostream>
using namespace std;
class base
{
    int data;

public:
    base()
    {
        data = 10;
    }
    void show()
    {
        cout << "Base class function." << endl;
    }
    int getdata()
    {
        return data;
    }
};
class derived : public base
{
    int num1;

public:
    derived(int a)
    {
        num1 = a;
    }
    void display()
    {
        cout << "Derived class function. " << endl;
        cout << "The value of data is: " << getdata() << endl;
        cout << "The value of num is: " << num1 << endl;
    }
};
int main()
{
    derived d(8);
    d.show();
    d.display();
    return 0;
}