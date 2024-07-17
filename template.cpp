#include<iostream>
using namespace std;
template <class T>
class MyVec{
    public:
    T *arr;
    int size;
    MyVec(T m){
        size = m;
        arr = new T[size];
    }
    T sum(MyVec &v){
        T d =0;
        for (int i = 0; i < size; i++)
        {
            d += arr[i] * v.arr[i];
        }
        return d;
    }
};
int main(){
    MyVec <float>obj1(3);
    obj1.arr[0] = 2;
    obj1.arr[1] = 4;
    obj1.arr[2] = 5;

    MyVec <float>obj2(3);
    obj2.arr[0] = 5.4;
    obj2.arr[1] = 1.6;
    obj2.arr[2] = 2.2;

    float result = obj1.sum(obj2);
    cout << result << endl;
    return 0;
}