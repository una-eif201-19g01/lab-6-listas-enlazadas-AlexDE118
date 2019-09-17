//
// Created by Maikol Guzman  on 2019-09-16.
//

#include "Libro.h"

Libro::Libro()
{
	string id, nombre, autor = "Sin asignar";
}

Libro::Libro(string _id, string _nombre, string _autor)
{
	id = _id;
	nombre = _nombre;
	autor = _autor;
}

Libro::~Libro()
{
	id = "";
	nombre = "";
	autor = "";
}

string Libro::getID()
{
	return id;
}

string Libro::getNombre()
{
	return nombre;
}

string Libro::getAutor()
{
	return autor;
}

void Libro::setID(string _id)
{
	id = _id;
}

void Libro::setNombre(string _nombre)
{
	nombre = _nombre;
}

void Libro::setAutor(string _autor)
{
	autor = _autor;
}

string Libro::toString()
{
	stringstream reporte;

	reporte << "ID: " << getID() << endl;
	reporte << "Nombre: " << getNombre() << endl;
	reporte << "Autor: " << getAutor() << endl;
}