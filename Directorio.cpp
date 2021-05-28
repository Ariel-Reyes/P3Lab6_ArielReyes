#include "Directorio.hpp"
Directorio::Directorio() {
};
Directorio::~Directorio() {

};
Directorio::Directorio(vector<FileSystemNode*> hijo) {
	this->hijo = hijo;
};

void Directorio::imprimir_recursivos(int x) {

};
void Directorio::agregarArchivo(FileSystemNode* x) {
	hijo.push_back(x);
};
void Directorio::agregarDirectorio(FileSystemNode* x) {
	hijo.push_back(x);
}
void Directorio::BuscarPorNombre(string x) {
	string nombre_nodo =""; 
	string nombre_cpp =""; 
  for(int i=0;i<hijo.size();i++){
  	FileSystemNode* fy = hijo[i]; 
  	 nombre_nodo = fy->get_nombre(); 
  	
  	if(nombre_nodo.find(x) == string::npos){
  		
	  } else {
	  	cout<<"Autor: "<<fy->get_autor()<<" Nodo: "<<fy->get_nombre()<<endl; 
	  }
  }
 
 
 
};

