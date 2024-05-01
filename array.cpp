#include <iostream>
using namespace std;
// int main(){
//  int a[]={1,2,3,4};
//  cout<<a[0]<<endl;
//  cout<<a[1]<<endl;
//  cout<<a[2]<<endl;
//  cout<<a[3]<<endl;

/*-------------------------------------------------*/
// int b[4]={1,2,3,4};
// int i;
// for(i =0; i<4; i++){
//     cout<<b[i]<<endl;
// }

/*-------------------------------------------------*/
// int c[10],i,n;
// cout<<"Enter the size of array: ";
// cin>>n;
// cout<<"Enter elements: "<<endl;
// for(i=0; i<n; i++){
//     cin>>c[i];
// }
// cout<<"Elements of array are: "<<endl;
// for(i=0; i<n; i++){
//     cout<<c[i]<<"\t";
// }
// cout<<endl;

/*-------------------------------------------------*/
//     int a[]= {11,22,33,44};
//     int *p = a;
//     cout<<"Value at a[0] is: "<< *p <<endl;
//     cout<<"Value at a[1] is: "<< *(p+1) <<endl;
//     cout<<"Value at a[2] is: "<< *(p+2) <<endl;
//     cout<<"Value at a[3] is: "<< *(p+3) <<endl;
//     return 0;
// }

// array of objects
class a
{
    int id;

public:
    void setid()
    {
        cout << "Enter id: ";
        cin >> id;
        cout << "Id is: " << id << endl;
    }
};
int main()
{
    a id[3];
    for (int i = 0; i < 3; i++)
    {
        id[i].setid();
    }
    return 0;
}