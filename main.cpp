#include <iostream>
#include <string>
using namespace std; 
int menu(); 
int main() {
	int opc = 0; 
	while(opc!=5){
		opc = menu(); 
	}
	
	return 0;
}

int menu(){
	
	int opc=0;
	cout<<"........Menu..........."<<endl; 
	cout<<"1............... Imprimir FileSystem"<<endl; 
	cout<<"2............... Agregar Directorios"<<endl; 
	cout<<"3............... Agregar Archivos"<<endl; 
	cout<<"4............... Buscar por Nombre"<<endl; 
	cout<<"5............... Salir"<<endl;
	cout<<"Ingrese la opcion que desea: "<<endl; 
	cin>>opc; 
	
	switch(opc){
		case 1:{
			return 1;
			break;
		}
		case 2:{
			return 2; 
			break;
		}
		case 3:{
			return 3; 
			break;
		}
		case 4:{
			return 4;
			break;
		}
		case 5:{
			cout<<"Adios..."<<endl;
			return 5; 
			
			break;
		}
		
		default:{
			cout<<"Se equivoco de opcion "<<endl;
			return 0;  
			break;
		}
		
		
		
	}
}

