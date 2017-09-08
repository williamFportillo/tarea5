#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
#include <set>          // std::list
#include <map>          // std::list
using namespace std;


//Agrega valor (dado) a mi_mapa (dado), en la llave dada
//Nota: mi_mapa es un apuntador, para usarlo se sugiere desrreferenciarlo con el operador *
void asignarValor(map<string,int> *mi_mapa, string llave,int valor)
{
    (*mi_mapa) [llave]= valor;
}

//Devuelve el valor asociado a la llave (dada) en mi_mapa (dado)
char obtenerValor(map<int,char> mi_mapa,int llave)
{
    return mi_mapa[llave];;
}

//Devolver el un mapa con los siguientes valores dados en la tabla
//  LLave     |   Valor
//----------------------------
//  1         |   "lunes"
//  2         |   "martes"
//  3         |   "miercoles"
//  4         |   "jueves"
//  5         |   "viernes"
//  6         |   "sabado"
//  7         |   "domingo"
map<string,int> obtenerSemana()
{
    map<string,int> dia;
    dia["lunes"]=1;
    dia["martes"]=2;
    dia["miercoles"]=3;
    dia["jueves"]=4;
    dia["viernes"]=5;
    dia["sabado"]=6;
    dia["domingo"]=7;
    return dia;
}

//devuelve la interseccion de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga unicamente los valores que mi_set1 y mi_set2 tengan en comun)
set<int> getInserseccion(set<int> mi_set1, set<int> mi_set2)
{
    set<int> mi_set3;
    for(set<int>:: iterator it= mi_set1.begin();it!= mi_set1.end(); it++)
    {
        for(set<int>:: iterator it2= mi_set2.begin();it2 != mi_set2.end(); it2++)
        {
            if(*it == *it2)
            {

                mi_set3.insert(*it);
            }
        }
    }
    return mi_set3;
}

//devuelve la union de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga todos los valores de mi_set1 y mi_set2)
set<int> getUnion(set<int> mi_set1, set<int> mi_set2)
{
    set<int> mi_set3;

    for(set<int>::iterator i = mi_set1.begin();i!=mi_set1.end();i++)
    {
        for(set<int>::iterator j = mi_set2.begin();j!=mi_set2.end();j++)
        {

            mi_set3.insert(*j);



        }
        mi_set3.insert(*i);


    }
    return mi_set3;

}

//devuelve true si mi_sub_set (dado) es un subconjunto de mi_set (dado)
//(mi_set contiene todos los valores de mi_sub_set)
bool esSubConjunto(set<int> mi_set, set<int> mi_sub_set)
{
    int cont_rep=0;

    for(set<int>::iterator i = mi_set.begin();i!=mi_set.end();i++)
    {
        for(set<int>::iterator j = mi_sub_set.begin();j!=mi_sub_set.end();j++)
        {
            if(*i==*j)
            {
                cont_rep++;
            }
        }

    }

    if(cont_rep==mi_sub_set.size())
    {
        return true;
    }
    return false;
}

int main ()
{

    //Funcion evaluadora
    evaluar();
    return 1;
}