//
// Created by Fabio Villalobos on 8/10/2020.
//

#ifndef MY_PROJECT_NAME_ISAVEFILE_H
#define MY_PROJECT_NAME_ISAVEFILE_H
#include <iostream>
using namespace std;
class ISaveFile {
public:
    virtual ~ISaveFile();
    virtual string saveData()=0;
};


#endif //MY_PROJECT_NAME_ISAVEFILE_H
