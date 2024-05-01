#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream hout("file_Rw.txt");
    string st;
    cout << "Enter your name: ";
    cin >> st;

    hout<<"My name is " << st;

    hout.close();

    ifstream inf("file_Rw.txt");
    string s;
    // inf >> s;
    getline(inf, s);
    cout << "The content of file is: " << s << endl;
    inf.close();
    return 0;
}