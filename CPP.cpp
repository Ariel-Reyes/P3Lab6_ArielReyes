#include "CPP.hpp"

CPP::CPP()
{
}

CPP::~CPP()
{
}

	CPP::CPP(int lineasCodigo,int numErrores,string nombre, string autor, FileSystemNode* padre) : Archivo(nombre,autor,padre){
		this->lineasCodigo = lineasCodigo; 
		this->numErrores = numErrores; 
	};
		
		void CPP::set_lineasCodigo(int lineasCodigo){
			this->lineasCodigo = lineasCodigo; 
		}; 
		int CPP::get_lineasCodigo(){
	            return this->lineasCodigo; 
		}; 
		
		void CPP::set_numErrores(int numErrores){
			this->numErrores = numErrores;
		};
		int CPP::get_numErrores(){
			return this->numErrores; 
		};  
		 void CPP::toString(){
		 	
		
		 cout<<"Lineas de codigo: "<<lineasCodigo<<" , "<<" Numero de errores: "<< numErrores;
			
		 }; 