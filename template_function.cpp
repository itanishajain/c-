#include<iostream>
using namespace std;
template <class T1, class T2>
T2 my_fuction(T1 a, T2 b){
    T2 c = (a+b) / 2;
    return c;
}
int main(){
    int num1;
    float num2;
    cout << "Enter the first number : " ;
    cin  >> num1;
    cout << "Enter the second number : " ;
    cin  >> num2;
    float avg = my_fuction(num1, num2);
    cout << "The average of num1 and num2 is : " << avg << endl;
    return 0;
}