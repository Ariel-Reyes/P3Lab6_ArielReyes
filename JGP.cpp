#include "JGP.hpp"


JGP::JGP(){
	
}

JGP::JGP(bool conFlash,string resolucion, double largo, double ancho) 
{
	this->conFlash = conFlash; 
		this->resolucion = resolucion; 
		this->largo = largo; 
		this->ancho = ancho; 
}

JGP::~JGP()
{
	
}


	
	 void JGP::set_Flash(bool x){
	 	this->conFlash = x; 
	 }; 
	 bool JGP::get_Flash(){
	 	return this->conFlash; 
	 }; 
	 
	 void JGP::set_Resolucion(string x){
	 	this->resolucion = x; 
	 };
	 string JGP::get_Resolucion(){
	 	return this->resolucion; 
	 };
	 
	 void JGP::set_largo(double x){
	 	this->largo = x;
	 }; 
	 double JGP::get_largo(){
	 	return this->largo; 
	 }; 
	  
	void JGP::set_ancho(double x){
		this->ancho = x;
	}; 
	double JGP::get_ancho(){
		return this->ancho; 
	}; 
	
	void JGP::toString(){
		cout<<"Con Flash: "<<conFlash<<" Resolucion: "<<resolucion<<" Largo: "<<largo<<" Ancho: "<<ancho<<endl; 
	}	
	
	