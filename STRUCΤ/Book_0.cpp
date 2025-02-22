#include <iostream>
using namespace std;

struct Book{
    string title;
    int year;
    float price;
};

int main() {
    Book b1; 
    b1.title = "B1:I LOVE C++"; 
    b1.year = 2025;
    b1.price = 11.85;
    cout << b1.title << ' '  << b1.year << ' ' << b1.price <<'\n';
    
    Book b2={"B2: I Love more C++",2025,12.0};
    cout << b2.title << ' '  << b2.year << ' ' << b2.price <<'\n';

    b1=b2;
    cout <<"Copying..."<<'\n';
    cout << b1.title << ' '  << b1.year << ' ' << b1.price <<'\n';

    return 0;
}
