#include<iostream>
using namespace std;

class base{
public:
    int var1;
    base() : var1(10) {};
    virtual void display() = 0; // --> do nothig function that is it is pure virtual function.
};

class derived: public base{
public:
    int var2;
    derived() : var2(20) {};
    void display(){
        cout << "Derived class variable called ->" << var2 << endl;;
    }
};

int main(){
    base *bptr;
    derived obj2;
    bptr = &obj2;
    bptr->display();
}
