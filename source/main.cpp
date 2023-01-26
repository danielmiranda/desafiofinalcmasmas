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

    // creamos camisa
    Camisa camisa_standard_mao_mangacorta = Camisa(IPrenda::STANDARD, Camisa::MAO, Camisa::CORTA);
    Camisa camisa_premium_mao_mangacorta = Camisa(IPrenda::PREMIUM, Camisa::MAO, Camisa::CORTA);
    Camisa camisa_standard_comun_mangacorta = Camisa(IPrenda::STANDARD, Camisa::NORMAL, Camisa::CORTA);
    Camisa camisa_premium_comun_mangacorta = Camisa(IPrenda::PREMIUM, Camisa::NORMAL, Camisa::CORTA);
    Camisa camisa_standard_mao_mangalarga = Camisa(IPrenda::STANDARD, Camisa::MAO, Camisa::LARGA);
    Camisa camisa_premium_mao_mangalarga = Camisa(IPrenda::PREMIUM, Camisa::MAO, Camisa::LARGA);
    Camisa camisa_standard_comun_mangalarga = Camisa(IPrenda::STANDARD, Camisa::NORMAL, Camisa::LARGA);
    Camisa camisa_premium_comun_mangalarga = Camisa(IPrenda::PREMIUM, Camisa::NORMAL, Camisa::LARGA);

    cout << camisa_standard_mao_mangacorta.toString() << endl;
    cout << camisa_premium_mao_mangacorta.toString() << endl;
    cout << camisa_standard_comun_mangacorta.toString() << endl;
    cout << camisa_premium_comun_mangacorta.toString() << endl;
    cout << camisa_standard_mao_mangalarga.toString() << endl;
    cout << camisa_premium_mao_mangalarga.toString() << endl;
    cout << camisa_standard_comun_mangalarga.toString() << endl;
    cout << camisa_premium_comun_mangalarga.toString() << endl;

    

    // cout << camisa_standard_mao_mangacorta.CaracteristicaToString(camisa_standard_mao_mangacorta.camisaCuello) << endl;
    //cout << camisa_standard_mao_mangacorta.CaracteristicaToString(camisa_standard_mao_mangacorta.camisaManga) << endl;




    return 0;
}