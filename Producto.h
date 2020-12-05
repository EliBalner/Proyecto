/*
 * Proyecto Comparación Precios Mercados
 * Eliuth Balderas Neri
 * A01703315
 * 04/12/2020
 */

/*
 * Clase Producto contiene los métodos genéricos para el manejo de todos los productos disponibles.
 * esta, consta de 4 clases hijas que son tipos de productos:
 * Frutas_Verduras, Carnes, Cereales, Limpieza.
 *
*/

#ifndef PRODUCTO_H_
#define PRODUCTO_H_
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

//Decaracion de la clase Producto, es abstracta. Nombre de la clase 
class Producto {

	//Atributos.
    protected: 
		int codigo;
		float costo;
		string nombreProducto;

	//Métodos del objeto. 
    public : 
        Producto();
		Producto(int codigo, float costo, string nombreProducto);
		int getCodigo();
		string getNombreProducto();
		string toString()const;
		float getCosto();
};


/**
 * Constructor por default
 *
 * @param
 * @return Objeto Producto
*/
 
Producto::Producto(){
    codigo=0;
    nombreProducto="";
    costo=0;
}
 
/**
 * Constructor en donde se reciben valores, que llenan variables de instancia.
 *
 * @param int _codigo: el código del empleado, float _costo: el costo del producto, string _nombreProducto: el nombre del producto.
 * @return
*/

Producto::Producto(int _codigo, float _costo, string _nombreProducto){
	codigo=_codigo;
	nombreProducto=_nombreProducto;
	costo=_costo;
}

 
/**
 * Almacenda los valores de las variables de la instancia en una cadena de texto.
 *
 * @param
 * @return string con los datos del producto.
*/
string Producto::toString()const{
	stringstream aux;
	aux<<"el código de barras es: "<< codigo<< "su costo es: "<<costo<<"\n";
    return aux.str();
}

//Declaración de la clase Limpieza que hereda atributos y métodos de la clase Producto.
class Limpieza:public Producto{
	//Atributos
	private: 
		int cantidad;
	//Métodos
	public: 
		//Constructor de la clase limpieza
		Limpieza(int codigo, float costo, string nombreProducto,int cantidad); 
		void fabricar();
        int getCantidad();
		int getCodigo();
		string getNombreProducto();
		string toString()const;
};

//Getter de cantidad

/**
 * getter cantidad
 *
 * @param
 * @return int: cantidad de producto.
*/
int Limpieza::getCantidad(){
    return cantidad;
}

//Declaración de Frutas_Verduras que hereda atributos y métodos de Producto
class Frutas_Verduras:public Producto{
	//Atributos
	private: 
		int piezas;
	//Métodos
	public: 
		//Constructor de la clase Frutas_Verduras,
		Frutas_Verduras(int codigo, float costo, string nombreProducto,int piezas); 
		void recolectar();
		int getCodigo();
        int getPiezas();
		string getNombreProducto();
		string toString()const;
};

/**
 * getter cantidad
 *
 * @param
 * @return int: cantidad de piezas.
*/
int Frutas_Verduras::getPiezas(){
    return piezas;
}

//Decaracion de clase Carnes que hereda atributos y métodos de clase Porducto
class Carnes:public Producto{
	//Atributos
	private: 
		int peso;
		string tipoCarne;
	//Métodos
	public: 
		//Constructor de la clase Carnes
		Carnes(int codigo, float costo, string nombreProducto,int peso, string tipoCarne); 
		void cortar();
		int getCodigo();
        int getPeso();
        string getTipoCarne();
		string getNombreProducto();
		string toString()const;
};

/**
 * getter cantidad
 *
 * @param
 * @return string: tipo de carne.
*/
string Carnes::getTipoCarne(){
    return tipoCarne;
}

/**
 * getter cantidad
 *
 * @param
 * @return int: peso de carne.
*/
int Carnes::getPeso(){
    return peso;
}

//Declaración de clase Cereales que hereda atributos y métodos de clase Producto
class Cereales:public Producto{
	//Atributos
	private: 
		string tamanioCereal;
	//Métodos
	public: 
		//Constructor de la clase Cereales
		Cereales(int codigo, float costo, string nombreProducto,string tamanioCereal); 
		void freir();
		int getCodigo();
		string getNombreProducto();
        string getTam();
		string toString()const;
};

/**
 * getter cantidad
 *
 * @param
 * @return string: tamaño de cereal.
*/
string Cereales::getTam(){
    return tamanioCereal;
}

/**
 * Constructor que recibe codigo, costo, nombreProducto y cantidad
 *
 * @param int _codigo: codiogo del producto (limpieza), float _costo: costo del producto (limpieza),
 *        string _nombreProducto: nombre del producto (limpieza), int _cantidad: cantidad de productos (limpieza),
 * @return Objeto Limpieza
*/
Limpieza::Limpieza(int _codigo, float _costo, string _nombreProducto,int _cantidad){
    codigo = _codigo;
    costo = _costo;
    nombreProducto = _nombreProducto;
	cantidad= _cantidad;
}

/**
 * Constructor que recibe codigo, costo, nombreProducto y piezas
 *
 * @param int _codigo: codiogo del producto (frutas_verduras), float _costo: costo del producto (frutas_verduras),
 *        string _nombreProducto: nombre del producto (frutas_verduras), int _piezas: cantidad de productos (frutas_verduras),
 * @return Objeto Frutas_Verduras
*/
Frutas_Verduras::Frutas_Verduras(int _codigo, float _costo, string _nombreProducto,int _piezas){
	codigo = _codigo;
    costo = _costo;
    nombreProducto = _nombreProducto;
	piezas= _piezas;
}

/**
 * Constructor que recibe codigo, costo, nombreProducto, peso y tipoCarne
 *
 * @param int _codigo: codiogo del producto (Carnes), float _costo: costo del producto (Carnes),
 *        string _nombreProducto: nombre del producto (Carnes), int _peso: peso de la carnes,
 * 		  string _tipoCarne:tipo de la carne.
 * @return Objeto Limpieza
*/
Carnes::Carnes(int _codigo, float _costo, string _nombreProducto,int _peso, string _tipoCarne){
    codigo = _codigo;
    costo = _costo;
    nombreProducto = _nombreProducto;
	peso= _peso;
	tipoCarne=_tipoCarne;
}

/**
 * Constructor que recibe codigo, costo, nombreProducto y tamanioCereal
 *
 * @param int _codigo: codiogo del producto (cereal), float _costo: costo del producto (limpieza),
 *        string _nombreProducto: nombre del producto (cereal), string _tamanioCereal:tamaño del cereal,
 * @return Objeto Limpieza
*/
Cereales::Cereales(int _codigo, float _costo, string _nombreProducto,string _tamanioCereal){
    codigo = _codigo;
    costo = _costo;
    nombreProducto = _nombreProducto;
	tamanioCereal= _tamanioCereal;
}

//Getter de costo

/**
 * getter Costo
 *
 * @param
 * @return float: costo del producto.
*/
float Producto::getCosto(){
	return costo;
}

//Getter de nombreProducto

/**
 * getter nombreProducto
 *
 * @param
 * @return string: nombre del Producto
*/
string Producto::getNombreProducto(){
	return nombreProducto;
}

//Getter de código

/**
 * getter Codigo
 *
 * @param
 * @return int: codigo del producto
*/
int Producto::getCodigo(){
	return codigo;
}

/**
 * Utiliza arreglo de Producto.
 * Recibe el codigo, nombre, costo y cantidad.
 *
 * @param
 * @return
 */
//Fabrica los objetos de limpeiza.
void Limpieza::fabricar(){
	cout<<"Su producto de limpieza con código: "<<getCodigo()<<"y nombre: "<<getNombreProducto()<<" costo: "<<getCosto()<<"Total piezas: "<<getCantidad()<<"Se está fabricando "<<endl;
}

/**
 * Utiliza arreglo de Producto.
 * Recibe el codigo, nombre, costo, piezas.
 *
 * @param
 * @return
 */
void Frutas_Verduras::recolectar(){
	cout<<"sus frutas con código: "<<getCodigo()<<"y nombre: "<<getNombreProducto()<<"y costo: "<<getCosto()<<"Cantidad: "<<getPiezas()<<"Se está recolectando "<<endl;
}

/**
 * Utiliza arreglo de Producto.
 * Recibe el codigo, nombre, costo, peso y tipoCarne.
 *
 * @param
 * @return
 */
void Carnes::cortar(){
	cout<<"la carne con código: "<<getCodigo()<<"y nombre: "<<getNombreProducto()<<"y costo: "<<getCosto()<<"Tipo: "<<getTipoCarne()<<"Se está cortando "<<endl;
}

/**
 * Utiliza arreglo de Producto.
 * Recibe el codigo, nombre, costo, tamaño.
 *
 * @param
 * @return
 */
void Cereales::freir(){
	cout<<"el cereal con código: "<<getCodigo()<<"y nombre: "<<getNombreProducto()<<"y costo: "<<getCosto()<<"Se está friendo su cereal "<<getTam()<<endl;
}

#endif