#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream utf;
    utf.open("Open.txt");
    utf<<"This is me..\n";
    utf<<"Me is this";
    utf.close();

    ifstream in;
    in.open("Open.txt");
    string st;
    while(in.eof()==0){
        getline(in, st);
        cout << st << endl;
    }
    in.close();
    return 0;
}