#include "videogame.h"
#include<fstream>
#include <algorithm>

VideoGame::VideoGame()
{

}
void VideoGame::agregarCi(const Civilizacion &c)
{
    civilizaciones.push_back(c);
}
void VideoGame::mostrar()
{
        cout<<left;

        cout<<setw(10)<<"NOMBRE";
        cout<<setw(10)<<"UBICACION EN X";
        cout<<setw(10)<<"UBICACION EN Y";
        cout<<setw(10)<<"PUNTUACION";
        cout<<endl;

    for(size_t i=0;i<civilizaciones.size();i++)
    {
  Civilizacion &c = civilizaciones[i];


    cout<<c;
    }
}
void VideoGame::insertar(const Civilizacion&c,size_t pos)
{
     civilizaciones.insert(civilizaciones.begin()+pos,c);
}

void VideoGame::inicializar(const Civilizacion&c,size_t n)
    {
        civilizaciones=vector<Civilizacion>(n,c);
    }
void VideoGame::primeraCivilizacion()
    {
        if(civilizaciones.empty())
            {
                cout<<" vacio"<<endl;
            }else{
            cout<<civilizaciones.front()<<endl;
            }
    }
void VideoGame::ultimaCivilizacion()
    {
        if(civilizaciones.empty())
            {
                cout<<" vacio"<<endl;
            }else{
            cout<<civilizaciones.back()<<endl;
            }
    }

void VideoGame::ordenarNombre()
    {

    sort(civilizaciones.begin(),civilizaciones.end());
}
void VideoGame::ordenarPuntos()
{
    sort( civilizaciones.begin(),civilizaciones.end(),[](Civilizacion c1,Civilizacion c2){return c1.getPuntos()>c2.getPuntos();});
}
void VideoGame::ordenarY()
{
    sort( civilizaciones.begin(),civilizaciones.end(),[](Civilizacion c1,Civilizacion c2){return c1.getY()>c2.getY();});
}

void VideoGame::ordenarX()
{
    sort( civilizaciones.begin(),civilizaciones.end(),[](Civilizacion c1,Civilizacion c2){return c1.getX()>c2.getX();});
}

void VideoGame::eliminarNombre(const string &nombre)
    {
        for(auto it=civilizaciones.begin();it != civilizaciones.end();it++)
    {
        Civilizacion &j = *it;

        if(nombre==j.getNombre()){
            civilizaciones.erase(it);
            break;
        }
    }
        }
Civilizacion* VideoGame::buscar(const Civilizacion& c)
{
    auto it = find(civilizaciones.begin(),civilizaciones.end(),c);
    if(it==civilizaciones.end())
    {
        return nullptr;
    }else{
    return &(*it);
    }
}
void VideoGame::print()
{
    for(auto it = civilizaciones.begin();it != civilizaciones.end();it++){
        cout<<*it<<endl;

    }
}
size_t VideoGame::size()
{
    return civilizaciones.size();
}
