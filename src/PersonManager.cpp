//
// Created by Usuario on 8/10/2020.
//

#include "PersonManager.h"

PersonManager::PersonManager(const vector<Person> &personList) : personList(personList) {}

const vector<Person> PersonManager::getListPerson() {

    vector<Person> personListReturn;

    for(int i=0; i < personList.size(); i++){

        personListReturn.push_back(personList[i]);

    }

    return personList;
}

vector<Person> PersonManager::addPerson(Person person1) {

    personList.push_back(person1);

    return personList;

}

PersonManager::~PersonManager() {


}

vector<Person> PersonManager::displayPersonList() {
    stringstream s;

    for(int i = 0; i < personList.size(); i++){

        s<< personList[i].toString() << "\n";

    }

    return personList;
}

const vector<Person> &PersonManager::getPersonList() const {
    return personList;
}

void PersonManager::setPersonList(const vector<Person> &personList) {
    PersonManager::personList = personList;
}

void PersonManager::save(IObjectSave *objectSave, vector<Person> persons) {

    objectSave->save(persons);

}
