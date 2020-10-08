//
// Created by Fabio Villalobos on 8/10/2020.
//
#include "ServicioPersonas.h"
#include "FileSaveManager.h"

int main() {

    FileSaveManager fileSaveManager;

    VectorPersonas *arrayPers = new ServicioPersonasConPersistencia();

    auto *persona = new Persona;

    persona->nombre = "Fabio";
    persona->edad = 21;
    persona->id = 117560332;


    arrayPers->insertar(persona);

    auto *persona1 = new Persona;

    persona1->nombre = "Mike";
    persona1->edad = 25;
    persona1->id = 123456;

    arrayPers->insertar(persona1);

    auto *persona2 = new Persona;

    persona2->nombre = "Ana";
    persona2->edad = 30;
    persona2->id = 987654;

    arrayPers->insertar(persona2);

    auto* persona3 = new Persona;

    persona3->nombre = "Pedro";
    persona3->edad = 20;
    persona3->id = 54984894;

    arrayPers->insertar(persona3);

    fileSaveManager.save(arrayPers);
    fileSaveManager.guardar(arrayPers);

}