#include <iostream>
#include <math.h>
using namespace std;

float num, a = 1, uguale, diverso;

main(){
	cout<<"\ninserire un numero reale ";
	cin>> num;
	
	while(a!=0){
		
		cout<<"\ninserire un altro numero reale ";
		cin>> a;
		if(a == num)
			uguale=uguale+1;
		else
			diverso=diverso+1;
	}
	cout<<"\ni numeri uguali a "<<num<<" sono "<<uguale;
	cout<<"\ni numeri diversi da "<<num<<" sono "<<diverso;
}
