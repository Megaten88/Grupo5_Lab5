#include "Friend.h"
#include "Contact.h"
#include <string>
using std::string;
Friend::Friend(string nombre,string telef, string correo, int nivel):Contact(nombre,telef,correo){
	Friend::setFlevel(nivel);
}
Friend::~Friend(){

}
void Friend::setFlevel(int nivel){
	if (nivel>= 0 && nivel<= 100)
	{m
		flevel = nivel;
	}else{
		flevel = nivel;
	}
}
int Friend::getFlevel(){
	return flevel;
}
