//
// Created by Usuario on 8/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_WEMS99_PERSONMANAGER_H
#define LAB07_FILES_SERIALIZATION_WEMS99_PERSONMANAGER_H
#include "Person.h"
#include <vector>
#include "IObjectSave.h"

class PersonManager {

private:

    vector<Person> personList;

public:

    PersonManager(const vector<Person> &personList);

    PersonManager();

    const vector<Person> getListPerson();

    const vector<Person> &getPersonList() const;

    void setPersonList(const vector<Person> &personList);

    vector<Person> addPerson(Person);

    vector<Person> displayPersonList();

    virtual ~PersonManager();

    void saveData(IObjectSave* objectSave, vector<Person>);

};


#endif //LAB07_FILES_SERIALIZATION_WEMS99_PERSONMANAGER_H
