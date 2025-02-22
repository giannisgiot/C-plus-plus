#include <iostream>
using namespace std;

class Point {

private:
    double x, y;
public:
    // Constructor

    // Point(double xVal, double yVal) : x(xVal), y(yVal) {}

    Point(double x, double y) {
        this->x = x;  
        this->y = y;
    }
    // Point(double x, double y) : x(x), y(y) {}  // Default constructor

    // Method to print point
    void display(){
        cout << "Point(" << this->x << ", " << this->y << ")" << endl;
    }

    void setX(const double x) {
        this->x = x;
    }

    void setY(double y) {
        this->y = y;
    }
};

int main() {
    Point p(3.5, 2.0);
    p.display(); // Output: Point(3.5, 2)
    p.setX(5.0);
    p.setY(7.5);

    return 0;
}