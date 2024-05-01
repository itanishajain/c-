#include<iostream>
using namespace std;
// without recursion............
// int main(){
//     int a = 0, b = 1, c, n;
//     cout<< "Enter the range: ";
//     cin >> n;
//     cout << a << "\t" << b<< "\t";
//     for( int i = 2; i<=n ; i++){
//         c = a + b;
//         cout << c << "\t";
//         a = b;
//         b = c;
//     }
//     cout << endl;
//     return 0;
// }

// with recursion................

int fab(int n) {
    if (n <= 1) {
        return n;
    }
    return fab(n-1) + fab(n-2);
}

int main() {
    int n;
    cout << "Enter range: ";
    cin >> n;
    cout << "Fibonacci series: ";
    for (int i = 0; i < n; i++) {
        cout << fab(i) << " ";
    }
    cout << endl;
    return 0;
}