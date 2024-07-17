#include<iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class newclass{
    public:
        T1 data1;
        T2 data2;
        T3 data3;
        newclass(T1 a, T2 b, T3 c){
            data1 = a;
            data2 = b;
            data3 = c;
        }
        void display(){
            cout << "Data1 is -> " << data1 << endl;
            cout << "Data2 is -> " << data2 << endl;
            cout << "Data3 is -> " << data3 << endl;
        }
};
int main(){
    newclass <> obj(32, 5.9, 'd');
    obj.display();

    newclass <float, int, int> obj1(7.9, 34, 55);
    obj1.display();
    return 0;
}