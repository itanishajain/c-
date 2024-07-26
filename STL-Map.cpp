#include<iostream>
#include<map>
#include<string>

using namespace std;

// Map is an associative array

int main(){
    map <string, int> marks;

    marks["Tanisha"] = 95;
    marks["Shubh"] = 98;
    marks["Jack"] = 56;

    marks.insert(make_pair("Kozume", 32));
    marks.insert(make_pair("Kuroo", 62));
    map<string, int> :: iterator itr;
    for (itr = marks.begin(); itr != marks.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << "\n";
    }
    
    cout << "The size is : " << marks.size() << endl;
    cout << "The max-size is : " << marks.max_size() << endl;
    cout << "The empty size is : " << marks.empty() << endl;
    return 0;
}