#include <iostream>
using namespace std;
//------- Friend function ---------
// class employee
// {
//     int salary;

// public:
//     void getsalary(int sal)
//     {
//         salary = sal;
//     }
//     void display()
//     {
//         cout << "Salary is: " << salary << endl;
//     }
//     friend void increment(employee &e3);
// };
// void increment(employee &e3){
//     e3.salary = e3.salary + 101;
// }

// int main()
// {
//     employee e1, e2, e3;
//     e1.getsalary(16000);
//     e2.getsalary(21000);
//     increment(e1);
//     increment(e2);
//     cout << "The incremented salary " << endl;
//     e1.display();
//     e2.display();
//     return 0;
// }

//--------- friend class --------
// class employee
// {
//     int salary;
// public:
//     void getsalary(int sal)
//     {
//         salary = sal;
//     }
//     // declaring entire class to became friend
//     friend class show;
//     // individually declaring function of another class friend
//     // friend int show :: display(employee &d);
// };

// class show{
//     public:
//     void display(employee &d){
//         cout << "The salary is: " << d.salary << endl;
//     }
// };
// int main(){
//     employee e;
//     e.getsalary(11200);
//     show s;
//     s.display(e);
// }

//-----------------------------------
//--------------Example -----------------

class A
{
    int data;

public:
    void show(int value)
    {
        data = value;
        cout << "Value of data is: " << data << endl;
    }
    friend class C;
};
class B
{
    int num;

public:
    void display(int value)
    {
        num = value;
        cout << "Value of num is: " << num << endl;
    }
    friend class C;
};

class C
{
public:
    void set(A a, B b)
    {
        cout << "Sum of data and num is: " << a.data + b.num << endl;
    }
};
int main()
{
    A a;
    a.show(23);
    B b;
    b.display(37);
    C c;
    c.set(a, b);
    return 0;
}