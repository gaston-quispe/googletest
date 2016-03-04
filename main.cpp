#include <iostream>
#include "Saludador.h"

using namespace std;

int main() {

    Saludador pepe = Saludador("Pepe");


    cout << pepe.saludar("Miguel") << endl;
    return 0;
}
