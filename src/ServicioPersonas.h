//
// Created by Fabio Villalobos on 8/10/2020.
//
#include "VectorPersonas.h"

class ServicioPersonasConPersistencia : public VectorPersonas
{
public:

    ServicioPersonasConPersistencia()
    {
        Register("VectorPersonas", &array);
    }

};
#ifndef MY_PROJECT_NAME_SERVICIOPERSONAS_H
#define MY_PROJECT_NAME_SERVICIOPERSONAS_H

#endif //MY_PROJECT_NAME_SERVICIOPERSONAS_H
