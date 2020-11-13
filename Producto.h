/*
 * Proyecto Comparación Precios Mercados
 * Eliuth Balderas Neri
 * A01703315
 * 13/11/2020
 */

/*
 * Clase Productos

#ifndef Productos
#define Productos
#include <iostream>
using namespace std;

class Productos {

    private: //Atributos.
		int Codigo;
		string NombreProducto;

    public: //Métodos
        Producto();
		Producto (int Codigo, string NombreProducto);
		
		int getCodigo();
		string getNombreProducto();
};

 * Constructor por default
 
Producto::Producto(int _Codigo, string _NombreProducto){
	Codigo=_Codigo;
	NombreProducto=_NombreProducto;
}

int Producto::getCodigo(){
	return Codigo;
}

string Producto::getNombreProducto(){
	return NombreProducto;
}
