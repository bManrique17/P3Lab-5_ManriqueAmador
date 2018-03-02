#include <string>
#include "Pata.h"
#include <sstream>

using namespace std;

Pata::Pata(){}

Pata::Pata(string cantidad, string largo, string tipo){
    this->cantidad = cantidad;
    this->largo = largo;
    this->tipo = tipo;
}

Pata::~Pata(){
    
}