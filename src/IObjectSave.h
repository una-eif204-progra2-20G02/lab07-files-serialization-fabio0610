//
// Created by Usuario on 8/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_WEMS99_IOBJECTSAVE_H
#define LAB07_FILES_SERIALIZATION_WEMS99_IOBJECTSAVE_H

#include "Person.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <vector>

class IObjectSave {

public:

    virtual void save(vector<Person> persons) = 0;


    virtual ~IObjectSave();



};


#endif //LAB07_FILES_SERIALIZATION_WEMS99_IOBJECTSAVE_H
