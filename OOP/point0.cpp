#include <iostream>
using namespace std;

class Point {
// The Point class defines the structure of software
// objects that model mathematical, geometric points
public:
    double x; // The point's x coordinate
    double y; // The point's y coordinate
};
int main() {
    Point pt1, pt2;
    pt1.x = 8.5; // Use the dot notation to get to a part of the object
    pt1.y = 0.0;
    pt2.x = -4;
    pt2.y = 2.5;

    // Print them
    cout << "pt1 = (" << pt1.x << "," << pt1.y << ")\n";
    cout << "pt2 = (" << pt2.x << "," << pt2.y << ")\n";
}