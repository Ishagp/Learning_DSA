#include <iostream>
using namespace std;

float circleArea(float radius)
{
    float r = radius;
    float area = 3.14 * r * r;
    return area;
}

int main()
{
    float radius;
    cin >> radius;
    float area = circleArea(radius);
    cout << "Area of the circle: " << area << endl;
}
