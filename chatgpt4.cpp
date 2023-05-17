#include <iostream>
using namespace std;

main() {
    int numero;

    cout << "Inserisci un numero compreso tra 1 e 10: ";
    cin >> numero;

    switch (numero) {
        case 1 ... 5:
            cout << "il voto e' gravemente insufficiente" << endl;
            break;
        case 6:
            cout << "il Voto e' sufficiente" << endl;
            break;
        case 7:
            cout << "il Voto e' buono" << endl;
            break;
        case 8 ... 9:
            cout << "il voto e' distinto" << endl;
            break; 
		case 10:
            cout << "il voto e' ottimo" << endl;
            break;	  
        default:
            cout << "il Voto non e' compreso tra 1 e 10" << endl;
            break;
    }
}

