#ifndef FILESYSTEM_HPP
#define FILESYSTEM_HPP
#include "Directorio.hpp"
class FileSystem {
	private:
		Directorio* root;
	public:
		FileSystem();
		~FileSystem();
		FileSystem(Directorio* root);
		void set_Root(Directorio* root);
		Directorio* get_Root();


};

#endif