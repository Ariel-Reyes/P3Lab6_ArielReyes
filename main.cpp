#include <iostream>
#include <string>
#include "FileSystemNode.hpp"
#include "Archivo.hpp"
#include "CPP.hpp"
#include "JGP.hpp"
#include "PTT.hpp"
#include <vector>
#include "Directorio.hpp"
#include "FileSystem.hpp"
using namespace std;
Directorio* dir = new Directorio();
int menu();
int main() {
	int opc = 0;
	while(opc!=5) {
		opc = menu();
	}

	return 0;
}

int menu() {

	int opc=0;
	cout<<"........Menu..........."<<endl;
	cout<<"1............... Imprimir FileSystem"<<endl;
	cout<<"2............... Agregar Directorios"<<endl;
	cout<<"3............... Agregar Archivos"<<endl;
	cout<<"4............... Buscar por Nombre"<<endl;
	cout<<"5............... Salir"<<endl;
	cout<<"Ingrese la opcion que desea: "<<endl;
	cin>>opc;

	switch(opc) {
		case 1: {
			return 1;
			break;
		}
		case 2: {
			return 2;
			break;
		}
		case 3: {

			cout<<"........Agregar Archivo......."<<endl;
			cout<<"1.................... CPP"<<endl;
			cout<<"2.................... PTT"<<endl;
			cout<<"3.................... JGP"<<endl;
			cout<<"Ingrese la opcion que desea: "<<endl;
			int op;
			cin>>op;

			switch(op) {
				case 1: {
					cout<<"......CPP........."<<endl;
					cout<<"Ingrese las lineas de codigo: "<<endl;
					int lineasCodigo;
					cin>>lineasCodigo;
					cout<<"Ingrese el numero de errores: "<<endl;
					int numErrores;
					cin>>numErrores;
					cout<<"Ingrese el nombre del autor: "<<endl;
					string autor;
					cin>>autor;
					cout<<"Ingrese el nombre del nodo"<<endl;
					string nombre;
					cin>>nombre;
					FileSystemNode* padre = new FileSystemNode(nombre,autor,padre);
					CPP* cpp = new CPP(lineasCodigo,numErrores,nombre,autor,padre);
					dir->agregarArchivo(cpp);


					break;
				}
				case 2: {
					cout<<"............PTT..........."<<endl;
					string titulo;
					int numSlides;
					int numPlantillas;
					bool tieneAnimacion;
					string nombre;
					string autor;
					FileSystemNode* padre;
					cout<<"Ingrese el titulo: "<<endl;
					cin>>titulo;
					cout<<"Ingrese el numero de slides: "<<endl;
					cin>>numSlides;
					cout<<"Ingrese el numero de plantillas: "<<endl;
					cin>>numPlantillas;
					cout<<"Tiene animacion? (1 = v) (2 = f)"<<endl;
					int deci;
					cin>>deci;
					if(deci==1) {
						tieneAnimacion = true;
					} else {
						tieneAnimacion = false;
					}

					cout<<"Ingrese el nombre del nodo: "<<endl;
					cin>>nombre;
					cout<<"Ingrese el nombre del autor: "<<endl;
					cin>>autor;

					FileSystemNode* pade = new FileSystemNode(nombre,autor,padre);
					PTT* ptt = new PTT(titulo,numSlides,numPlantillas,tieneAnimacion,nombre,autor,pade);
					dir->agregarArchivo(ptt);
					break;
				}
				case 3: {
					cout<<".........JGP..........."<<endl;
					bool conFlash;
					string resolucion;
					double largo;
					double ancho;
					cout<<"Tiene flash?: (1=v) (2=f): "<<endl;
					int dc1;
					cin>>dc1;
					if(dc1==1) {
						conFlash = true;
					} else {
						conFlash = false;
					}

                  cout<<"Ingrese el tipo de resolucion: "<<endl;
                  cin>>resolucion; 
                  cout<<"Ingrese el largo: "<<endl; 
                  cin>>largo; 
                  cout<<"Ingrese el ancho: "<<endl;
                  cin>>ancho; 
                string nombre;
				string autor;
				cout<<"Ingrese el nombre del nodo: "<<endl; 
				cin>>nombre; 
				cout<<"Ingrese el nombre del autor: "<<endl; 
				cin>>autor; 
	         FileSystemNode* padre = new FileSystemNode(nombre,autor,padre);
	          
                  dir->agregarArchivo(padre); 

					break;
				}
				default: {
					cout<<"ESA OPCION NO EXISTE"<<endl;
					break;
				}
			}


			return 3;
			break;
		}
		case 4: {
			return 4;
			break;
		}
		case 5: {
			cout<<"Adios..."<<endl;
			return 5;

			break;
		}

		default: {
			cout<<"Se equivoco de opcion "<<endl;
			return 0;
			break;
		}
	}
}

