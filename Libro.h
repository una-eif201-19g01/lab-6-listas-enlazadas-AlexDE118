//
// Created by Maikol Guzman  on 2019-09-16.
//

#ifndef LAB_6_LISTAS_ENLAZADAS_LIBRO_H
#define LAB_6_LISTAS_ENLAZADAS_LIBRO_H

#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class Libro {
private:
	string id, nombre, autor;
public:
	Libro();
	Libro(string _id, string _nombre, string _autor);
	~Libro();
	string getID();
	string getNombre();
	string getAutor();
	void setID(string _id);
	void setNombre(string _nombre);
	void setAutor(string _autor);

	string toString();
};


#endif //LAB_6_LISTAS_ENLAZADAS_LIBRO_H
