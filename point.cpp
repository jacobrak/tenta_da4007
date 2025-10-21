#include <iostream>
#include <cmath>
using namespace std;

class Point {
public:
    float x;
    float y;

    Point(float x_val, float y_val) {
        x = x_val;
        y = y_val;
    }

    float magnitude() {
        return sqrt(x * x + y * y);
    }
};

int main() {
    Point p(2.0, 3.0);
    cout << p.x << ", " << p.y << endl;
    cout << "Magnitude: " << p.magnitude() << endl;
    return 0;
}
