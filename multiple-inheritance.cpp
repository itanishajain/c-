#include <iostream>
using namespace std;
class base1
{
protected:
    int num1;

public:
    void get_data1(int n)
    {
        num1 = n;
    }
};
class base2
{
protected:
    int num2;

public:
    void get_data2(int m)
    {
        num2 = m;
    }
};
class derived : public base1, public base2
{
public:
    void get_data3()
    {
        cout << "Value of num1: " << num1 << endl;
        cout << "Value of num2: " << num2 << endl;
        cout << "Sum of num1 and num2 is: " << num1 + num2 << endl;
    }
};
int main()
{
    derived d;
    d.get_data1(5);
    d.get_data2(34);
    d.get_data3();
    return 0;
}