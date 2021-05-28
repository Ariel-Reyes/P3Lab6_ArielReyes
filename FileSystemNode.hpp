#ifndef FILESYSTEMNODE_HPP
#define FILESYSTEMNODE_HPP
#include <string>
#include <iostream>
using namespace std;
class FileSystemNode {
	protected:
		string nombre;
		string autor;
		FileSystemNode* padre;
	public:
		FileSystemNode();
		FileSystemNode(string nombre,string autor);
		~FileSystemNode();
		FileSystemNode(string nombre,string autor,FileSystemNode* padre);

		void set_nombre(string);
		string get_nombre();

		void set_autor(string);
		string get_autor();

		void set_padre(FileSystemNode*);
		FileSystemNode* get_padre();

		virtual void toString();

};

#endif