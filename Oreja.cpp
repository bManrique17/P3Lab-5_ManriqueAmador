#include <string>
#include "Oreja.h"
#include <sstream>

using namespace std;

Oreja::Oreja(){}

Oreja::Oreja(string tamano, string capacidadAuditiva){
    this->tamano = tamano;
    this->capacidadAuditiva = capacidadAuditiva;
}

Oreja::~Oreja(){
    
}