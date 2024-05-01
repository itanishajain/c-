#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void set_data(int a){
        this->a = a;
    }
    void get_data(){
        cout<< "the value of a is: " << a << endl;
    }
};
int main(){
    A obj;
    obj.set_data(555);
    obj.get_data();
    return 0;
}