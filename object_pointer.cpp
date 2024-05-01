#include<iostream>
using namespace std;
class complex{
    int real, img;
    public:
    complex(int a, int b){
        real = a;
        img = b;
    }
    void get_data(){
        cout << "The real no is: " << real << endl;
        cout << "The imaginary no is: " << img << endl;
    }
};
int main(){
    complex *ptr = new complex(3,6);
    ptr->get_data(); // is same as given below
    //(*ptr).get_data();
    return 0;
}