#include <iostream>
#include <cmath>
using namespace std;
class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "The point is ( " << x << "," << y << " )" << endl;
    }
    friend void distance(point, point);
};   
void distance(point p1, point p2)
{
    int p3;
    p3 = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
    cout << "the distance is: " << p3 << endl;
}
int main()
{
    point p1(3, 4), p2(9, 1);
    p1.display(),
    p2.display();
    distance(p1, p2);
    return 0;
}