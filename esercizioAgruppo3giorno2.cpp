//includo i pacchetti necessari
#include <iostream>
#include <math.h>
using namespace std;

//definisco le variabili che uso
int num;   //definisco num come intero e sar� il mio numero per le comparazioni
int a;     //definisco a come interosar� il mio numero da comparare con il numero di riferimento num
int uguale = 0;      //definisco uguale che sar� il contatore per tutti i numeri che soddisfano la condizione(a=num)
int diverso = 0;	 //definisco diverso che non sar� il contatore per tutti i numeri che soddisfano la condizione(a diveso da num)		  

//inizio il programma
main(){
	cout<<"inserire un numero reale(0=fine) "; //messaggio di input all'utente
	cin>>num;            //acquisisco l'input dell'utente nella variabile num sar� il mio numero di riferimento
	
	//cout<<"\ninserire un altro numero reale "; //messaggio di input all'utente
	//cin>>a;              //acquisisco l'input dell'utente nella variabile a sar� il mio numero da confrontare
	//finch� non inserisco 0 continuer� a chiedermi numeri
	while(a!=0){      
		//controllo che a sia uguale al numero di riferimento 
		if(a==num){
				//nel caso a uguale a num incremento il contatore uguale di 1
				uguale=uguale+1;
			}
			//altrimenti se a non � uguale a num quindi � diverso
		else {
			    //nel caso a diverso da num incremento il contatore diverso di 1
				diverso=diverso+1;
		}
	//se il numero inserito � diverso da 0 continuo la serie di numeri
	cout<<"\ninserire un altro numero reale ";
	cin>>a;
	}
	//nel caso abbia inserito 0 stampo il risultati
	cout<<"i numeri uguali sono: "<<uguale;
	cout<<"\ni numeri diversi sono: "<<diverso;
}
