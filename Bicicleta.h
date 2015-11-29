/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/* Autor:JHON ALEJANDRIO OROBIO ARCE
 * Fecha de creaci�n: 25 /nov/2015
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
 * en bicicleta:
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef BICICLETA_H
#define BICICLETA_H


class Bicicleta
{
    public:
        Bicicleta();//ctor
        ~Bicicleta();//dtor

        //setDistanciaParcial: permite calcular la distancia recorrida
        //y almacenarla en la variable distanciaParcial
        void setDistanciaParcial (float posX, float posY);

        //setDistanciaTotal: permite calcular la distancia total
        //recorrida durante la ejecuci�n del programa.
        void setDistanciaTotal();

        //getDistanciaTotal: permite obtener la distancia total recorrida
        float getDistanciaTotal();

        //getDistanciaParcial: permite obtener la distancia de un s�lo recorrido
        float getDistanciaParcial();

        //setPosXactual: permite almacenar en el atributo posXactual
        //el valor de las entradas del usuario que pemiten saber
        // saber su ubicaci�n
        void setPosXactual(float posX);

        //setPosYactual: permite almacenar en el atributo posXactual
        //el valor de las entradas del usuario que pemiten saber
        // saber su ubicaci�n
        void setPosYactual(float posY);

        //menu: permite acceder a las ditintas opciones del programa
        //de manera ordenada:
        void menu();


    protected:
    private:

        float distanciaParcial;//atrb
        float distanciaTotal;//atrb
        float posXactual;//atrb
        float posYactual;//atrb
};


#endif // BICICLETA_H
