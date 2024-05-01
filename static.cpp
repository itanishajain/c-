#include <iostream>
using namespace std;
/*
class employee{
    static int count;
    string ename;
    public:
    void setname(string name){
        ename = name;
        count++;
    }
    void display(){
        cout << "name of employee is: "<< ename <<" and the employee number is: "<< count<< endl;
    }
};

int employee :: count = 0;
int main(){
    employee s1, s2;
    s1.setname("ABC");
    s1.display();
    s2.setname("XYZ");
    s2.display();
    return 0;
}
*/

// static member function or method
class employee
{
    static int count;
    string ename;

public:
    void setname(string name)
    {
        ename = name;
        count++;
        cout << "Name of employee is: " << ename << " and the employee number is: " << count << endl;
    }
    static void countNo()
    {
        cout << "Value of static data member: " << count << endl;
    }
};

int employee ::count = 0;
int main()
{
    employee s1, s2;
    s1.setname("ABC");
    // s1.countNo();
    employee ::countNo();
    s2.setname("XYZ");
    s2.countNo();
    return 0;
}