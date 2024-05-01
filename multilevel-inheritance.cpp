#include <iostream>
using namespace std;
class student
{
protected:
    int rollNo;

public:
    void get_RollNo(int r)
    {
        rollNo = r;
    }
    void display_RollNo()
    {
        cout << "Roll No is: " << rollNo << endl;
    }
};
class exam : public student
{
protected:
    int totalmarks;

public:
    void get_Marks(int total)
    {
        totalmarks = total;
    }
    void display_Marks()
    {
        cout << "Total marks are: " << totalmarks << endl;
    }
};
class result : public exam
{
protected:
    float per;

public:
    void display()
    {
        cout << "Percentage: " << (totalmarks) / 5 << "%" << endl;
    }
};
int main()
{
    result A;
    A.get_RollNo(1);
    A.get_Marks(449);
    A.display_RollNo();
    A.display_Marks();
    A.display();
    return 0;
}