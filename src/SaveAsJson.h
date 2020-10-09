//
// Created by Usuario on 8/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_WEMS99_SAVEASJSON_H
#define LAB07_FILES_SERIALIZATION_WEMS99_SAVEASJSON_H
#include <IObjectSave.h>
#include <../lib/nlohmann/json.hpp>

using json  = nlohmann::json ;

class SaveAsJson: public IObjectSave {

public:

    void save(vector<Person>) override;

};


#endif //LAB07_FILES_SERIALIZATION_WEMS99_SAVEASJSON_H
