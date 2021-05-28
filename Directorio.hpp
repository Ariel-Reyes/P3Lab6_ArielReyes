#ifndef DIRECTORIO_HPP
#define DIRECTORIO_HPP
#include "Archivo.hpp"
#include "FileSystemNode.hpp"
#include <vector>

class Directorio : public Archivo {

	private:
		vector<FileSystemNode*> hijo;
	public:
		Directorio();
		~Directorio();
		Directorio(vector<FileSystemNode*> hijo);
		void imprimir_recursivos(int x);
		void agregarArchivo(FileSystemNode*);
		void agregarDirectorio(FileSystemNode*);
		void BuscarPorNombre(string);



};




#endif
