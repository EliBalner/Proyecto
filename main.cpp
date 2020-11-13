/*
 * Proyecto Comparación Precios Mercados
 * Eliuth Balderas Neri
 * A01703315
 * 13/11/2020
 */

/**
 * Descripcion del proyecto de Pensamiento
 * Computacional Orientado a Objetos: Programa que le permite a un usuario comparar los diferentes precios que manejan 
 * los supermercados para que de esta manera, le permita saber en dónde es mejor comprar.
*/

//Bibliotecas
#include <iostream>   //Esta permite imprimir.
#include "SuperMercado.h" //Aquí se encuentran los objetos del proyecto.
#include "Producto.h" //Aquí se encuentran los objetos del proyecto.
#include "Costo.h" //Aquí se encuentran los objetos del proyecto.

using namespace std;

//Se muestra un menú  (En este caso es un ejemplo
void menu(){

    //Imprime las opciones que va a tener el sistema
    cout << "Menu:\n";
    cout << "1. Productos. \n";
    cout << "2. Costo de productos. \n";
    cout << "3. Calcular cuenta. \n";
    cout << "4. Salir \n";
}

int main(int argc, char* argv[]){

  	SuperMercado supermercado;
  	SuperMercado.CreaEjemploProductos();
  	SuperMercado.CreaEjemploCosto();
	SuperMercado.CuentaTotal();
 // 	string temp_nombre;

    int opcion = 0, Productos = 0, Costo = 0, total = 0;

    //El ciclo sigue hasta que se de opción de salir.
    while(opcion < 4){

  		//Se imprime menú.
  		menu();
  		cin >> opcion;

  		//Switch para realizar procedimiento correspondiente{

  			case 1:
          SuperMercado.CreaEjemploProductos();
  			  break;

  			case 2:
          SuperMercado.CreaEjemploCosto);
  			  break;
			  
  			case 3:
          SuperMercado.SacaCuenta();
  			  break;

  		}
    }
}