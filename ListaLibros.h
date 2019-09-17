//
// Created by Maikol Guzman  on 2019-09-16.
//

#ifndef LAB_6_LISTAS_ENLAZADAS_LISTALIBROS_H
#define LAB_6_LISTAS_ENLAZADAS_LISTALIBROS_H

#include "Nodo.h"

class ListaLibros {
private:
	Nodo * primero;
	Nodo *actual;
public:
	ListaLibros();
	~ListaLibros();
	void instertarInicio(Libro &libro);

};


#endif //LAB_6_LISTAS_ENLAZADAS_LISTALIBROS_H
