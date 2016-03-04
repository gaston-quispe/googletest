//
// Created by gaston on 03/03/16.
//

#include "Saludador.h"

Saludador::Saludador(string minombre) {
    this->minombre = minombre;
};

string Saludador::saludar(string nombre) {
    return "Soy " + this->minombre + ". Hola " + nombre + "!";
}