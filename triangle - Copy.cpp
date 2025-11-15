#include <iostream>
using namespace std;

class Triangle {
public:
    
    inline double area(double base, double height) 
    {
        return 0.5 * base * height;
    }
};

int main()
 {
    Triangle triangle;
    double base, height;

    
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    
    cout << "The area of the triangle is: " << triangle.area(base, height) << endl;

    return 0;
}
