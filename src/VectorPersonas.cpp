//
// Created by Fabio Villalobos on 8/10/2020.
//
#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include <sstream>

using namespace std;

struct Persona{
    char nombre[20];
    int edad;
    int id;

    Persona() {}

    Persona(string _name, int _edad, int _id) {
        strcpy(nombre, _name.c_str());
        edad = _edad;
        id = _id;
    }
};

class VectorPersonas{
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