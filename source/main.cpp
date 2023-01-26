#include<iostream>
#include "Vendedor.h"
#include "Tienda.h"
#include "Camisa.h"

using namespace std;

int main()
{
    Tienda *tienda_lunar = new Tienda("Mi Tienda", "en la Luna");

    Vendedor *vendedor_selenita = new Vendedor("Daniel", "Miranda", 1, tienda_lunar);
    cout << vendedor_selenita->toString()<<endl;

    // creamos camisa standard, cuello MAO, manga corta
    Camisa camisa_standard_mao_mangacorta = Camisa(IPrenda::STANDARD, Camisa::MAO, Camisa::CORTA);

    cout << camisa_standard_mao_mangacorta.toString() << endl;
    

    // cout << camisa_standard_mao_mangacorta.CaracteristicaToString(camisa_standard_mao_mangacorta.camisaCuello) << endl;
    //cout << camisa_standard_mao_mangacorta.CaracteristicaToString(camisa_standard_mao_mangacorta.camisaManga) << endl;




    return 0;
}