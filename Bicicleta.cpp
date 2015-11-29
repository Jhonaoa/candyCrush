/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/* Autor:JHON ALEJANDRIO OROBIO ARCE
 * Fecha de creación: 25 /nov/2015
 * camaraFotografica
 * Copyright (C) JHON ALEJANDRIO OROBIO ARCE 2015 <jhonaoa@s5pc34>
 *
 * camaraFotografica is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * camaraFotografica is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * Clase: camaraFotografica
 * Responsabilidad: simulador una calculadora de distancia para un recorrido
 * en bicicleta.
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "Bicicleta.h"
#include "math.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Bicicleta::Bicicleta() //ctor
{
    distanciaParcial = 0;
    distanciaTotal = 0 ; //iniciación de atributos
    posXactual = 0;
    posYactual = 0;
}

Bicicleta::~Bicicleta()
{
    //dtor
}



//setDistanciaParcial: permite calcular la distancia recorrida
//y almacenarla en la variable distanciaParcial
void Bicicleta::setDistanciaParcial(float posX, float posY)
{
    distanciaParcial = sqrt(pow((posXactual - posX),2) +
                            pow((posYactual - posY),2));

}

//setDistanciaTotal: permite calcular la distancia total
        //recorrida durante la ejecución del programa.
void Bicicleta::setDistanciaTotal()
{
    distanciaTotal = distanciaTotal + distanciaParcial;

}

//getDistanciaParcial: permite obtener la distancia de un sólo recorrido
float Bicicleta::getDistanciaParcial()
{
   return distanciaParcial;
}

//getDistanciaTotal: permite obtener la distancia total recorrida
float Bicicleta::getDistanciaTotal()
{
    return distanciaTotal;
}

//setPosXactual: permite almacenar en el atributo posXactual
//el valor de las entradas del usuario que pemiten saber
// saber su ubicación

void Bicicleta::setPosXactual(float posX)
{
    posXactual = posX;
}

//setPosYactual: permite almacenar en el atributo posXactual
//el valor de las entradas del usuario que pemiten saber
// saber su ubicación
void Bicicleta::setPosYactual(float posY)
{
    posYactual = posY;
}

//menu: permite acceder a las ditintas opciones del programa
//de manera ordenada.
void Bicicleta::menu()
{

    int opcion = 0,repeat = 1;
    float posX,posY = 0 ;

    cout<<"Desea iniciar el recorrido?"<< endl;
    cout<<endl;
    cout<<"1. si"<<endl<<"2.no"<<endl;
    cout<<endl;
    cout<<"opcion: ";
    cin>>opcion;
    cout<<endl;

    do
    {
        system("cls");
        cout<<"1. continuar el recorrido"<<endl;
        cout<<endl;
        cout<<"2. conocer el recorrido total"<<endl;
        cout<<endl;
        cout<<"3. salir "<<endl;
        cout<<endl;

        switch(opcion)
        {
            case 1:
                cout<< "ingresa la componente x: ";
                cin>>posX;
                cout<<"ingresa la componente y: ";
                cin>>posY;
                Bicicleta::setDistanciaParcial(posX,posY);

                Bicicleta::setDistanciaTotal();

                cout<<"la distancia recorrida ha sido: "
                << Bicicleta::getDistanciaParcial()<<endl;

                cout<<endl;

                Bicicleta::setPosXactual(posX);

                Bicicleta::setPosYactual(posY);

                cout<<"escoge una opcion para continuar: ";

                cin>>opcion;
                break;

            case 2:


                cout<<"el recorrido total es: "
                <<Bicicleta::getDistanciaTotal();
                cout<<endl;
                cout<<"escoge una opcion: ";
                cin>>opcion;

                break;


            case 3:
                cout<<"saliendo...";
                repeat = 0;
                break;

            default:
                    cout<<"ingrese otra opción: ";
                    cin>>opcion;

        }
    }while(repeat == 1);
}



