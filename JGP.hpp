#ifndef JGP_HPP
#define JGP_HPP
#include "Archivo.hpp"
#include "FileSystemNode.hpp"
#include <string>
class JGP : public Archivo
{
	private: 
	bool conFlash; 
	string resolucion; 
	 double largo; 
	 double ancho; 
	public:
		JGP();
		~JGP();
		JGP(bool conFlash,string resolucion, double largo, double ancho);
	
	 void set_Flash(bool x); 
	 bool get_Flash(); 
	 
	 void set_Resolucion(string x);
	 string get_Resolucion();
	 
	 void set_largo(double x); 
	 double get_largo(); 
	  
	void set_ancho(double x); 
	double get_ancho(); 
	
	virtual void toString(); 
	 
	
	
};

#endif