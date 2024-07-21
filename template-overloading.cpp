#include<iostream>
using namespace std;
template<class T>
class my_class{
    public:
        T data;
        my_class(T value){
            data = value;
        }
        void display();
};
template<class T>
void my_class<T>::display(){
    cout << "Data value is -> " << data << endl;
}

void fun(int num){
    cout << "The without template function is being called -> " << num << endl;
}

template <class T>
void fun(T num){
    cout << "The with template function is being called -> " << num << endl;
}

int main(){
    my_class <int>obj(54);
    obj.display();

    fun(5);
    return 0;
}