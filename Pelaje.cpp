#include <string>
#include "Pelaje.h"
#include <sstream>

using namespace std;

Pelaje::Pelaje(){}

Pelaje::Pelaje(string color, string grosor,string largo){
    this->color = color;
    this->grosor = grosor;
    this->largo = largo;
}

Pelaje::~Pelaje(){
    
}