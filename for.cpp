#include<iostream>
using namespace std;
//int main(){
    // for loop
    // for(int i=0; i<5; i++){
    //     cout << i << endl;
    // }
    //int i=1;
    //while loop
    // while(i<10){
    //     cout <<"Value: "<< i << endl;
    //     i++;
    // }

    //do-while loop
//     do {
//         cout << "Value: " << i << endl;
//         i++;
//     } while(i>10);
//     return 0;
// }
void table(int n){
    for(int i=1; i <= 10; i++){
        int tab = n * i;
        cout << tab << endl;
    }
}
int main(){
    int number;
    while(true){
        cout << "Enter the number (if 0 then program will exit): " << endl;
        cin >> number;
        if (number == 0){
            break;
        }
        table(number);
    }
}