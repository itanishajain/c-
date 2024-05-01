#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;
    cout << "Value of pointer ptr: " << *ptr << endl;
    float *p = new float(4.66);
    cout << "Value of pointer p: " << *p << endl;
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    cout << "Value of arr[0] is: " << arr[0] << endl;
    cout << "Value of arr[1] is: " << arr[1] << endl;
    delete[] arr;
    return 0;
}