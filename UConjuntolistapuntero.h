//---------------------------------------------------------------------------

#ifndef UConjuntolistapunteroH
#define UConjuntolistapunteroH
//---------------------------------------------------------------------------
//added
#include "UListapuntero.h"
#include <stdlib.h>//aleatorio
#include <time.h>//aleatorio

typedef int Elemento;

class ConjuntoLP {
	private:
		ListaP* elem;
	public:
		ConjuntoLP();
		bool vacio();
		bool pertenece(Elemento e);
		void inserta(Elemento e);
		int cardinal();
		int ordinal(Elemento e);
		void suprime(Elemento e);
		Elemento muestrea();		string mostrar();};
#endif
