#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string a = "C++ Program";
    string b;
    //opening the file using constructor and writing into it.
    // ofstream out("file.txt");
    // out<<a;


    //opening the file using constructor and reading from it.
    ifstream in1("file.txt");
    getline(in1, b);
    cout << b << endl;
    return 0;
}