#pragma once
#include<iostream>
#include<sstream>
#include<string>
using namespace std;

struct ListaDoble {
public:
	int dato;
	struct ListaDoble* sig;
	struct ListaDoble* ant;

	void insertar(struct ListaDoble*&, int);
	void imprimir(ListaDoble*);
	void eliminar(ListaDoble*& referencia, ListaDoble* eliminar);
};
