#include<iostream>
using namespace std;

/*----------- Call by Value --------------------*/
// int sum(int a, int b);

// int main(){
//     int num1,num2;
//     cout<<"Enter the value of num1 and num2: ";
//     cin >> num1 >> num2;
//     // num1 and num2 are actual parameters or arguments.
//     cout<<"The sum of 2 values is: "<<sum(num1, num2)<<endl;
//     return 0;
// }
// int sum(int a, int b){
//     // a and b are formal parameters or simple parameters.
//     int c = a+b;
//     return c;
// }

/*----------- Call by reference/ Call by pointer -----------*/
// void swap(int *x, int *y);
// int main(){
//     int a, b;
//     cout<< "enter value of a and b: "<< endl;
//     cin >> a >> b;
//     swap(&a, &b);
//     cout << "After swapping a = "<< a << " b = "<< b << endl;
//     return 0;
// }
// void swap(int *x, int *y){
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

/*---------- Call by refernce variable -----------*/

// void swap(int &x, int &y);
// int main(){
//     int a, b;
//     cout<< "enter value of a and b: "<< endl;
//     cin >> a >> b;
//     swap(a, b);
//     cout << "After swapping a = "<< a << " b = "<< b << endl;
//     return 0;
// }
// void swap(int &x, int &y){
//     int temp = x;
//     x = y;
//     y = temp;
// }

/*--------------- inline function -----------------*/
// inline int square(int s){
//     return s * s;
// }
// int main(){
//     int a;
//     cout<<"Enter a number to get square of: ";
//     cin >> a;
//     cout<<"The square is: " << square(a)<< endl;
//     return 0;
// }

/*--------------- Default argument ------------------*/
int sum(int a, int b=0, int c=0){
    return (a+b+c);
}
int main(){
    cout << "Sum is:" << sum(88)<<endl;
    cout << "Sum is:" << sum(8,38)<<endl;
    cout << "Sum is:" << sum(21,17,33)<<endl;
}