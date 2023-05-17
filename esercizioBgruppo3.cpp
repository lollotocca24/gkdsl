#include <iostream>
#include <math.h>
using namespace std;

int num = 1, prodotto = 1, somma;

main(){
	while(num!=0){
	cout<<"inserire un numero ";
	cin>>num;
		if(num>0)
		prodotto=prodotto*num;
		else if(num<0)
		somma=somma+num;
	}
	cout<<"il prodotto dei numeri positivi e' "<<prodotto;
	cout<<"\nla somma dei numeri negativi e' "<<somma;
}
