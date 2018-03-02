#include <string>
#include "Animal.h"
#include <sstream>

using namespace std;

Animal::Animal(){}

Animal::Animal(string nombreEspecie,string nombreAnimal,
string tamano,string tipo ,Pata* 
pata,Pelaje* pelaje,Ojo* ojo,Oreja* oreja,Cola* cola){
    this->nombreEspecie = nombreEspecie;
    this->nombreAnimal = nombreAnimal;
    this->tamano = tamano;
    this->tipo = tipo;
    this->pata = pata;
    this->pelaje = pelaje;
    this->ojo = ojo;
    this->oreja = oreja;
    this->cola = cola;
}

string Animal::getNombreAnimal(){
    return nombreAnimal;    
}

string Animal::toString(){
    string retValue;
    stringstream str;
    str<<"Especie:"<<nombreEspecie<<"|Nombre:"<<nombreAnimal<<
    "|Tamaño:"<<tamano<<"|Tipo:"<<tipo;
    str>>retValue;
    return retValue;
}

string Animal::getTipo(){
    return tipo;
}

Animal::~Animal(){

}


