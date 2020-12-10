#include <iostream>
#include "videogame.h"
using namespace std;

int main()
{
    VideoGame V;
    string op;

    while(true)
    {
        cout<<"1)nombre de usuario"<<endl;
        cout<<"2)agregar civilizacion"<<endl;
        cout<<"3)insertar civilizacion"<<endl;
        cout<<"4)crear civilizacion"<<endl;
        cout<<"5)primera civilizacion"<<endl;
        cout<<"6)ultima civilizacion"<<endl;
        cout<<"7)ordenar por nombre"<<endl;
        cout<<"8)ordenar en x"<<endl;
        cout<<"9)buscar en y"<<endl;
        cout<<"10)ordenar por puntuacion"<<endl;
        cout<<"11)eliminar"<<endl;
        cout<<"12)buscar"<<endl;
        cout<<"13)modificar"<<endl;
        cout<<"14)resumen"<<endl;
        cout<<"0)salir"<<endl;
        getline(cin,op);

        if(op=="1")
        {
            string usuario;
            cout<<"NOMBRE DE USUARIO"<<endl;
            getline(cin,usuario);


        }else if(op=="2"){

            Civilizacion c;

             cin>>c;
             V.agregarCi(c);
             cin.ignore();
        }else if(op=="3"){
            Civilizacion c;
            cin>>c;
            size_t pos;
            cout<<"posicion: ";
            cin>>pos;cin.ignore();
            if(pos>=V.size())
            {
                cout<<"no valido"<<endl;

            }else{
            V.insertar(c,pos);
            }
        }else if(op=="4"){
            Civilizacion c;
            cin>>c;
            size_t n;
            cout<<"n: ";
            cin>>n;cin.ignore();
            V.inicializar(c,n);
        }else if(op=="5"){
            V.primeraCivilizacion();
        }else if(op=="6"){
            V.ultimaCivilizacion();
        }else if(op=="7"){
            V.ordenarNombre();



        }else if(op=="8")
        {
            V.ordenarX();
            }else if(op=="9")
            {
                V.ordenarY();
                }else if(op=="10")
                {
                    V.ordenarPuntos();
                    }else if(op=="11"){
        string nombre;
            cout<<"nombre: ";
            getline(cin,nombre);
            V .eliminarNombre(nombre);
        }else if(op=="12"){

             Civilizacion c;
            cout<<"civilizacion: ";
            cin>>c;cin.ignore();
            Civilizacion *ptr=V.buscar(c);
            if(ptr==nullptr)
            {
                cout<<"no encontrado"<<endl;
            }else{
            cout<<*ptr<<endl;
            }

        }else if(op=="13")
        {

            Civilizacion c;
             string ops;
             string nombre;
             int x,y,puntos;
            cout<<"civilizacion: "<<endl;
            cin>>c;cin.ignore();
            Civilizacion *ptr=V.buscar(c);
            if(ptr==nullptr)
            {
                cout<<"no encontrado"<<endl;
            }else{

            cout<<*ptr<<endl;
            cout<<"modificar"<<endl;
            cout<<"1)nombre"<<endl;
            cout<<"2)ubicacion en X"<<endl;
            cout<<"3)ubicacion en Y"<<endl;
            cout<<"4)puntuacion"<<endl;
            cout<<"0)sair"<<endl;
            cin>>ops;cin.ignore();

            if(ops=="1")
            {

                 cout<<"nombre: "<<endl;
                getline(cin,nombre);
                ptr->setNombre(nombre);
            }else if(ops=="2")
            {
               cout<<"ubicacion en X: "<<endl;
                cin>>x;
                ptr->setX(x);
            }else if(ops=="3")
            {
                 cout<<"ubicacion en Y: "<<endl;
               cin>>y;
                ptr->setY(y);
            }else if(ops=="4")
            {
             cout<<"puntuacion: "<<endl;
                cin>>puntos;
                ptr->setPuntos(puntos);

            }else if(ops=="0")
            {
             break;
            }

            }


        }else if(op=="14"){
            V.print();
        }else if(op=="0"){


        break;
        }
    }

    return 0;
}
