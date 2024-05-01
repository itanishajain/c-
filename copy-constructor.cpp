#include <iostream>
using namespace std;
class number
{
    int num;

public:
    number(int x)
    {
        num = x;
    }
    number(number &obj)
    {
        cout << "Copy Constructr called." << endl;
        num = obj.num;
    }
    void show()
    {
        cout << "The number is: " << num << endl;
    }
};
int main()
{
    number a(7), b(9);
    a.show();
    b.show();
    number a1 = b;
    a1.show();
    return 0;
}