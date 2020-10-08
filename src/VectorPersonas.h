//
// Created by Fabio Villalobos on 8/10/2020.
//

#ifndef MY_PROJECT_NAME_VECTORPERSONAS_H
#define MY_PROJECT_NAME_VECTORPERSONAS_H
#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include <sstream>
#include "ISaveFile.h"
#include "XMLSerialization.h"
using namespace xmls;
using namespace std;





class VectorPersonas : public Serializable, public ISaveFile{
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

    void insertar(Persona* persona) override{
        array.addItem(persona);
    }

    string saveData(){
        return toString();
    }
};
#endif //MY_PROJECT_NAME_VECTORPERSONAS_H
