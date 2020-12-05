/*
 * Proyecto Comparación Precios Mercados
 * Eliuth Balderas Neri
 * A01703315
 * 04/12/2020
 */


/*
 * Clase Empresa, maneja grupos de producto, divididos en
 * Cereales, Carnes, Limpieza, Frutas_Verduras
 *
 */

#ifndef SUPERMERCADO_H_
#define SUPERMERCADO_H_
#include <iostream>
using namespace std;

#include "Producto.h"
//Tamaño del arreglo.
const int MAX = 200;

class SuperMercado {
	//Atributos.
	//Declaración de las variables de instancia.
    private: 
		Frutas_Verduras frutas_verduras[MAX];
		Limpieza limpieza [MAX];
		Carnes carnes [MAX];
		Cereales cereales [MAX];
		string NombreSuperMercado;
		string UbicacionSuperMercado;
		
    public: 
		//Constuctor
        SuperMercado(string,string);
		//Métodos
        void creaEjemploProductos();
		void creaEjemploCosto();
		void mostrarCuentaTotal();
};


/**
 * Constructor por default
 *
 * @param
 * @return Objeto SuperMercado
 */ 
_SuperMercado:SuperMercado(string _NombreSupermercado, string _UbicacionSupermercado){
  frutas_verduras[0]=Frutas_Verduras(9867,120.5, "fresa",7);
  frutas_verduras[1]=Frutas_Verduras(9867,120.5, "fresa",4);
  frutas_verduras[2]=Frutas_Verduras(9281,120.5, "fresa",5);
  frutas_verduras[3]=Frutas_Verduras(9867,120.5, "fresa",7);
  frutas_verduras[4]=Frutas_Verduras(9867,120.5, "fresa",5);
  carnes[0]=Carnes(9283,182.2,"Carne",2,"arrachera");
  carnes[1]=Carnes(3826,187.7,"Pollo",1,"alitas");
  carnes[2]=Carnes(2938,293.9,"Pezcado",3,"salmón");
  carnes[3]=Carnes(2948,162.63,"Carne",2,"suadero");
  carnes[4]=Carnes(3974,192.3,"Pollo",1,"Pierna");
  limpieza[0]=Limpieza(8976,56.9,"Salvavidas",2);
  limpieza[1]=Limpieza(8979,98.76,"Zotito", 3);
  limpieza[2]=Limpieza(8978,35.87,"Cenicienta", 1);
  limpieza[3]=Limpieza(8642,89.32,"Suave", 2);
  limpieza[4]=Limpieza(8726,98.64,"Ms. Limpieza", 3);
  cereales[0]=Cereales(7282,71.32,"CornFly","Grande");
  cereales[1]=Cereales(7239,23.32,"Crave","Pequeño");
  cereales[2]=Cereales(7346,33.54,"Frutlups","Mediano");
  cereales[3]=Cereales(7493,83.45,"Cerial","Grande");
  cereales[4]=Cereales(7003,37.62,"Fitce","Mediano");
	NombreSuperMercado=_NombreSupermercado;
	UbicacionSuperMercado=_UbicacionSupermercado;

  SuperMercado::SuperMercado(string, string);
}

/**
 * Utliza el arreglo de tipo producto.
 * Llena el arreglo con 5 ejemplos.
 *
 * @param
 * @return
*/
void SuperMercado::creaEjemploProductos(){
}

/**
 * Utiliza el arreglo Producto y su indice.
 * Recorra todo el arreglo, imprimiendo cada uno de los objetos
 *
 * @param
 * @return
*/
void SuperMercado::creaEjemploCosto(){
      for(int i = 0 ; i <= costo ; i++){
		    cout << costo[i].toString();
}

void SuperMercado::creaEjemploProductos(){
	  frutas_verduras[0].getNombreProducto();
    frutas_verduras[1].getNombreProducto();
    frutas_verduras[2].getNombreProducto();
    frutas_verduras[3].getNombreProducto();
    frutas_verduras[4].getNombreProducto();
    cereales[0].getNombreProducto();
    cereales[1].getNombreProducto();
    cereales[2].getNombreProducto();
    cereales[3].getNombreProducto();
    cereales[4].getNombreProducto();
    carnes[0].getNombreProducto();
    carnes[1].getNombreProducto();
    carnes[2].getNombreProducto();
    carnes[3].getNombreProducto();
    carnes[4].getNombreProducto();
    limpieza[0].getNombreProducto();
    limpieza[1].getNombreProducto();
    limpieza[2].getNombreProducto();
    limpieza[3].getNombreProducto();
    limpieza[4].getNombreProducto();
}

/**
 * Emplea 4 arreglos:carnes, cereales, Limpieza, frutas_verduras
 * Utiliza el ultimo indice de cada uno de los arreglos.
 * La funcion calcula cuenta total y la imprime
 * Imprime el total.
 *
 * @param
 * @return
 */
void SuperMercado::mostrarCuentaTotal(){

    double sum = 0;

		//Ciclo que suma los valores de frutas_verduras y lo guarda en sum1
    for(int i = 0 ; i <= frutas_verduras ; i++)
			sum += frutas_verduras[i].getCosto();
		//Ciclo que suma los valores de cereales y lo guarda en sum2
	 for(int i = 0 ; i<= cereales ; i++)
			sum += cereales[i].getCosto();
		//Ciclo que suma los valores de limpieza y lo guarda en sum3
    for(int i = 0 ; i <= limpieza ; i++)
			sum += limpieza[i].getCosto();
		//Ciclo que suma los valores de carnes y lo guarda en sum4
    for(int i = 0 ; i <= carnes ; i++)
			sum += carnes[i].getCosto();
	  //Total que suma el total de cuenta
    cout << sum << " \n";

}
#endif // SUPERMERCADO_H_
