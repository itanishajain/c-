#include<iostream>
using namespace std;
// with recursion....
// int fact(int f);
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin >> n;
//     cout << "the factorial is: " << fact(n) << endl;
//     return 0;
// }
// int fact(int f){
//     if( f == 1){
//         return 1;
//     }
//     int f1 = fact(f-1);
//     int factorial = f * f1;
//     return factorial;
// }

//without recursion...........
int main(){
    int f = 1, n;
    cout << "Enter number: ";
    cin >> n;
    for( int i =1; i<=n; i++){
        f = f * i;
    }
    cout<< "the factorial is: " << f << endl;
}