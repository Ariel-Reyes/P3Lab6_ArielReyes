#ifndef ARCHIVO_HPP
#define ARCHIVO_HPP
#include "FileSystemNode.hpp"
#include <string>
#include <iostream>
using namespace std; 

class Archivo : public FileSystemNode
{
	
	private:
		string nombre; 
	
	public:
		Archivo();
		~Archivo();
		Archivo(string nombre, string autor,FileSystemNode* padre);
	 virtual void toString(); 
};

#endif