#include <iostream>
#include <math.h>
using namespace std;

int num;
int prodotto;
int somma;

main(){
	cout<<"inserire un numero positivo o negativo ";
	cin>>num;
	//if(num>0){
		//prodotto=num;
	//}
	//else if(num<0){
		//somma=num;
	//}
	while(num!=0){
		cout<<"\ninserire un altro numero ";
		cin>>num;
		if(num>0){
		prodotto=prodotto*num;
	}
		else if(num<0){
		somma=somma+num;
	}
	}
	cout<<"\nil prodotto dei numeri positivi e' "<<prodotto;
	cout<<"\nla somma dei negativi e' "<<somma;
}
