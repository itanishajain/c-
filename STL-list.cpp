// List si bidirectional linear list which shows efficient operation like insertion and deletion.

#include<iostream>
#include<list>
using namespace std;

void display(list<int> &l){
    list<int> :: iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    list<int> l1; // List of 0 length.
    list<int> l2(3); //List of size 7.

    l1.push_back(67);
    l1.push_back(4);
    l1.push_back(5);
    l1.push_back(78);
    l1.push_back(24);

    list<int> :: iterator iter;
    iter = l2.begin();
    *iter = 34;
    iter++;
    *iter = 76;
    iter++;
    *iter = 58;
    iter++;
    display(l2);

    display(l1);
    
    return 0;
}