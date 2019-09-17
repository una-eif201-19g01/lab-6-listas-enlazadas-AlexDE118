//
// Created by Maikol Guzman  on 2019-09-16.
//

#ifndef LAB_6_LISTAS_ENLAZADAS_NODO_H
#define LAB_6_LISTAS_ENLAZADAS_NODO_H

#include "Libro.h"

class Nodo {
private:
	Libro libro;
	Nodo *siguiente;
public:
	Nodo();
	Nodo(Libro &libro, Nodo *siguiente);
	~Nodo();
	
	Libro &getLibro();
	void setLibro(Libro &_libro);
	Nodo getSiguiente();
	void setSiguiente(Nodo *_siguiente);

	string toString();
};


#endif //LAB_6_LISTAS_ENLAZADAS_NODO_H
