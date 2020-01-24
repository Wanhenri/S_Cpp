#include <cstdlib>
#include <string>
#include <iostream>


using namespace std;

#include "Carro.h"

int main(int argc, char** argv){

    Carro c1;
    c1.setMarca("Fiat");
    c1.setAno(2017);

    Carro c2;
    c2.setMarca("Volvo");
    c2.setAno(1550);

    cout << c2.getMarca() << endl;
    cout << c2.getAno() << endl;
   
    return 0;
};
