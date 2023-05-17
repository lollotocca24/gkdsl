#include <iostream>
#include <math.h>
using namespace std;

int voto;

main(){
	cout<<"inserire un voto compreso tra 10 e 1 ";
	cin>> voto;
	switch(voto){
		case 10:{
			cout<<"\tottimo";
			break;
		}
		case 9:{
			cout<<"\tdistinto";
			break;
		}
			case 8:{
			cout<<"\tdistinto";
			break;
		}
			case 7:{
			cout<<"\tbuono";
			break;
		}
			case 6:{
			cout<<"\tsufficiente";
			break;
		}
			case 5:{
			cout<<"\tinsufficiente";
			break;
		}
		default:
		cout<<"\tgravemente insufficiente";
	}
}
