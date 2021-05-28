#ifndef CPP_HPP
#define CPP_HPP
#include "Archivo.hpp"
class CPP : public Archivo {
	private:
		int lineasCodigo;
		int  numErrores;
	public:
		CPP();
		~CPP();
		CPP(int,int,string nombre, string autor, FileSystemNode* padre);

		void set_lineasCodigo(int);
		int get_lineasCodigo();

		void set_numErrores(int);
		int get_numErrores();
		virtual void toString();

};

#endif