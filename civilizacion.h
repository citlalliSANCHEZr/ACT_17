#ifndef CIVILIZACION_H
#define CIVILIZACION_H

#include<iostream>
#include<iomanip>
#include<list>
using namespace std;

class Civilizacion
{
private:
    string nombre;
    int x;
    int y;
    int puntos;




   public:
        Civilizacion();
        Civilizacion(const string &nombre,int x,int y,int puntos);

        void setNombre(const string &v);
        string getNombre()const;
        void setX(int v);
        int getX()const;
        void setY(int v);
        int getY()const;
        void setPuntos(int v);
        int getPuntos()const;

    friend ostream& operator<<(ostream &out,const Civilizacion &c)
    {
        out<<left;

        out<<setw(10)<<c.nombre;
        out<<setw(10)<<c.x;
        out<<setw(10)<<c.y;
        out<<setw(10)<<c.puntos;
        out<<endl;

        return out;

    }
    friend istream& operator>>(istream &in,Civilizacion &c)
    {

        cout<<"NOMBRE: ";
        getline(cin,c.nombre);
        cout<<"UBICACION EN X: ";
        cin>>c.x;
        cout<<"UBICACION EN Y: ";
        cin>>c.y;
        cout<<"PUNTOS: ";
        cin>>c.puntos;

        return in;
    }
    bool operator==(const Civilizacion& c)
    {
        return nombre==c.nombre;
    }
    bool operator==(const Civilizacion& c)const
    {
        return nombre==c.nombre;
    }
    bool operator<(const Civilizacion& c)
    {
        return nombre<c.nombre;
    }
    bool operator<(const Civilizacion& c)const
    {
        return nombre<c.nombre;
    }
};


#endif // CIVILIZACION_H
