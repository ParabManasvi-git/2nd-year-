#include <iostream>
using namespace std;

class Number {
public:
   
    inline double mult(double a, double b)
    {
        return a * b;
    }

    
    inline int cube(int n) 
    {
        return n * n * n;
    }
};

int main() {
    Number num;

    
    double a = 5.5, b = 3.2;
    cout << "Multiplication of " << a << " and " << b << " is: " << num.mult(a, b) << endl;

    
    int n = 4;
    cout << "Cube of " << n << " is: " << num.cube(n) << endl;

    return 0;
}
