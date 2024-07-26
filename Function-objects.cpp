#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    // Function Objects(Functor) : Functions wrapped in a class so that it can be available like an object. 
    int arr[] = {1, 2, 7, 4, 6, 5, 3} ;
    sort(arr, arr+7);
    //sort(arr, arr+7, greater<int>());
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }
    
    return 0;
}