#include "PTT.hpp"

PTT::PTT()
{
}

PTT::~PTT()
{
}

 PTT::PTT(string titulo, int numSlides,int numPlantillas,bool tieneAnimacion,string nombre, string autor, FileSystemNode* padre) : Archivo(nombre,autor,padre) {
 	this->titulo = titulo; 
 	this->numSlides = numSlides; 
 	this->numPlantillas = numPlantillas; 
 	this->tieneAnimacion = tieneAnimacion; 
 };
        
		void  PTT::set_Titulo(string x){
			this->titulo =x; 
		}; 
        string PTT::get_Titulo(){
        	return this->titulo; 
		}; 
        
        void PTT::set_numSlides(int x){
        	this->numSlides = x;
		}; 
        int PTT::get_numSlides(){
        	return this->numSlides; 
		}; 
        
        void PTT::set_numPlantillas(int x){
        	this->numPlantillas = x; 
		}; 
        int PTT::get_numPlantillas(){
        	return this->numPlantillas; 
		}; 
        
        void PTT::set_Animacion(bool x){
        	this->tieneAnimacion = x; 
		}; 
        bool PTT::get_Animacion(){
        	return this->tieneAnimacion; 
		}; 
        
         void PTT::toString(){
         	cout<<"Titulo: "<<titulo<<" Numero de Slides: "<<numSlides<<" Numero de Plantillas: "<<numPlantillas<<" Tiene Animacion: "<<tieneAnimacion<<endl; 
		 }; 