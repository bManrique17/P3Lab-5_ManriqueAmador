#include <string>
#include "Zoologico.h"
#include <sstream>

using namespace std;

Zoologico::Zoologico(){}

Zoologico::Zoologico(string nombre, string tamano, 
string capacidadPersonas){
    this->nombre = nombre;
    this->tamano = tamano;
    this->capacidadPersonas = capacidadPersonas;
}

string Zoologico::toString(){
    return nombre;
}

void Zoologico::agregarArticos(Animal* animal){
    listaArticos.push_back(animal);
}

void Zoologico::agregarDeserticos(Animal* animal){
    listaDeserticos.push_back(animal);
}

void Zoologico::agregarJungleros(Animal* animal){
    listaJungleros.push_back(animal);
}

void Zoologico::agregarSabaneros(Animal* animal){
    listaSabaneros.push_back(animal);
}

vector<Animal*> Zoologico::getListaArticos(){
    return listaArticos;
}

vector<Animal*> Zoologico::getListaDeserticos(){
    return listaDeserticos;
}

vector<Animal*> Zoologico::getListaJungleros(){
    return listaJungleros;
}

vector<Animal*> Zoologico::getListaSabaneros(){
    return listaSabaneros;
}

Zoologico::~Zoologico(){

}