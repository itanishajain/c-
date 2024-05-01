#include<iostream>
using namespace std;
class Test{
    int a, b;
    public:
    Test(int i, int j): a(i), b(j){
        cout<<"Constructor Called." << endl;
        cout << "Value of a is " << a << " and b is " << b<< endl;
    }
};
int main(){
    Test t(4,6);
    return 0;
}