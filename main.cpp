#include "Contact.h"
#include "Classmate.h"
#include "Relative.h"
#include "Lover.h"
#include "Friend.h"
#include "Partner.h"
#include "WorkPartner.h"
#include "Blocked.h"
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <vector>
#include <typeinfo>

//using namespace std;

using namespace std;

void escribirArchivo(vector<Contact*> contactos);

int menu();

/*

vector<Contact*> contactos;
std::cout << "hola" << std::endl;

Contact* prueba = new Lover("hola","soy","yo","el duro");
contactos.push_back(prueba);
int i = 0;
while(contactos.at(i)!= NULL){
    Contact* temp = contactos.at(i);
    std::cout << temp->toString() << std::endl;
    i++;
}

*/



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
    			bool find = false;
    			int nivel;
    			cout<<"Ingrese el nombre: ";
    			cin>>nombre;
    			cout<<"Ingrese el telefono: ";
    			cin>> telefono;
    			for (int i = 0; i < contactos.size(); ++i)
    			{
    				if (contactos.at(i) -> getTel() == telefono)
    				{
    					find = true;
    				}
    			}
    			if (find){
    				cout<<"Se encontró el número de teléfono."<<endl;
    			}else{
    				cout<<"Ingrese el correo: ";
    				cin>> correo;
    				cout<<"Ingrese el nivel de amistad del 1no al 100: ";
    				cin>>nivel;
    				contactos.push_back(new Friend(nombre,telefono,correo,nivel));
    			}
    		}
    		else if(select == 2){
    			int numPareja = 0;
    			for (int i = 0; i < contactos.size(); ++i)
    			{
    				if (dynamic_cast<Partner*> (contactos.at(i))!=NULL)
	    			{
	    				numPareja++;
	    			}
    			}
    			if(numPareja < 1){
    				bool find = false;
	    			string date;
	    			cout<<"Ingrese el nombre: ";
	    			cin>>nombre;
	    			cout<<"Ingrese el telefono: ";
	    			cin>> telefono;
	    			for (int i = 0; i < contactos.size(); ++i)
	    			{
	    				if (contactos.at(i) -> getTel() == telefono)
	    				{
	    					find = true;
	    				}
	    			}
	    			if (find){
	    				cout<<"Se encontró el número de teléfono."<<endl;
	    			}else{
	    				cout<<"Ingrese el correo: ";
		    			cin>> correo;
		    			cout<<"Ingrese la fecha que comenzaron a salir: ";
		    			cin>>date;
		    			contactos.push_back(new Partner(nombre,telefono,correo,date));
	    			}
    			}else{
    				cout<<"Ya tienes una pareja, cochinote. Agrega amantes mejor (¬_¬)."<<endl;
    			}
    		}
    		else if(select == 3){
    			bool find = false;
    			string trabajo;
    			cout<<"Ingrese el nombre: ";
    			cin>>nombre;
    			cout<<"Ingrese el telefono: ";
    			cin>> telefono;
    			for (int i = 0; i < contactos.size(); ++i)
    			{
    				if (contactos.at(i) -> getTel() == telefono)
    				{
    					find = true;
    				}
    			}
    			if (find){
    				cout<<"Se encontró el número de teléfono."<<endl;
    			}else{
    				cout<<"Ingrese el correo: ";
	    			cin>> correo;
	    			cout<<"Ingrese el departamento de trabajo: ";
	    			cin>>trabajo;
	    			contactos.push_back(new WorkPartner(nombre,telefono,correo,trabajo));
    			}
    		}
    		else if(select == 4){
    			bool find = false;
    			string clase;
    			cout<<"Ingrese el nombre: ";
    			cin>>nombre;
    			cout<<"Ingrese el telefono: ";
    			cin>> telefono;
    			for (int i = 0; i < contactos.size(); ++i)
    			{
    				if (contactos.at(i) -> getTel() == telefono)
    				{
    					find = true;
    				}
    			}
    			if (find){
    				cout<<"Se encontró el número de teléfono."<<endl;
    			}else{
    				cout<<"Ingrese el correo: ";
	    			cin>> correo;
	    			cout<<"Ingrese la clase donde se conocieron: ";
	    			cin>>clase;
	    			contactos.push_back(new Classmate(nombre,telefono,correo,clase));;
    			}
    		}
    		else if(select == 5){
    			bool find = false;
    			string parentesco;
    			cout<<"Ingrese el nombre: ";
    			cin>>nombre;
    			cout<<"Ingrese el telefono: ";
    			cin>> telefono;
    			for (int i = 0; i < contactos.size(); ++i)
    			{
    				if (contactos.at(i) -> getTel() == telefono)
    				{
    					find = true;
    				}
    			}
    			if (find){
    				cout<<"Se encontró el número de teléfono."<<endl;
    			}else{
    				cout<<"Ingrese el correo: ";
    				cin>> correo;
    				cout<<"Ingrese parentesco: ";
    				cin>>parentesco;
    				contactos.push_back(new Relative(nombre,telefono,correo,parentesco));
    			}
    		}
    		else if(select == 6){
    			bool find = false;
    			string horario;
    			cout<<"Ingrese el nombre: ";
    			cin>>nombre;
    			cout<<"Ingrese el telefono: ";
    			cin>> telefono;
    			for (int i = 0; i < contactos.size(); ++i)
    			{
    				if (contactos.at(i) -> getTel() == telefono)
    				{
    					find = true;
    				}
    			}
    			if (find){
    				cout<<"Se encontró el número de teléfono."<<endl;
    			}else{
    				cout<<"Ingrese el correo: ";
	    			cin>> correo;
	    			cout<<"Ingrese horario disponible: ";
	    			cin>>horario;
	    			contactos.push_back(new Lover(nombre,telefono,correo,horario));
    			}
    		}
    		else if(select == 7){
    			bool find = false;
    			int nivel;
    			cout<<"Ingrese el nombre: ";
    			cin>>nombre;
    			cout<<"Ingrese el telefono: ";
    			cin>> telefono;
    			for (int i = 0; i < contactos.size(); ++i)
    			{
    				if (contactos.at(i) -> getTel() == telefono)
    				{
    					find = true;
    				}
    			}
    			if (find){
    				cout<<"Se encontró el número de teléfono."<<endl;
    			}else{
    				cout<<"Ingrese el correo: ";
	    			cin>> correo;
	    			cout<<"Ingrese nivel de odio del 1 al 100: ";
	    			cin>>nivel;
	    			contactos.push_back(new Blocked(nombre,telefono,correo,nivel));
    			}
    		}
    		else{
    			cout<<"Ingresó una opción inválida.";
    		}
    	}
    	else if(opcion == 2){
    		cout<<"-------Categorías-------"<<endl;
    		if (contactos.size() > 0){
    			cout<<"*****Amigos*****"<<endl;
    			for (int i = 0; i < contactos.size(); ++i){
	    			if (dynamic_cast<Friend*> (contactos.at(i))!=NULL)
	    			{
	    				cout<<i<<")"<<contactos.at(i) -> toString()<<endl;
	    			}
	    		}
	    		cout<<"*****Pareja*****"<<endl;
    			for (int i = 0; i < contactos.size(); ++i){
	    			if (dynamic_cast<Partner*> (contactos.at(i))!=NULL)
	    			{
	    				cout<<i<<")"<<contactos.at(i) -> toString()<<endl;
	    			}
	    		}
	    		cout<<"*****Compañero de Trabajo*****"<<endl;
    			for (int i = 0; i < contactos.size(); ++i){
	    			if (dynamic_cast<WorkPartner*> (contactos.at(i))!=NULL)
	    			{
	    				cout<<i<<")"<<contactos.at(i) -> toString()<<endl;
	    			}
	    		}
	    		cout<<"*****Compañero de clase*****"<<endl;
    			for (int i = 0; i < contactos.size(); ++i){
	    			if (dynamic_cast<Classmate*> (contactos.at(i))!=NULL)
	    			{
	    				cout<<i<<")"<<contactos.at(i) -> toString()<<endl;
	    			}
	    		}
	    		cout<<"*****Familiares*****"<<endl;
    			for (int i = 0; i < contactos.size(); ++i){
	    			if (dynamic_cast<Relative*> (contactos.at(i))!=NULL)
	    			{
	    				cout<<i<<")"<<contactos.at(i) -> toString()<<endl;
	    			}
	    		}
	    		cout<<"*****Amantes*****"<<endl;
    			for (int i = 0; i < contactos.size(); ++i){
	    			if (dynamic_cast<Lover*> (contactos.at(i))!=NULL)
	    			{
	    				cout<<i<<")"<<contactos.at(i) -> toString()<<endl;
	    			}
	    		}
	    		cout<<"*****Bloqueos*****"<<endl;
    			for (int i = 0; i < contactos.size(); ++i){
	    			if (dynamic_cast<Blocked*> (contactos.at(i))!=NULL)
	    			{
	    				cout<<i<<")"<<contactos.at(i) -> toString()<<endl;
	    			}
	    		}
	    		int posicion;
	    		cout<<"Ingrese la posición a eliminar: ";
	    		cin>>posicion;
	    		contactos.erase(contactos.begin()+posicion);
    		}else{
    			cout<<"No hay contactos en la lista"<<endl;
    		}
    	}
    	else if(opcion == 3){
            cout<<"-------Categorías-------"<<endl;
    		if (contactos.size() > 0){
    			cout<<"*****Amigos*****"<<endl;
    			for (int i = 0; i < contactos.size(); ++i){
	    			if (dynamic_cast<Friend*> (contactos.at(i))!=NULL)
	    			{
	    				cout<<i<<")"<<contactos.at(i) -> toString()<<endl;
	    			}
	    		}
	    		cout<<"*****Pareja*****"<<endl;
    			for (int i = 0; i < contactos.size(); ++i){
	    			if (dynamic_cast<Partner*> (contactos.at(i))!=NULL)
	    			{
	    				cout<<i<<")"<<contactos.at(i) -> toString()<<endl;
	    			}
	    		}
	    		cout<<"*****Compañero de Trabajo*****"<<endl;
    			for (int i = 0; i < contactos.size(); ++i){
	    			if (dynamic_cast<WorkPartner*> (contactos.at(i))!=NULL)
	    			{
	    				cout<<i<<")"<<contactos.at(i) -> toString()<<endl;
	    			}
	    		}
	    		cout<<"*****Compañero de clase*****"<<endl;
    			for (int i = 0; i < contactos.size(); ++i){
	    			if (dynamic_cast<Classmate*> (contactos.at(i))!=NULL)
	    			{
	    				cout<<i<<")"<<contactos.at(i) -> toString()<<endl;
	    			}
	    		}
	    		cout<<"*****Familiares*****"<<endl;
    			for (int i = 0; i < contactos.size(); ++i){
	    			if (dynamic_cast<Relative*> (contactos.at(i))!=NULL)
	    			{
	    				cout<<i<<")"<<contactos.at(i) -> toString()<<endl;
	    			}
	    		}
	    		cout<<"*****Amantes*****"<<endl;
    			for (int i = 0; i < contactos.size(); ++i){
	    			if (dynamic_cast<Lover*> (contactos.at(i))!=NULL)
	    			{
	    				cout<<i<<")"<<contactos.at(i) -> toString()<<endl;
	    			}
	    		}
	    		cout<<"*****Bloqueos*****"<<endl;
    			for (int i = 0; i < contactos.size(); ++i){
	    			if (dynamic_cast<Blocked*> (contactos.at(i))!=NULL)
	    			{
	    				cout<<i<<")"<<contactos.at(i) -> toString()<<endl;
	    			}
	    		}
    		}else{
    			cout<<"No hay contactos en la lista"<<endl;
    		}
    	}
    	else if(opcion == 4){
            escribirArchivo(contactos);
    	}else{
    		cout<<"Ingresó una opción inválida"<<endl;
    	}
    }while(opcion!= 5);
    	for (int i = 0; i < contactos.size(); ++i){
	    		contactos.erase(contactos.begin() + i);
	   	}
    	contactos.clear();
    return 0;
}

void escribirArchivo(vector<Contact*> contactos){

    ofstream salida;
    salida.open("Listado.txt");

    salida<<"-------Categorías-------"<<endl;
    salida<<endl;
    if (contactos.size() > 0){
        salida<<"*****Amigos*****"<<endl;
        for (int i = 0; i < contactos.size(); ++i){
            if (dynamic_cast<Friend*> (contactos.at(i))!=NULL)
            {
                salida<<i<<")"<<contactos.at(i) -> toString()<<endl;
                salida<<endl;

            }
        }
        salida<<"*****Pareja*****"<<endl;
        salida<<endl;

        for (int i = 0; i < contactos.size(); ++i){
            if (dynamic_cast<Partner*> (contactos.at(i))!=NULL)
            {
                salida<<i<<")"<<contactos.at(i) -> toString()<<endl;
                salida<<endl;

            }
        }
        salida<<"*****Compañero de Trabajo*****"<<endl;
        for (int i = 0; i < contactos.size(); ++i){
            if (dynamic_cast<WorkPartner*> (contactos.at(i))!=NULL)
            {
                salida<<i<<")"<<contactos.at(i) -> toString()<<endl;
            }
        }
        salida<<"*****Compañero de clase*****"<<endl;
        for (int i = 0; i < contactos.size(); ++i){
            if (dynamic_cast<Classmate*> (contactos.at(i))!=NULL)
            {
                salida<<i<<")"<<contactos.at(i) -> toString()<<endl;
                salida<<endl;

            }
        }
        salida<<"*****Familiares*****"<<endl;
        for (int i = 0; i < contactos.size(); ++i){
            if (dynamic_cast<Relative*> (contactos.at(i))!=NULL)
            {
                salida<<i<<")"<<contactos.at(i) -> toString()<<endl;
                salida<<endl;
            }
        }
        salida<<"*****Amantes*****"<<endl;
        for (int i = 0; i < contactos.size(); ++i){
            if (dynamic_cast<Lover*> (contactos.at(i))!=NULL)
            {
                salida<<i<<")"<<contactos.at(i) -> toString()<<endl;
                salida<<endl;

            }
        }
        salida<<"*****Bloqueos*****"<<endl;
        for (int i = 0; i < contactos.size(); ++i){
            if (dynamic_cast<Blocked*> (contactos.at(i))!=NULL)
            {
                salida<<i<<")"<<contactos.at(i) -> toString()<<endl;
                salida<<endl;

            }
        }

    salida.close();


    }
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
