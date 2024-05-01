#include<iostream>
using namespace std;
int main(){
    int a = 1;
    int *b = &a;
    cout<<"Address of a is: "<<&a<<endl;
    cout<<"Address of a is: "<<b<<endl;
    //derefrence operator
    cout<<"Value at address of b: "<<*b<<endl;
    //pointer to pointer.
    int ** c = &b;
    cout<<"Address of b: "<<c<<endl;
    cout<<"Value at adrress c: "<<*c<<endl;
    cout<<"Value at address c: "<<**c<<endl;
    return 0;
}