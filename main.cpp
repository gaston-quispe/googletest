#include <iostream>
#include "Saludador.h"

using namespace std;
// Estoy en rama development
int main() {

    //COMENTARIO SOBRE TASK4000 REALIZADO MINTERAS ESTOY EN LA RAMA 4000
    Saludador pepe = Saludador("Pepe");


    cout << pepe.saludar("Miguel") << endl;
    return 0;
}

