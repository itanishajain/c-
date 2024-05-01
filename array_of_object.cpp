#include<iostream>
using namespace std;
class Shop{
    int id;
    float price;
    public:
    void set_data(int a, float b){
        id = a;
        price = b;
    }
    void get_data(){
        cout << "The id is: " << id << endl;
        cout << "The price is: " << price << endl;
    }
};
int main(){
    int p,i;
    float q;
    Shop *ptr = new Shop[3];
    Shop *ptr1 = ptr;
    for(i=0; i<3; i++){
        cout << "Enter id and price: " << endl;
        cin >>p>>q;
        ptr->set_data(p,q);
        ptr++;
    }
    for(i=0; i<3; i++){
        ptr1->get_data();
        ptr1++;
    }
    return 0;
}