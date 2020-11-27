#include<iostream>
#include<stlib.h>
using namespace std;

class Productos{
	private: //Atributos
		int costo;
		string nombreProducto;
		int codigo;
	public: //Métodos
		Productos(int,string,int); //Constructor
		void getCosto();
		void getNombreProducto();
		void getCodigo();
};

class Limpieza:public Productos{
	private: //Atributos
		int cantidad;
	public: //Métodos
		Limpieza(int,string,int,int); //Constructor de la clase limpieza
		void fabricar();
};

class Frutas_Verduras:public Productos{
	private: //Atributos
		int piezas;
	public: //Métodos
		Frutas_Verduras(int,string,int,int); //Constructor de la clase Frutas_Verduras
		void recolectar();
};

class Carnes:public Productos{
	private: //Atributos
		int peso;
		string tipoCarne;
	public: //Métodos
		Carnes(int,string,int,int,string); //Constructor de la clase Carnes
		void cortar();
};

class Cereales:public Productos{
	private: //Atributos
		string tamanioCeral;
	public: //Métodos
		Carnes(int,string,int,string); //Constructor de la clase Cereales
		void freir();
};


//Constructos de la clase Producto (Clase Padre)
Persona::Persona(string _costo, string _nombreProducto, int _codigo){
	costo=_costo
	nombreProducto=_nombreProducto
	codigo=_codigo
}

Limpieza::Limpieza(string _costo, string _nombreProducto, int _codigo, int _piezas): Prodcto(_costo, _nombreProducto, _codigo){
	piezas= _piezas;
}

Frutas_Verduras::Frutas_Verduras(string _costo, string _nombreProducto, int _codigo, int _cantidad): Prodcto(_costo, _nombreProducto, _codigo){
	cantidad= _cantidad;
}

Carnes::Carnes(string _costo, string _nombreProducto, int _codigo, int _peso, string _tipoCarne): Prodcto(_costo, _nombreProducto, _codigo){
	peso= _peso;
	tipoCarne=_tipoCarne
}

Cereales::Cereales(string _costo, string _nombreProducto, int _codigo, string _tamanioCereal): Prodcto(_costo, _nombreProducto, _codigo){
	tamanioCereal= _tamanioCereal
}
void Producto::getCosto(){
	cout<<"El costo es: "<<costo<<endl;
}
void Producto::getNombreProducto()
	cout<<"Producto: "<<nombreProducto<<endl;
}
void Producto::getCodigo(){
	cout<<"El código es : "<<codigo<<endl;
}

void Limpieza:fabricar(){
	getCosto();
	getNombreProducto();
	getCodigo();
	cout<<"Se está fabricando "<<piezas<<"piezas de "<<nombreProducto<<endl;
}

void Frutas_Verduras:recolectar(){
	getCosto();
	getNombreProducto();
	getCodigo();
	cout<<"Se está recolectando "<<cantidad<<"de "<<nombreProducto<<endl;
}

void Carnes:cortar(){
	getCosto();
	getNombreProducto();
	getCodigo();
	cout<<"Se está cortando su carne "<<tipoCarne<<endl;
}

void Cereales:freir(){
	getCosto();
	getNombreProducto();
	getCodigo();
	cout<<"Se está friendo su cereal "<<tamanioCereal<<endl;
}

int main(){
	Limpieza limpieza1(20,"Salvo", 7384,2);
	limpieza1.fabricar();
	
	Frutas_Verduras frutas_Verduras1(55,"Manzana", 3819,1);
	frutas_Verduras1.recolectar();
	
	Carnes carnes1(201,"Carne", 3827,2,"Arrachera");
	carnes1.cortar();
	
	Cereales cereales1(62,"Chocos", 9583,"Grande");
	cereales1.freir();
	
	system("pausa");
	return 0;
	
}
	