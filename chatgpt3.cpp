#include <iostream>
using namespace std;

int main() {
    int voto;

    cout << "Inserisci un voto compreso tra 1000 e 100: ";
    cin >> voto;

    switch (voto) {
        case 1000:
            cout << "Ottimo" << endl;
            break;
        case 999 ... 800:
            cout << "Distinto" << endl;
            break;
        case 799 ... 700:
            cout << "Buono" << endl;
            break;
        case 699 ... 600:
            cout << "Sufficiente" << endl;
            break;
        case 599 ... 500:
            cout << "Insufficiente" << endl;
            break;
        default:
            if (voto < 500)
                cout << "Gravemente insufficiente" << endl;
            else
                cout << "Voto non valido" << endl;
            break;
    }

    return 0;
}

