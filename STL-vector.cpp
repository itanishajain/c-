#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &v1){
    for(int i=0; i<v1.size(); i++){
        cout << v1[i] << " " ;
        cout << v1.at(i) << " " ;
    }
    cout << endl;
}

int main(){
    vector <int> vec1;
    int element, size;
    cout << "Enter the size of the vector -> " ;
    cin >> size ;
    for(int i =0; i<size; i++){
        cout << "Enter an element -> " ;
        cin >> element;
        
        vec1.push_back(element);
    }
    //vec1.pop_back();
    display(vec1);
    vector<int> :: iterator iter = vec1.begin();
    //vec1.insert(iter+1, 3, 566);
    display(vec1);
    return 0;
}