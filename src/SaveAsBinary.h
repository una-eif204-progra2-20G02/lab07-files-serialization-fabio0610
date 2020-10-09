//
// Created by Usuario on 8/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_WEMS99_SAVEASBINARY_H
#define LAB07_FILES_SERIALIZATION_WEMS99_SAVEASBINARY_H
#include <IObjectSave.h>

class SaveAsBinary: public IObjectSave {

public:

    void save(vector<Person> person) override;

};


#endif //LAB07_FILES_SERIALIZATION_WEMS99_SAVEASBINARY_H
