#include <string>
#include "Ojo.h"
#include <sstream>

using namespace std;

Ojo::Ojo(){}

Ojo::Ojo(string color, bool visionNocturna){
    this->color = color;
    this->visionNocturna = visionNocturna;
}

Ojo::~Ojo(){
    
}