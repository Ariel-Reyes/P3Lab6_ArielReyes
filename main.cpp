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
FileSystem* dire = new FileSystem();
vector<FileSystemNode*> d;
vector<Directorio*> dire_list;
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
			int s=  dir->get_hijos().size();
			cout<<s<<endl;

			return 1;
			break;
		}
		case 2: {
			if(d.size()==0){
				cout<<"Aun no hay Files"<<endl; 
			} else {
			
			int in=0;
			Directorio* aux = new Directorio();
			while(in!=1) {

				cout<<"......Agregar Directorios........"<<endl;
				for(int i=0; i<d.size(); i++) {
					FileSystemNode* cpp = dynamic_cast<CPP*>(d[i]);
					FileSystemNode* ptt = dynamic_cast<PTT*>(d[i]);
					FileSystemNode* jgp = dynamic_cast<JGP*>(d[i]);
					if(cpp) {
						CPP* a = static_cast<CPP*>(d[i]);
						cout<<i<<") "<<"Lineas de codigo: "<<a->get_lineasCodigo()<<" Numero de errores: "<<a->get_numErrores()<<" Nombre Autor"<<a->get_autor()<<" Nombre de Nodo: "<<a->get_nombre()<<endl;
					}

					if(ptt) {
						PTT* b = static_cast<PTT*>(d[i]);
						cout<<i<<") "<<"Numero de plantillas: "<<b->get_numPlantillas()<<" Numero slides: "<<b->get_numSlides()<<"Nombre de nodo: "<<b->get_nombre()<<"Nombre autor: "<<b->get_autor()<<"Animada"<<b->get_Animacion()<<endl;
					}

					if(jgp) {
						JGP* c = static_cast<JGP*>(d[i]);
						cout<<i<<") "<<"El ancho"<<c->get_ancho()<<" El largo"<<c->get_largo()<<" Flash: "<<c->get_Flash()<<endl;
					}

				}
				cout<<"Ingrese el indice del archivo para el directorio: "<<endl;
				int inde;
				cin>>inde;
				aux->agregarArchivo(d[inde]);
				cout<<"1 = salir , otro numero continuar: "<<endl;
				cin>>in;
			}
			dire_list.push_back(aux);
		}
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
					d.push_back(cpp);



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
					d.push_back(ptt);
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
					JGP* jgp = new JGP(conFlash,resolucion,largo,ancho);
					d.push_back(jgp);
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
			cout<<"Ingrese la palabra a Buscar: "<<endl;
			string x;
			cin>>x;
			dir->BuscarPorNombre(x);
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

