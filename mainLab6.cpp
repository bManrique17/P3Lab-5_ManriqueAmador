#include <vector>
#include <string>
#include <iostream>
#include "Zoologico.h"
#include "Animal.h"
#include "Pata.h"
#include "Pelaje.h"
#include "Ojo.h"
#include "Oreja.h"
#include "Cola.h"

using namespace std;

int menu();
void crearZoologico();
void crearAnimal();
void llenarListas();
void eliminarDesdeLista();
void listarInvetario();
vector <Animal*> ordenarArreglo(vector <Animal*>);

Zoologico* zoologicoActual;
vector <Animal*> listaEspera;

int main(){
	int respuesta = 0;
	do{
		switch(menu()){
			case 1:
				crearZoologico();
				break;
			case 2:
				crearAnimal();
				break;
			case 3:
				llenarListas();
				break;
			case 4:
				eliminarDesdeLista();
				break;
			case 5:
				listarInvetario();
				break;
			case 6:
				cout<<"\n Cheque =)"<<endl;
				respuesta = 100;
				break;
		}
		if(respuesta==100)
			break;
	}while(true);

	//LIBERAR MEMORIA
	delete zoologicoActual;
	for(int i=0 ; i<listaEspera.size() ; i++){
		delete listaEspera[i];
		listaEspera[i] = NULL;
	}
	listaEspera.clear();

	for(int i=0 ; i<zoologicoActual->getListaArticos().size() ; i++){
		delete zoologicoActual->getListaArticos()[i];
		zoologicoActual->getListaArticos()[i] = NULL;
	}

	for(int i=0 ; i<zoologicoActual->getListaDeserticos().size() ; i++){
		delete zoologicoActual->getListaDeserticos()[i];
		zoologicoActual->getListaDeserticos()[i] = NULL;
	}

	for(int i=0 ; i<zoologicoActual->getListaJungleros().size() ; i++){
		delete zoologicoActual->getListaJungleros()[i];
		zoologicoActual->getListaJungleros()[i] = NULL;
	}

	for(int i=0 ; i<zoologicoActual->getListaSabaneros().size() ; i++){
		delete zoologicoActual->getListaSabaneros()[i];
		zoologicoActual->getListaSabaneros()[i] = NULL;
	}

	return 0;
}

int menu(){
	int respuesta;
	cout<<"    **MENU"<<endl
	<<"(1)Crear Zoologico"<<endl
	<<"(2)Crear Animal"<<endl
	<<"(3)Distribuir desde la lista de espera"<<endl
	<<"(4)Eliminar desde la lista de espera"<<endl
	<<"(5)Listar inventario"<<endl
	<<"(6)Salir"<<endl
	<<"->Ingrese su respuesta: ";
	cin>>respuesta;
	return respuesta;
}

void crearZoologico(){
	string nombre, tamano, capacidadPersonas;
	cout<<"\n    **Crear Zoologico"<<endl;
	cout<<"->Ingrese el nombre: ";
	cin>>nombre;
	cout<<"->Ingrese el tamaño: ";
	cin>>tamano;
	cout<<"->Ingrese la cantidad de personas: ";
	cin>>capacidadPersonas;
	cout<<"CREADO"<<endl;
	zoologicoActual = new Zoologico(nombre,tamano,capacidadPersonas);
}

void crearAnimal(){
	string especie,nombre,tamano,tipo;
	string cantidadPA,largoPA,tipoPA;
	string colorPE,grosorPE,largoPE;
	string colorOJ,largoCO;
	string tamanoOR,capacidadAudicionOR;
	bool visionNoctura,peluda;

	cout<<"\n    **Crear Animal"<<endl;
	cout<<"->Ingrese el nombre de especie: ";
	cin>>especie;
	cout<<"->Ingrese el nombre de animal: ";
	cin>>nombre;
	cout<<"->Ingrese el tamaño: ";
	cin>>tamano;

	//tipo de animal
	int resp;
	cout<<"->Seleccione el tipo de animal: "<<endl
	<<"(1)Artico"<<endl
	<<"(2)Desertico"<<endl
	<<"(3)Junglero"<<endl
	<<"(4)Sabanero"<<endl;
	cin>>resp;
	switch(resp){
		case 1:
			tipo = "Artico";
			break;
		case 2:
			tipo = "Desertico";
			break;
		case 3:
			tipo = "Junglero";
			break;
		case 4:
			tipo = "Sabanero";
			break;
	}
	//tipo de animal

	//PATA
	cout<<"->Ingrese cantidad de patas: ";
	cin>>cantidadPA;
	cout<<"->Ingrese el largo de las patas: ";
	cin>>largoPA;
	cout<<"->Ingrese el tipo de pata: ";
	cin>>tipoPA;
	//PELAJE
	cout<<"->Ingrese color de pelaje: ";
	cin>>colorPE;
	cout<<"->Ingrese el grosor del pelaje: ";
	cin>>grosorPE;
	cout<<"->Ingrese el largo del pelaje: ";
	cin>>largoPE;
	//OJO
	cout<<"->Ingrese color de ojo: ";
	cin>>colorOJ;
	cout<<"->Tiene vision(1-si || 0-no): ";
	cin>>visionNoctura;
	//OREJA
	cout<<"->Ingrese tamaño de la oreja: ";
	cin>>tamanoOR;
	cout<<"->Ingrese capacidad de audicion: ";
	cin>>capacidadAudicionOR;
	//COLA
	cout<<"->Ingrese el largo de la cola: ";
	cin>>largoCO;
	cout<<"-Es peluda(1-si || 0-no): ";
	cin>>peluda;
	cout<<"CREADO"<<endl;

	Pata* pata = new Pata(cantidadPA,largoPA,tipoPA);
	Pelaje* pelaje = new Pelaje(colorPE,grosorPE,largoPE);
	Ojo* ojo = new Ojo(colorOJ,visionNoctura);
	Oreja* oreja = new Oreja(tamanoOR,capacidadAudicionOR);
	Cola* cola = new Cola(largoCO,peluda);

	Animal* animal = new Animal(especie,nombre,tamano,tipo,pata,pelaje,ojo,oreja,cola);

	listaEspera.push_back(animal);
	
}

void llenarListas(){
	cout<<"		**Los animales han sido distribuidos"<<endl;
	for(int i=0 ; i<listaEspera.size() ; i++){
		if(listaEspera[i]->getTipo() == "Artico"){
			zoologicoActual->agregarArticos(listaEspera[i]);
		}
		if(listaEspera[i]->getTipo() == "Desertico"){
			zoologicoActual->agregarDeserticos(listaEspera[i]);
		}
		if(listaEspera[i]->getTipo() == "Junglero"){
			zoologicoActual->agregarJungleros(listaEspera[i]);
		}
		if(listaEspera[i]->getTipo() == "Sabanero"){
			zoologicoActual->agregarSabaneros(listaEspera[i]);
		}
	}
	listaEspera.clear();
}

void eliminarDesdeLista(){
	cout<<"\n	**Eliminar"<<endl;
	
	for(int i=1 ; i<=listaEspera.size() ; i++){
		cout<<"		"<<i<<">>"<<listaEspera[i-1]->toString()<<endl;
	}
	cout<<"\n->Ingrese el numero a eliminar: ";
	int indice;
	cin>>indice;
	indice--;
	if(indice<=0 || indice>listaEspera.size()-1 || listaEspera.empty()){
		cout<<"X Invalido"<<endl;
	}else{
		cout<<"ELIMINADO"<<endl;
		listaEspera.erase(listaEspera.begin()+indice,listaEspera.begin()+(indice+1));
	}
	
	
}

void listarInvetario(){
	vector <Animal*> temp;
	cout<<"\n	**Invetario"<<endl;

	cout<<"ARTICOS:"<<endl;
	temp = ordenarArreglo(zoologicoActual->getListaArticos());
	for(int i=0 ; i<temp.size() ; i++){
		cout<<"		-"<<temp[i]->getNombreAnimal()<<endl;
	}
	cout<<endl;

	cout<<"DESERTICOS:"<<endl;
	temp = ordenarArreglo(zoologicoActual->getListaDeserticos());
	for(int i=0 ; i<temp.size() ; i++){
		cout<<"		-"<<temp[i]->getNombreAnimal()<<endl;
	}
	cout<<endl;

	cout<<"DE JUNGLA:"<<endl;
	temp = ordenarArreglo(zoologicoActual->getListaJungleros());
	for(int i=0 ; i<temp.size() ; i++){
		cout<<"		-"<<temp[i]->getNombreAnimal()<<endl;
	}
	cout<<endl;

	cout<<"DE SABANA:"<<endl;
	temp = ordenarArreglo(zoologicoActual->getListaSabaneros());
	for(int i=0 ; i<temp.size() ; i++){
		cout<<"		-"<<temp[i]->getNombreAnimal()<<endl;
	}
	cout<<endl;
	cout<<"--Fin inventario--"<<endl;
}

vector <Animal*> ordenarArreglo(vector <Animal*> vectorAOrdenar){
	Animal* temp;

	for (int i=1; i<vectorAOrdenar.size(); i++){
    	for (int j=0 ; j<vectorAOrdenar.size() - 1; j++){
               if (vectorAOrdenar[j]->getNombreAnimal()[0] > vectorAOrdenar[j+1]->getNombreAnimal()[0]){
                    temp = vectorAOrdenar[j];
                    vectorAOrdenar[j] = vectorAOrdenar[j+1];
                  	vectorAOrdenar[j+1] = temp;
			   }
		}
	}

	for (int i=1; i<vectorAOrdenar.size(); i++){
    	for (int j=0 ; j<vectorAOrdenar.size() - 1; j++){
               if (vectorAOrdenar[j]->getNombreAnimal()[1] > vectorAOrdenar[j+1]->getNombreAnimal()[1]){
                    temp = vectorAOrdenar[j];
                    vectorAOrdenar[j] = vectorAOrdenar[j+1];
                  	vectorAOrdenar[j+1] = temp;
			   }
		}
	}
	return vectorAOrdenar;
}