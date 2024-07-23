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
    
    l1.push_back(67);
    l1.push_back(54);
    l1.push_back(5);
    l1.push_back(78);
    l1.push_back(24);
    display(l1);
    //l1.pop_back(); // It will remove element from the back/end of the list.
    //l1.pop_front(); // It will remove element from fromt of the list
    //l1.remove(24); // it will remove element which is specified.

    // To sort the list
    l1.sort();

    display(l1);
    
    // To reverse the list
    l1.reverse();

    display(l1);

    
    list<int> l2(3); //List of size 7.
    list<int> :: iterator iter;
    iter = l2.begin();
    *iter = 34;
    iter++;
    *iter = 76;
    iter++;
    *iter = 58;
    iter++;
    display(l2);
    
    l1.merge(l2);
    cout << "List 1 after merging with list 2 -> " ;
    display(l1);
    return 0;
}