#include<iostream>
using namespace std;
int main(){
    int i=5;
    for(i=5; i<=10; i++){
        if(i==8){
            cout<<"\nLoops is being break.";
            break;
        }
        cout<<i<<"\t";
    }
    // for(i=5; i<=10; i++){
    //     if(i==8){
    //         cout<<"\nLeave this value and continue to next iteration.\n";
    //         continue;
    //     }
    //     cout<<i<<"\t";
    // }
    cout<<"\n";
    return 0;
}