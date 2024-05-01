#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    //selection control structure:- if-else ladder.
    // if(age>=18){
    //     cout<<"You are an adult.\n";
    // }
    // else{
    //     cout<<"you are not an adult.\n";
    // }

    //selection control structure:- switch-case statement.
    switch (age)
    {
    case 18:
        cout<<"You are 18.\n";
        break;
    case 20:
        cout<<"You are 20.\n";
        break;
    case 11:
        cout<<"You are 11.\n";
        break;
    
    default:
        cout<<"Invalid case.\n";
        break;
    }
    return 0;
}