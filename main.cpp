#include "Contact.h"
#include "Classmate.h"
#include "Relative.h"
#include "Lover.h"
#include "Friend.h"
#include "Partner.h"
#include "WorkPartner.h"
#include "Blocked.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;
int menu();
int main(int argc, char const *argv[]) {
	vector<Contact*> contactos;
	int opcion;
    do{
    	opcion = menu();
    	if (opcion == 1){
    		int select;
    		cout<<"----Categorías----"<<endl;
    		cout<<"1)Amigos"<<endl;
    		cout<<"2)Pareja"<<endl;
    		cout<<"3)Compañeros de trabajo"<<endl;
    		cout<<"4)Compañeros de clase"<<endl;
    		cout<<"5)Familiares"<<endl;
    		cout<<"6)Amantes"<<endl;
    		cout<<"7)Bloqueos"<<endl;
    		cout<<"Elija una opcion: "<<endl;
    		cin>>select;
    		string nombre;
    		string telefono;
    		string correo;
    		if(select == 1){
    			int nivel;
    			cout<<"Ingrese el nombre: ";
    			cin>>nombre;
    			cout<<"Ingrese el telefono: ";
    			cin>> telefono;
    			cout<<"Ingrese el correo: ";
    			cin>> correo;
    		}
    		else if(select == 2){
    			cout<<"Ingrese el nombre: ";
    			cin>>nombre;
    			cout<<"Ingrese el telefono: ";
    			cin>> telefono;
    			cout<<"Ingrese el correo: ";
    			cin>> correo;
    		}
    		else if(select == 3){
    			cout<<"Ingrese el nombre: ";
    			cin>>nombre;
    			cout<<"Ingrese el telefono: ";
    			cin>> telefono;
    			cout<<"Ingrese el correo: ";
    			cin>> correo;
    		}
    		else if(select == 4){
    			cout<<"Ingrese el nombre: ";
    			cin>>nombre;
    			cout<<"Ingrese el telefono: ";
    			cin>> telefono;
    			cout<<"Ingrese el correo: ";
    			cin>> correo;
    		}
    		else if(select == 5){
    			cout<<"Ingrese el nombre: ";
    			cin>>nombre;
    			cout<<"Ingrese el telefono: ";
    			cin>> telefono;
    			cout<<"Ingrese el correo: ";
    			cin>> correo;
    		}
    		else if(select == 6){
    			cout<<"Ingrese el nombre: ";
    			cin>>nombre;
    			cout<<"Ingrese el telefono: ";
    			cin>> telefono;
    			cout<<"Ingrese el correo: ";
    			cin>> correo;
    		}
    		else if(select == 7){
    			cout<<"Ingrese el nombre: ";
    			cin>>nombre;
    			cout<<"Ingrese el telefono: ";
    			cin>> telefono;
    			cout<<"Ingrese el correo: ";
    			cin>> correo;
    		}
    		else{
    			cout<<"Ingresó una opción inválida.";
    		}
    	}
    	else if(opcion == 2){

    	}
    	else if(opcion == 3){

    	}
    	else if(opcion == 4){

    	}else{
    		cout<<"Ingresó una opción inválida"<<endl;
    	}
    }while(opcion!= 5);

    return 0;
}
int menu(){
	int lectura;
	cout<<"-----Menu-----"<<endl;
	cout<<"1)Agregar Contactos"<<endl;
	cout<<"2)Eliminar Contactos"<<endl;
	cout<<"3)Imprimir Contactos"<<endl;
	cout<<"4)Exportar Lista de Contactos"<<endl;
	cout<<"5)Salir"<<endl;
	cout <<"Ingrese una opción: "<<endl;
	cin>>lectura;
	return lectura;
}