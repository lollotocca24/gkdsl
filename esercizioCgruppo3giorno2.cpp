#include <iostream>
#include <math.h>
using namespace std;

int voto;

main(){
	cout<<"inserire un voto compreso tra 1 e 10 ";
	cin>>voto;
	switch(voto){
	case 10:{
		cout<<"\nottimo";
		break;
		}
	case 9:{
		cout<<"\ndistinto";
		break;
		}
	case 8:{
		cout<<"\ndistinto";
		break;
		}
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
	default: cout<<"\ngravemente insufficiente";
}
