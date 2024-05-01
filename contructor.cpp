#include <iostream>
using namespace std;
// class print{
//     int a, b;
//     public:
//     print(int x, int y){// This is a parameterized contructor
//         a = x;
//         b = y;
//     }
//     // constructor overloading......
//     print(int x){
//         a = x;
//         b = 0;
//     }
//     void display(){
//         cout<< "Sum of a & b is: " << a+b << endl;
//     }
// };
// int main(){
//     // implicit call
//     print p(1,5);
//     p.display();

//     // explicit call
//     print b = print(5,7);
//     b.display();

//     print c(4);
//     c.display();
//     return 0;
// }

//---------- CONSTRUCTORS WITH DEFAULT ARGUMENTS ------------
class arguments
{
    int a, b;

public:
    arguments(int x, int y = 2)
    {
        a = x;
        b = y;
    }
    void print()
    {
        cout << "Values are ->  " << a << " and " << b << endl;
    }
};
int main()
{
    arguments obj(2, 6);
    obj.print();

    arguments a(7);
    a.print();

    return 0;
}