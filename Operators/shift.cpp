#include <iostream>
using namespace std;

int main(){
    int left,right,number;
    
    cout << "Δώστε αριθμό: ";
    cin >> number;

    left=number<<1;
    cout << "left="<<left<<endl;

    right=number>>1;
    cout << "right="<<right<<endl;

    return 0;
}
