//---------------------------------------------------------------------------

#pragma hdrstop

#include "UConjuntolistapuntero.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

ConjuntoLP::ConjuntoLP(){  //<>
	elem= new ListaP;    //Ptr--//
	srand(time(NULL));   //aleatorio
}

bool ConjuntoLP::vacio(){
	return elem->longuitud()==0;
}

bool ConjuntoLP::pertenece(Elemento e){
	if (elem->vacia()) {
		cout<<"exception error conjunto no tiene elementos"<<endl;
		return false;
	}
	else{
		direccionP p=elem->primero();
		while (p!=NULL){
			int ele=elem->recupera(p);
			if (e==ele) {
				return true;
			}
			p=elem->siguiente(p);
		}
		return false;
	}
}

void ConjuntoLP::inserta(Elemento e){
	if (vacio()) {
		elem->inserta(elem->primero(),e);
	}
	else {
		if (!pertenece(e)) {
			elem->inserta(elem->primero(),e);
		}
	}
}

int ConjuntoLP::cardinal(){
	return elem->longuitud();
}

int ConjuntoLP::ordinal(Elemento e){
	if (elem->vacia()) {
		cout<<"exception error conjunto no tiene elementos"<<endl;
	}
	else{
		int cont=0;
		direccionP p=elem->primero();
		while (p!=NULL){
			cont++;
			int ele=elem->recupera(p);
			if (e==ele) {
				return cont;
			}
			p=elem->siguiente(p);
		}
    }
}
								//2
void ConjuntoLP::suprime(Elemento e){ //<1,2,3>
	if (pertenece(e)) {
		direccionP p=elem->primero();
		while (p!=NULL){
			int ele=elem->recupera(p);
			if (e==ele) {
				elem->suprime(p);
			}
			p=elem->siguiente(p);
		}
	}
	else{
		cout<<"exception error conjunto no dicho elemento"<<endl;
	}
}

Elemento ConjuntoLP::muestrea(){//elemento aleatorio  <145,72,023,47,565>
	if (!vacio()){
		int lug = (rand() % cardinal()) + 1;
		direccionP dir = elem->primero();
		int cont = 0;
		for (int i = 1; i <= cardinal(); i++) {
			cont++;
			if (cont == lug)
				return elem->recupera(dir);
			dir = elem->siguiente(dir);
		}
	}
}

string ConjuntoLP::mostrar(){ //<<145,72,023,47,565>>
	string s = "<<";
	direccionP p= elem->primero();
	while (p != NULL) {
		int ele = elem->recupera(p);//145
		s += to_string(ele);
		if (p != elem->fin())
			s += ",";
		p = elem->siguiente(p);
	}
	return s + ">>";
}

