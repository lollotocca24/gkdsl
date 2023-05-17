#include<iostream>
#include<math.h>
using namespace std;

int num;
int value = 1;
int conta1, conta2;

main(){
	cout<<"Inserire un numero diverso da 0: ";
	cin>>num;
	
	while(value != 0){
		cout<<"\nInserire un nuovo valore ";
		cin>>value;
		if(value == num)
			conta1 = conta1+1;
		else
			conta2 = conta2+1;
	}
	
	cout<<"\nI numeri uguali a "<<num<<" sono "<<conta1;	
	cout<<"\nI numeri diversi da "<<num<<" sono "<<conta2;
}
