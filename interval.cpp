#include <iostream>

using namespace std;

class Interval{
public:
    float left,right;

    Interval(float xx, float yy){
        left = xx;
        right = yy;
    }

    bool intersecting(Interval& other){
    if (right < other.left) {
        return false;
    }
    if (left > other.right) {
        return false;
    }
    return true;
    }
    
};
int main() {
    Interval unit_interval = Interval(0.0, 1.0);
    Interval some_interval = Interval(0.5, 0.6);
    Interval more_interval = Interval(0.8, 1.2);
    if (some_interval.intersecting(unit_interval)) {
    cout << "(0.5, 0.6) intersects the unit interval." << endl;
    } else {
    cout << "No intersection of (0.5, 0.6) and (0.0, 1.0)" << endl;
    }
    if (more_interval.intersecting(some_interval)) {
    cout << "(0.8, 1.2) intersects (0.5, 0.6)" << endl;
    } else {
    cout << "(0.8, 1.2) does not intersect (0.5, 0.6)" << endl;
    }
    }