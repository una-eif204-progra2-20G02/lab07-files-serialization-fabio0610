//
// Created by Usuario on 7/10/2020.
//

#include "Person.h"

Person::Person(int id, int age, const string &name) : id(id), age(age), name(name) {}

int Person::getId() const {
    return id;
}

void Person::setId(int id) {
    Person::id = id;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

string Person::toString() {
    stringstream s;

    s<< "\t id: " <<this->id<<endl;
    s<< "\t age: "<<this->age<<endl;
    s<< "\t name: "<<this->name<<endl;

    return s.str();
}