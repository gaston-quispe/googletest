//
// Created by gaston on 03/03/16.
//

#ifndef UNITTESTING_SALUDADOR_H
#define UNITTESTING_SALUDADOR_H

#include <iostream>

using namespace std;

class Saludador {

private:
    string minombre;
public:
    Saludador(string minombre);
    string saludar(string nombre);
};


#endif //UNITTESTING_SALUDADOR_H
