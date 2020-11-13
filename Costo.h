/*
 * Proyecto Comparación Precios Mercados
 * Eliuth Balderas Neri
 * A01703315
 * 13/11/2020
 */

/*
 * Clase Costo

#ifndef Costo
#define Costo
#include <iostream>
using namespace std;

class Costo {

    private: //Atributos.
		int Descuento;
		int CostoNormal();

    public: //Métodos
        Costo();
		Costo (int Descuento, int CostoNormal);
		
		int getDescuento();
		int CostoNormal();
};

 * Constructor por default
 
Costo::Costo(int _Descuento, string _CostoNormal){
	Descuento=_Descuento;
	CostoNormal=_CostoNormal;
}

int Costo::getDescuento(){
	return Descuento;
}

int Costo::CostoNormal(){
	return CostoNormal;
}