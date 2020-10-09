//
// Created by Usuario on 8/10/2020.
//

#include "SaveAsJson.h"


void SaveAsJson::save(vector<Person> persons) {

    ofstream archivo;

    json jsonPerson;

    for(int i = 0; i < persons.size(); i++) {

        jsonPerson["id"] = persons[i].getId();
        jsonPerson["age"] = persons[i].getAge();
        jsonPerson["name"] = persons[i].getName();
    }

    string personaSerealizada = jsonPerson.dump(4);

    try{

        archivo.open("ArchivoJson.json", ios::binary);

    }

    catch (ifstream::failure a) {

        throw runtime_error("Error en archivo");
        exit(1);

    }

    archivo<< personaSerealizada<<endl;

    archivo.close();

}

