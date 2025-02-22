#include <iostream>
using namespace std;

int main(){
    double celsius, fahrenheit;
    // Ζητάμε από τον χρήστη να εισάγει τη θερμοκρασία σε Κελσίου
    cout << "Δώστε τη θερμοκρασία σε Κελσίου: ";
    cin >> celsius;

    // Υπολογισμός θερμοκρασίας σε Φαρενάιτ
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // Εμφάνιση αποτελέσματος
    cout << "Η θερμοκρασία σε Φαρενάιτ είναι: " << fahrenheit << endl;

    return 0;
}