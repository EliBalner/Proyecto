/*
 * Proyecto Comparación Precios Mercados
 * Eliuth Balderas Neri
 * A01703315
 * 04/12/2020
 */

/**
 * Descripcion del proyecto de Pensamiento
 * Computacional Orientado a Objetos: Programa que le permite a un usuario comparar los diferentes precios que manejan
 * los supermercados para que de esta manera, le permita saber en dónde es mejor comprar.
*/

//Bibliotecas
//Esta permite imprimir.
#include <iostream>
//Aquí se encuentran los objetos del proyecto.
#include "SuperMercado.h"
//Aquí se encuentran los objetos del proyecto.
#include "Producto.h"

using namespace std;

//Se muestra un menú  (En este caso es un ejemplo
void menu(){

    //Imprime las opciones que va a tener el sistema
    cout << "Menu:\n";
    cout << "1. Productos. \n";
    cout << "2. Costo de productos. \n";
    cout << "3. Calcular cuenta. \n";
    cout << "4. Agrega productos. \n";
	cout << "5. Salir. \n";
}

int main(){

  	SuperMercado superMercado;
  	SuperMercado.creaEjemploProductos();
  	SuperMercado.creaEjemploCosto();
	  SuperMercado.mostrarCuentaTotal();
	  string temp_nombreProducto;
	  float temp_costo;


    int opcion = 0, Productos = 0, Costo = 0, total = 0;

    //El ciclo sigue hasta que se de opción de salir.
    while(opcion < 4 && opcion>-1){

  		//Se imprime menú.
  		menu();
		//Lee el indice que se selecciona con opcion del menu
  		cin >> opcion;

  		//Switch para realizar procedimiento correspondiente{

  			//Caso 8 Crea ejemplos de productos
			case 1:
          SuperMercado.creaEjemploProductos();
  			  break;

			//Caso 2 Crea los ejemplos de costo
  		case 2:
          SuperMercado.creaEjemploCosto();
  			  break;

  			//Caso 8 Calcula la cuenta total
			case 3:
          SuperMercado.mostrarCuentaTotal();
  			  break;

			//Caso 4, en donde se agregan productos.
			case 4:
  		  cout<< "Producto " ;
  		  cin >> temp_nombre;
  	   	  cout<< "Costo " ;
  		  cin >> temp_costo;
  	  	  empresa.agregaProducto(temp_nombre, temp_costo);
  			  break;
          }
    } 
}