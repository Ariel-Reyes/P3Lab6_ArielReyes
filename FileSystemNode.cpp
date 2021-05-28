#include "FileSystemNode.hpp"
#include <string>
#include <iostream>
using namespace std;
FileSystemNode::FileSystemNode() {
}

FileSystemNode::~FileSystemNode() {
}

FileSystemNode::FileSystemNode(string nombre,string autor,FileSystemNode* padre) {
	this->nombre = nombre;
	this->autor = autor;
	this->padre = padre;
};

 FileSystemNode::FileSystemNode(string nombre,string autor){
 	this->nombre = nombre; 
 	this->autor = autor; 
 };




void FileSystemNode::set_nombre(string nombre) {
	this->nombre = nombre;
};
string FileSystemNode::get_nombre() {
	return this->nombre;
};

void FileSystemNode::set_autor(string autor) {
	this->autor = autor;
};
string FileSystemNode::get_autor() {
	return this->autor;
};

void FileSystemNode::set_padre(FileSystemNode* x) {
	this->padre = x;
};
FileSystemNode* FileSystemNode::get_padre() {
	return this->padre;
};

void FileSystemNode::toString() {
 cout<<"0"<<endl; 
};