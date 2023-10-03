// Carissima Liliana, ecco un piccolo enigma divertente per onorare i tuoi natali.
// Regali that matter: v 1.0

#include <iostream>

#define Square(x) x*x

int main(){

    using namespace std;
    int value = 5;
    
    cout << value << "*" << value << " = "  << Square(value) << endl;
    cout << value + 1 << "*" << value + 1 << " = "  << Square(value+1) << endl; // Uhmm???

    return 0;
}