#include "civilizacion.h"

Civilizacion::Civilizacion()
{

}
Civilizacion::Civilizacion(const string &nombre,int x,int y,int puntos)
{

  this->nombre = nombre;
  this->x = x;
  this->y = y;
  this->puntos =puntos;




}


void Civilizacion::setNombre(const string&v)
{
    nombre=v;
}
string Civilizacion::getNombre()const
{
    return nombre;
}
void Civilizacion::setX(int v)
{
    x=v;
}
int Civilizacion::getX()const
{
    return x;
}
void Civilizacion::setY(int v)
{
    y=v;
}
int Civilizacion::getY()const
{
    return y;
}
void Civilizacion::setPuntos(int v)
{
    puntos=v;
}
int Civilizacion::getPuntos()const
{
    return puntos;
}
