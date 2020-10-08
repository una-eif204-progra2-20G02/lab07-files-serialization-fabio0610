//
// Created by Fabio Villalobos on 8/10/2020.
//
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

class VectorPersonas : public Serializable {
public:
    Collection<Persona> array;

    VectorPersonas(){
        setClassName("Array de personas");
        for (int i = 0; i < array.size(); i++)
        {
            Register("Persona",array.getItem(i));
        }
    }

    string toString() {
        ostringstream out;
        for (int i = 0; i < array.size(); i++)
        {
            out << array.getItem(i)->toString();
        }
        return out.str();
    }

    void insertar(Persona* persona) {
        array.addItem(persona);
    }
};