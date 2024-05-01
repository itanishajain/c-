#include<iostream>
using namespace std;
class base{
    public:
    int var1;
    void display(){
        cout << "Base class varisble called ->" << var1 << endl;
    }
};
class derived: public base{
    public:
    int var2;
    void display(){
        cout << "Derived class varisble called ->" << var2 << endl;;
    }
};
int main(){
    base *ptr;
    derived obj1;
    ptr = &obj1;
    ptr->var1 = 120;
    ptr->display();  // It will give output of base class as pointer is made of base class.

    derived *dptr;
    dptr = &obj1;
    dptr->var2 = 150;
    dptr->display(); // It will give output of derived class as pointer is made of derived class.
    return 0;
}