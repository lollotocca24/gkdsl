#include <iostream>
using namespace std;

int main() {
    int voto;

    cout << "Inserisci un voto compreso tra 10 e 1: ";
    cin >> voto;

    switch (voto) {
        case 10:
            cout << "Ottimo" << endl;
            break;
        case 9 ... 8:
            cout << "Distinto" << endl;
            break;
        case 7 :
            cout << "Buono" << endl;
            break;
        case 6:
            cout << "Sufficiente" << endl;
            break;
        case 5:
            cout << "Insufficiente" << endl;
            break;
        case 4 ... 1 :
        	cout << "Gravemente Insufficiente" << endl;
            break;
    }

    return 0;
}

