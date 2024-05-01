#include<iostream>
using namespace std;
// struct employee{
//     int id;
//     char name[10];
//     float salary;
// };
// int main(){
//     struct employee s1;
//     s1.id=1;
//     strcpy(s1.name,"tanisha");
//     s1.salary=80000;
//     cout<<"s1 id: "<<s1.id<< endl;
//     cout<<"s1 name: "<<s1.name<< endl;
//     cout<<"s1 salary: "<<s1.salary<< endl;
//     return 0;
// }

/*-------------Using typedef----------------------*/
typedef struct employee{
    int id;
    char name[10];
    float salary;
} emp;
int main(){
    emp s1;
    s1.id=1;
    strcpy(s1.name,"tanisha");
    s1.salary=80000;
    cout<<"s1 id: "<<s1.id<< endl;
    cout<<"s1 name: "<<s1.name<< endl;
    cout<<"s1 salary: "<<s1.salary<< endl;
    return 0;
}

/*--------------------- Union -----------------------*/
// union student
// {
//     int id;
//     char sec;
//     float marks;
// };
// int main(){
//     union student s1;
//     s1.id=1;
//     s1.sec='a';
//     s1.marks=80.6;
//     cout<<s1.id<<endl;
//     cout<<s1.sec<<endl;
//     cout<<s1.marks<<endl;
//     return 0;
// }

/*---------------------  Enum ----------------------*/

// int main(){
//     enum meal { breakfast, lunch, dinner };
//     meal m1 = lunch;

//     if (m1 == 1) { 
//         cout << "Value of lunch is: " << m1 << endl;
//     }

//     return 0;
// }

