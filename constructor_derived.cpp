#include<iostream>
using namespace std;
class base1{
    int d1;
    public:
    base1(int n1){
        d1 = n1;
        cout<< "base1 constructor called." << endl;
    }
    void print_base1(){
        cout << "The number is: " << d1 << endl;
    }
};
class base2{
    int d2;
    public:
    base2(int n2){
        d2 = n2;
        cout<< "base2 constructor called." << endl;
    }
    void print_base2(){
        cout << "The number is: " << d2 << endl;
    }
};
class derived: public base1, public base2{
    int d3;
    public:
    derived(int n3, int a, int b): base1(a), base2(b){
        d3 = n3;
        cout<< "derived constructor called." << endl;
    }
    void print_derived(){
        print_base1();
        print_base2();
        cout << "The number is: " << d3 << endl;
    }

};
int main(){
    derived d(1,2,3);
    d.print_derived();
    return 0;
}