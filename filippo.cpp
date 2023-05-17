#include <iostream>
using namespace std;

int voto;
std::string giudizio; 
main() {
do {
    cout << "Inserisci un voto compreso tra 10 e 1 (0 exit): ";
    cin >> voto;
	
    switch (voto) {
        case 1 ... 5:
            giudizio="gravemente insufficiente";
            break;
        case 6:
            giudizio="sufficiente";
            break;
        case 7:
            giudizio="buono";
            break;
        case 8 ... 9:
            giudizio="distinto";
            break; 
		case 10:
            giudizio="ottimo";
            break;	  
        default:
            giudizio="il voto non e' compreso tra 1 e 10" ;
            break;
		}
std::cout << "il gidizio e' " << giudizio << std::endl;		
} 	while(voto!=0);
std::cout << "Hai inserito 0. Il programma termina." << std::endl;

    return 0;
} 

