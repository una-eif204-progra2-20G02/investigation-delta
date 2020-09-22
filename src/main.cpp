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



int maim{



    return 0;
};
