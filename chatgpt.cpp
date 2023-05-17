#include <iostream>
#include <cctype>
using namespace std;

bool isInteger(string input) {
    for (char c : input) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

int main() {
    string numString;
    cout << "Inserisci un numero intero diverso da zero: ";
    cin >> numString;

    while (!isInteger(numString)) {
        cout << "Input non valido. Inserisci un numero intero diverso da zero: ";
        cin >> numString;
    }

    int num = stoi(numString);

    string inputString;
    int uguali = 0;
    int diversi = 0;

    cout << "Inserisci una serie di numeri interi (0 per terminare):" << endl;
    do {
        cin >> inputString;
        if (isInteger(inputString)) {
            int input = stoi(inputString);
            if (input == num) {
                uguali++;
            } else {
                diversi++;
            }
        } else {
            cout << "Input non valido. Inserisci un numero intero: ";
        }
    } while (inputString != "0");

    cout << "Valori uguali a " << num << ": " << uguali << endl;
    cout << "Valori diversi da " << num << ": " << diversi - 1 << endl;

    return 0;
}

