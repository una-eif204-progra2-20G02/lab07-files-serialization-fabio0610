//
// Created by Fabio Villalobos on 8/10/2020.
//
#include "VectorPersonas.h"
#include "XMLSerialization.h"

int main() {
    VectorPersonas *arrayPers = new ServicioPersonasConPersistencia();

    auto *persona = new Persona;

    persona->nombre = "Santiago";
    persona->edad = 19;
    persona->id = 604630008;


    arrayPers->insertar(persona);

    auto *persona1 = new Persona;

    persona1->nombre = "Ariadna";
    persona1->edad = 20;
    persona1->id = 123456;

    arrayPers->insertar(persona1);

    auto *persona2 = new Persona;

    persona2->nombre = "Angelo";
    persona2->edad = 18;
    persona2->id = 987654;

    arrayPers->insertar(persona2);

}