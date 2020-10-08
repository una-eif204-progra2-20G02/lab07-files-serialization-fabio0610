//
// Created by Fabio Villalobos on 8/10/2020.
//

#ifndef MY_PROJECT_NAME_FILESAVEMANAGER_H
#define MY_PROJECT_NAME_FILESAVEMANAGER_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "VectorPersonas.h"
//#include "ISaveFile.h"

using namespace std;

class FileSaveManager {

public:
    FileSaveManager() {}


    void save(VectorPersonas *array) {
        ofstream archivo;
        try { archivo.open("ArchivoBinario.dat", ios::app | ios::binary); }

        catch (std::ifstream::failure a) { cout << "no se pudo abrir el archivo"; }

        archivo.write((char *) &array, sizeof(VectorPersonas));

        archivo.close();

    }

    void load(VectorPersonas *array) {
        ifstream archivo;

        try { archivo.open("ArchivoBinario.dat", ios::in | ios::binary); }

        catch (std::ifstream::failure a) {
            cout << "no se pudo abrir el archivo";
            exit(1);
        }

        archivo.read((char *) &array, sizeof(VectorPersonas));

        archivo.close();

    }

    void SeekgYTellg(VectorPersonas *array) {
        ifstream archivo;

        try { archivo.open("ArchivoBinario.dat", ios::in | ios::binary); }

        catch (std::ifstream::failure a) {
            cout << "no se pudo abrir el archivo";
            exit(1);
        }

        archivo.seekg(2 * sizeof(ISaveFile));

        archivo.read((char *) &array, sizeof(VectorPersonas));
        cout << "La lectura del archivo quedo en el byte: " << archivo.tellg();

        archivo.close();
    }

    void guardar(VectorPersonas *array) {
        ofstream archivo;
        try { archivo.open("ArchivoTexto.txt", ios::app); }
        catch (std::ifstream::failure a) {
            cout << "no se pudo abrir el archivo";
            exit(1);
        }
        archivo << array->saveData();
        archivo.close();
    }

    void leer() {
        ifstream archivo;
        string texto;
        try { archivo.open("ArchivoTexto.txt", ios::in); }
        catch (std::ifstream::failure a) {
            cout << "no se pudo abrir el archivo";
            exit(1);
        }
        cout << endl;
        while (!archivo.eof()) {
            getline(archivo, texto);
            cout << texto << endl;
        }
        archivo.close();
    }
};
#endif //MY_PROJECT_NAME_FILESAVEMANAGER_H
