/*
 * Proyecto Comparación Precios Mercados
 * Eliuth Balderas Neri
 * A01703315
 * 13/11/2020
 */

/*
 * Clase SuperMercados

#ifndef SuperMercados
#define SuperMercados
#include <iostream>
using namespace std;

#include "Productos.h"
const int MAX = 200; //Tamaño del arreglo.

class SuperMercados {

    private: //Atributos.
		string NombreSuperMercado;
		string UbicacionSuperMercado;
		

    public: //Métodos
        SuperMercados(string,string); //Constuctor
        void CreaEjemploProductos();
        void CreaEjemploCosto();
		void CuentaTotal();
};

 * Constructor por default
 
SuperMercados::SuperMercados(string _NombreSupermercado, string _UbicacionSupermercado){
	NombreSuperMercado=_NombreSupermercado;
	UbicacionSuperMercado=_UbicacionSupermercado;
}

void SuperMercados::CreaEjemploProductos(){
	cout<<"Sopa"<<endl;
	cout<<"Leche"<<endl;
}

void SuperMercados::CreaEjemploCosto(){
	cout<<"$2"<<emdl;
	cout<<"$25"<<emdl;
}

void SuperMercados::CuentaTotal(){
    total()
	 cout << total << " \n";
}