#include "FileSystem.hpp"

FileSystem::FileSystem()
{
}

FileSystem::~FileSystem()
{
}

FileSystem::FileSystem(Directorio* root){
	this->root = root; 
};

		
		void FileSystem::set_Root(Directorio* root){
			this->root = root; 
		}; 
		Directorio* FileSystem::get_Root(){
			return this->root;
		}; 
		
	