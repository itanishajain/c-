#include<iostream>
using namespace std;

int sum(int a, int b){
    int s = a + b;
    return s;
}
int sum(int a, int b, int c){
    int d = a + b + c;
    return d;
}

int main(){
    cout << "Sum of 3 & 6 is: "<< sum(4,8)<<endl;
    cout << "Sum of 3,2 & 6 is: "<< sum(3,6,2)<<endl;
    return 0;
}