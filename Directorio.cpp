#include "Directorio.hpp"
	Directorio::Directorio(){
	};
	Directorio::~Directorio(){
		
	}; 
	Directorio::Directorio(vector<FileSystemNode*> hijo){
		this->hijo = hijo; 
	};
	
	void Directorio::imprimir_recursivos(int x){
		
	};
	void Directorio::agregarArchivo(FileSystemNode* x){
       hijo.push_back(x); 
	}; 
	void Directorio::agregarDirectorio(FileSystemNode* x){
	hijo.push_back(x); 
	}	
	void Directorio::BuscarPorNombre(string x){
		
	};
	
	