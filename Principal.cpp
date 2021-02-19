#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
//added
#include <iostream>
#include "UConjuntolistapuntero.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	ConjuntoLP* c=new ConjuntoLP();
	c->inserta(4);
	c->inserta(78);
	c->inserta(65);
	c->inserta(7);
	c->inserta(3);
	c->inserta(00);
	cout<<c->mostrar()<<endl;
	c->suprime(65);
	cout<<c->mostrar()<<endl;
	int x=c->ordinal(78);
	cout<<x<<endl;
	int y=c->cardinal();
	cout<<"longitud: "<<y<<endl;
	bool w=c->pertenece(7);
	cout<<"es: "<<w<<endl;
	int e=c->muestrea();
	cout<<"muestrea: "<<e<<endl;
	system("pause");
	return 0;
}
