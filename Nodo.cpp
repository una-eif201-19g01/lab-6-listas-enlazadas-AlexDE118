//
// Created by Maikol Guzman  on 2019-09-16.
//

#include "Nodo.h"

Nodo::Nodo()
{

}

Nodo::Nodo(Libro & libro, Nodo * siguiente)
{
	this->libro = libro;
	this->siguiente = siguiente;
}

Nodo::~Nodo()
{
}

Libro & Nodo::getLibro()
{
	// TODO: insertar una instrucción return aquí
	return libro;
}

void Nodo::setLibro(Libro & _libro)
{
	libro = _libro;
}

Nodo Nodo::getSiguiente()
{
	return *siguiente;
}

void Nodo::setSiguiente(Nodo * _siguiente)
{
	siguiente = _siguiente;
}

string Nodo::toString()
{
	return libro.toString();
}
