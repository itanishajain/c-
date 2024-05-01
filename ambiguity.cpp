#include<iostream>
using namespace std;
// Ambiguity 1

// class base1{
//     public:
//     void greet(){
//         cout<< "Hello!!!"<< endl;
//     }
// };
// class base2{
//     public:
//     void greet(){
//         cout<< "Namaste!!!"<< endl;
//     }
// };
// class base3 : public base1, public base2{
//     public:
//     void greet(){
//         base2::greet();
//     }
// };
// int main(){
//     base3 obj;
//     obj.greet();
//     return 0;
// }


// Ambiguity 2

class a{
    public:
    void say(){
        cout << "speak" << endl;
    }
};
class b: public a{
    public:
    void say(){
        cout << "spoken" << endl;
    }
};
int main(){
    a ob;
    ob.say();
    b obj;
    obj.say();
    return 0;
}