//
// Created by deine on 9/21/2020.
//
#include <iostream>
#include <fstream> //usar las funciones de escritura y lectura
#include <strings.h> //pasar de string cadena de char
#include <vector>
using namespace std;


struct Persona {
    char nombre[20];
    int edad;
    int id;
    Persona(){}
    Persona(string _name,int _edad, int _id){
        strcpy(nombre,_name.c_str());
        edad=_edad;
        id=_id;
    }
};

void save(Persona persona){
    ofstream archivo;
    //se crea una variable ofstream para poder usar los metodos necesarios para escribir en un archivo como .open, .write , .close ,...


    archivo.open("ArchivoBinario.dat",ios::app | ios::binary);
    //se abre o se crea el archivo "ArchivoBinario.dat" y se decide en que modo se abrira ese archivo y por ultimo se le recuerda a C++ que es un archivo binario

    if(archivo.fail()){
        cout<<"no se pudo abrir el archivo";
        exit(1);}
    //si el archivo no se pudo abrir o algo mas paso el metodo fail() retorna un 1 si algo malo paso y con el exit(1) nos salimos del metodo

    archivo.write((char *)&persona,sizeof(Persona));
    //esta el metodo que se usa para escribir en el archivo binario
    //se le pasan  dos paramentros, primero la direccion del objeto,struct,variable que se va "almacenar" y segundo el tamanno de este objeto,struct o variable


    archivo.close();
    //por ultimo se cierra el archivo
}



int maim{



    return 0;
};
