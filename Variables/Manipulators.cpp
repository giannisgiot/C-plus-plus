	#include <iostream> 
	#include <iomanip>
	using namespace std;

	int main(){
        int n = 42;
        // Output in hexadecimal base
        cout << hex << n << endl;
        // Output in decimal base
        cout << dec << n << endl;
        // Output in octal base
        cout << oct << n << endl;
        //-------------------------------//

        // // Output a new line and flush the stream
        // cout << "Hello" << endl;
        // // Set width to 10 for the next output
        // cout << setw(10) << 42 << endl;
        // // Set precision to 3 for floating-point numbers
        // cout << setprecision(3) << 3.14159 << endl;
        // // Use fixed-point notation
        // cout << fixed << 3.14159 << endl;
        // // Use scientific notation
        // cout << scientific << 3.14159 << endl;
        // // Show the decimal point even for whole numbers
        // cout << showpoint << 42.0<< endl;
		return 0;
	}