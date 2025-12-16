#include <iostream>
#include <string>
using namespace std;

double calculateCircleArea(double x)
{
    double PI = 3.14159;
    double area = PI * x * x;
    return area;
}

double calculateRectangleArea(double width, double height)
{
    double area = width * height;
    return area;
}

int main()
{

    //หาพื้นที่วงกลม
    const double PI = 3.14159;
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = calculateCircleArea(radius);
    cout << "The area of the circle with radius " << radius << " is " << area << endl;

    // ฟังชันหาพื้นที่สี่่เหลียม
    double width, height;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "Enter the height of the rectangle: ";
    cin >> height;

    double rectArea = calculateRectangleArea(width, height);
    cout << "The area of the rectangle with width " << width << " and height " << height << " is " << rectArea << endl;

    return 1;
}

