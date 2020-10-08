//
// Created by Fabio Villalobos on 8/10/2020.
//

#include "VectorPersona.cpp"

class ServicioPersonasConPersistencia : public VectorPersonas
{
public:

    ServicioPersonasConPersistencia()
    {
        Register("VectorPersonas", &array);
    }

};
