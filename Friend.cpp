#include "Friend.h"
#include <string>
using std::string;
Friend::Friend(string nombre,string telef, string correo, int num):Contact(nombre,telef,correo){
	flevel = num;
}