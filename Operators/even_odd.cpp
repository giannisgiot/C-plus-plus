#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Δώστε number: ";
    cin >> number;

    if(number%2 == 0){
        cout<<"Artios\n";
    }else{
        cout<<"perittos\n";
    }
    //--------------b-------------//

    // if((number & 1) == 0){
    //     cout<<"Artios\n";
    // }else{
    //     cout<<"perittos\n";
    // }
    return 0;
}