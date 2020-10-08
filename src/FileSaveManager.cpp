//
// Created by Fabio Villalobos on 8/10/2020.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "ISaveFile.h"
#include "VectorPersona.h"
using namespace std;


void save(ISaveFile* savedData) {
    ofstream archivo;
    try { archivo.open("ArchivoBinario.dat", ios::app | ios::binary); }

    catch (std::ifstream::failure a) { cout << "no se pudo abrir el archivo"; }

    archivo.write((char *) &savedData, sizeof(ISaveFile));

    archivo.close();

}

void load(ISaveFile &savedData) {
    ifstream archivo;
    //se crea una variable ifstream para poder usar los metodos necesarios para leer el archivo como .open, .read , .close ,...

    try { archivo.open("ArchivoBinario.dat", ios::in | ios::binary); }
        //carga el archivo, se decide en que modo se va a abrir ese archivo( en este caso en modo lectura) y se le recuerda a C++ que es un archivo binario

    catch (std::ifstream::failure a) {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }
    //si el archivo no se pudo abrir o algo mas paso el metodo fail() retorna un 1 si algo malo paso y con el exit(1) nos salimos del metodo

    archivo.read((char *) &savedData, sizeof(ISaveFile));
    //lo que esta en el archivo se va a cargar en la persona

    archivo.close();
    //se cerro el archivo
}

void SeekgYTellg(ISaveFile &savedData) {
    ifstream archivo;

    try { archivo.open("ArchivoBinario.dat", ios::in | ios::binary); }
        //carga el archivo, se decide en que modo se va a abrir ese archivo( en este caso en modo lectura) y se le recuerda a C++ que es un archivo binario

    catch (std::ifstream::failure a) {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }
    //si el archivo no se pudo abrir o algo mas paso el metodo fail() retorna un 1 si algo malo paso y con el exit(1) nos salimos del metodo

    //por ejemplo queremos mostrar la tercera persona que fuen ingresado en el archivo
    archivo.seekg(2 * sizeof(ISaveFile));
    //ya que C++ utiliza lo que son direccion fisicas lo cual quiere decir que se recorre el archivo byte a byte
    //por ese motivo hay multiplicarle el sizeof(Persona) para ubicarnos en la tercera persona
    //lo multiplicamos por 2 ya que la primera persona es el registro 0, la segunda el 1, la tercera el 2,...

    archivo.read((char *) &savedData, sizeof(ISaveFile));
    cout << "La lectura del archivo quedo en el byte: " << archivo.tellg();


    archivo.close();
    //se cerro el archivo
}

void guardar(ISaveFile* savedData) {
    ofstream archivo;
    try { archivo.open("ArchivoTexto.txt", ios::app); }
    catch (std::ifstream::failure a) {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }
    archivo << savedData->saveData();
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