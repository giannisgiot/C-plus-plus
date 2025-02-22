#include <iostream>
using namespace std;

class Point {
private:
    double x, y;
public:
    Point(){// Default constructor
    }
    // Κανονικός constructor
    Point(double xVal, double yVal) : x(xVal), y(yVal) {}

    // Copy Constructor
    Point(const Point &other) : x(other.x), y(other.y) {
        cout << "Copy constructor called!" << endl;
    }
    void display() { cout << "Point(" << x << ", " << y << ")" << endl; }
    friend void increase(Point &obj);
};

void increase(Point &other){
    other.x+=1000;
}
int main() {
    Point p1(3.5, 4.2);
    // Point p2 = p1;  // Χρησιμοποιεί τον copy constructor
    Point *p2 = new Point(p1);  // Χρησιμοποιεί τον copy constructor

    // increase(p1);
    increase(*p2);

    p1.display();  // Output: Point(3.5, 4.2)
    p2->display();  // Output: Point(3.5, 4.2)

}