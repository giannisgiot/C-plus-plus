#include <iostream>
using namespace std;

int main(){
    int i;
    double j;

    cout << "Enter number: ";
    cin >> i; // Διάβασμα ακεραίου και αποθήκευσή του στο i.

    cout << "Enter number: ";
    cin >> j;
    
    cout << i << '\t' << fixed << j << '\n';
    return 0;
}
