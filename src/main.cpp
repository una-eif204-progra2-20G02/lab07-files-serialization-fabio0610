//
// Created by Usuario on 7/10/2020.
//

#include "IObjectSave.h"
#include "Person.h"
#include "SaveAsBinary.h"
#include "SaveAsJson.h"
#include "PersonManager.h"

int main(){

    vector<Person> personList;

    PersonManager *manager = new PersonManager();

    IObjectSave *saveAsBinary = new SaveAsBinary();
    IObjectSave *saveAsJson = new SaveAsJson();

    Person p1(117430751, 21, "Allen");
    Person p2(401256379, 44, "Brando Sanderson");
    Person p3(501369458, 72, "Robert Jordan");

    manager->setPersonList(personList);

    //save as Binary

    personList = manager->addPerson(p1);

    manager->saveData(saveAsBinary, personList);

    personList = manager->addPerson(p2);

    manager->saveData(saveAsBinary,personList);

    personList = manager->addPerson(p3);

    manager->saveData(saveAsBinary, personList);

     //save as Json

    manager->saveData(saveAsJson, personList);


    delete saveAsJson;
    delete saveAsBinary;
    delete manager;

    return 0;
}