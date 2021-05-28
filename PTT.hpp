#ifndef PTT_HPP
#define PTT_HPP
#include "Archivo.hpp"
class PTT : public Archivo
{
	private: 
	string titulo; 
	 int numSlides;
	 int numPlantillas;
	 bool tieneAnimacion; 
	
	public:
		 PTT();
		~PTT();
         PTT(string titulo, int numSlides,int numPlantillas,bool tieneAnimacion,string nombre, string autor, FileSystemNode* padre);
        
		void set_Titulo(string x); 
        string get_Titulo(); 
        
        void set_numSlides(int x); 
        int get_numSlides(); 
        
        void set_numPlantillas(int x); 
        int get_numPlantillas(); 
        
        void set_Animacion(bool x); 
        bool get_Animacion(); 
        
        virtual void toString(); 
};

#endif