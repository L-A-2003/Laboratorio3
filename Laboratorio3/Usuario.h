#ifndef USUARIO_H
#define USUARIO_H
#include<string>

using namespace std;

class Usuario {
public:
	Usuario();
	Usuario(string, string);
	string getEmail();
	string getClave();
	void setEmail(string);
	void setClave(string);
	~Usuario();
private:
	string email;
	string clave;
};

#endif

