#include <iostream>
#include <math.h>
using namespace std;

int voto;

main(){
do {
	cout<<"\ninserire un voto compreso tra 1 e 10 ";
	cin>>voto;
	switch(voto){
		case 10:{
			cout<<"\nottimo";
			break;
		}
		case 9 ... 8:
			cout<<"\ndistinto";
			break;
		case 7:{
			cout<<"\nbuono";
			break;
		}
		case 6:{
			cout<<"\nsufficiente";
			break;
		}
		case 5:{
			cout<<"\ninsufficiente";
			break;
		}
		case 4 ... 1:{
			cout<<"\ngravemente insufficiente";
			break;
		}
			default: cout<<"\nil voto e' troppo grande";
	}
} 	while(voto!=0);
cout << "\nHai inserito 0. Il programma termina." << std::endl;
}
