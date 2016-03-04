#include <iostream>
#include "Saludador.h"

using namespace std;
// Estoy en rama development
int main() {

    Saludador pepe = Saludador("Pepe");


    cout << pepe.saludar("Miguel") << endl;
    return 0;
}
