#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::boolalpha); // Use ios::boolalpha instead of cout.boolalpha

    int numero1;
    cout << "Input value 1: ";
    cin >> numero1;

    int numero2;
    cout << "Input value 2: ";
    cin >> numero2;

    bool b;
    b = (numero1 == numero2); // Use parentheses for the comparison

    cout << "Estados, " << numero1 << " igual " << numero2 << " é " << b << endl;

    cout << "Pressione o botão para continuar..." << endl;
    cin.ignore(); // Clear any remaining input
    cin.get();    // Wait for user to press enter

    return 0;
}
