#include<iostream>
using namespace std;
class roll_no{
    protected:
    int a;
    public:
    void get_rollNo(int n1){
        a = n1;
    }
};
class score: virtual public roll_no{
    protected:
    int b;
    public:
    void get_score(int n2){
        b = n2;
    }
};
class decascore: virtual public roll_no{
    protected:
    int c;
    public:
    void get__deca(int n3){
        c = n3;
    }
};
class result : public score, public decascore{
    public:
    void Result(){
       int total = b + c;
       cout << "The Roll No is: "<< a << endl;
       cout << "The result is: " << total << endl;
    }
};
int main(){
    result student;
    student.get_rollNo(123);
    student.get_score(78);
    student.get__deca(89);
    student.Result();
    return 0;
}