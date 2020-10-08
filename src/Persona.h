//
// Created by Fabio Villalobos on 8/10/2020.
//

#ifndef MY_PROJECT_NAME_PERSONA_H
#define MY_PROJECT_NAME_PERSONA_H

#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include <sstream>
#include "XMLSerialization.h"
using namespace xmls;
using namespace std;
struct Persona : public Serializable{
    xString nombre;
    xInt edad;
    xInt id;

    Persona();
    string toString();

};

//Definición de los métodos
Persona::Persona()
{
    setClassName("Persona");
    Register("Nombre", &nombre);
    Register("Edad", &edad);
    Register("Identificacion", &id);

}

string Persona::toString() {
    {
        ostringstream output;
        output << "Nombre: " << nombre.value() << endl;
        output << "Edad: " << edad.value() << endl;
        output << "Identificacion: " << id.value() << endl;

        return output.str();
    }
}

#endif //MY_PROJECT_NAME_PERSONA_H
