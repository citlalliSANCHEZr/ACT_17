#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include "civilizacion.h"
#include <vector>

class VideoGame
{

    string usuario;
   vector<Civilizacion>civilizaciones;

public:

    VideoGame();
    void agregarCi(const Civilizacion &c);
    void insertar(const Civilizacion&c,size_t pos);
    void inicializar(const Civilizacion&c,size_t n);
    void primeraCivilizacion();
    void ultimaCivilizacion();
    void ordenarNombre();
    void ordenarX();
    void ordenarPuntos();
    void ordenarY();
    void eliminarNombre(const string &nombre);
    Civilizacion* buscar(const Civilizacion& c);
    friend VideoGame& operator<<(VideoGame &la,const Civilizacion&c)
    {
        la.agregarCi(c);
        return la;
    }
    void print();
    void mostrar();
   size_t size();
};

#endif // VIDEOGAME_H
