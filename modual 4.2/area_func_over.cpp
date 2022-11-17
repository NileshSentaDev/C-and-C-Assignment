/*
Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
- Rectangle: lenght  * breadth
- Triangle: ½ *base* hight
- Circle: Pi * r*r
*/
#include <iostream>
using namespace std;
class dimension
{
public:
    void area(int lenght, int breadth)
    {
        cout << "Area of rectangle : " << lenght * breadth << endl;
    }
    void area(int base, double hight)
    {
        cout << "Area of triangle : " << 0.5 * base * hight << endl;
    }
    void area(int r)
    {
        cout << "Area of circle : " << 3.14 * r * r << endl;
    }
};
int main()
{
    dimension d;
    d.area(10, 2);
    d.area(10, 5.5);
    d.area(5);
}
