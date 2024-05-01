#include<iostream>
#include<cmath>
using namespace std;
class Simple{
    protected:
    int num1, num2,add,sub,mul,div;
    public:
    void simp(int n1, int n2){
        num1 = n1;
        num2 = n2;
    }
    void cal(){
        add = num1 + num2;
        sub = num1 - num2;
        mul = num1 * num2;
        div = num1 / num2;
    }
    void disp(){
        cout << "Addition : " << add << endl;
        cout << "Subtraction : " << sub << endl;
        cout << "Multiplication : " << mul << endl;
        cout << "Division : " << div << endl;
    }
};
class Scientific{
    protected:
    int num4,num3,p,s,a,b;
    public:
    void sci(int n3, int n4){
        num3 = n3;
        num4 = n4;
    }
    void calc(){
        p = pow(num3 , 2);
        s = sqrt(num4);
        a = sin(num3+ num4);
        b = cos (num3+ num4);
    }
    void display(){
        cout << "Power of num3: " << p << endl;
        cout << "Square root of num4: " << s << endl;
        cout << "Sin function: " << a << endl;
        cout << "Cos function: " << b << endl;
    }
};
class hybrid : public Simple, public Scientific{
    public:
    void set(int a, int b){
        simp(a,b);
        cal();
        disp();
        sci(a,b);
        calc();
        display();
    }
};
int main(){
    int x, y;
    hybrid h;
    cout<< "Enter the values of 2 numbers: ";
    cin >> x >> y;
    h.set(x , y);
    return 0;
}