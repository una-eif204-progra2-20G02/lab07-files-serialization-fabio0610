//
// Created by Usuario on 7/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_WEMS99_PERSON_H
#define LAB07_FILES_SERIALIZATION_WEMS99_PERSON_H


#include <iostream>
#include <sstream>

using namespace std;

class Person {

private:

    int id;
    int age;
    string name;

public:

    Person(int id, int age, const string &name);

    int getId() const;

    void setId(int id);

    int getAge() const;

    void setAge(int age);

    const string &getName() const;

    void setName(const string &name);

    string toString();


};


#endif //LAB07_FILES_SERIALIZATION_WEMS99_PERSON_H
