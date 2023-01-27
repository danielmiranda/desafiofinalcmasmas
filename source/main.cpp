#include<iostream>
#include "Vendedor.h"
#include "Tienda.h"
#include "Camisa.h"
#include "Pantalon.h"
#include "Stock.h"

using namespace std;

int main()
{
    Tienda * tienda_lunar = new Tienda("Mi Tienda", "en la Luna");

    Vendedor * vendedor_selenita = new Vendedor("Daniel", "Miranda", 1, tienda_lunar);
    cout << vendedor_selenita->toString()<<endl;

    // creamos camisa
    Camisa * camisa_standard_mao_mangacorta = new Camisa(IPrenda::STANDARD, Camisa::MAO, Camisa::CORTA);
    Camisa * camisa_premium_mao_mangacorta = new Camisa(IPrenda::PREMIUM, Camisa::MAO, Camisa::CORTA);
    Camisa * camisa_standard_comun_mangacorta = new Camisa(IPrenda::STANDARD, Camisa::NORMAL, Camisa::CORTA);
    Camisa * camisa_premium_comun_mangacorta = new Camisa(IPrenda::PREMIUM, Camisa::NORMAL, Camisa::CORTA);
    Camisa * camisa_standard_mao_mangalarga = new Camisa(IPrenda::STANDARD, Camisa::MAO, Camisa::LARGA);
    Camisa * camisa_premium_mao_mangalarga = new Camisa(IPrenda::PREMIUM, Camisa::MAO, Camisa::LARGA);
    Camisa * camisa_standard_comun_mangalarga = new Camisa(IPrenda::STANDARD, Camisa::NORMAL, Camisa::LARGA);
    Camisa * camisa_premium_comun_mangalarga = new Camisa(IPrenda::PREMIUM, Camisa::NORMAL, Camisa::LARGA);

    /*
    cout << camisa_standard_mao_mangacorta->toString() << endl;
    cout << camisa_premium_mao_mangacorta.toString() << endl;
    cout << camisa_standard_comun_mangacorta.toString() << endl;
    cout << camisa_premium_comun_mangacorta.toString() << endl;
    cout << camisa_standard_mao_mangalarga.toString() << endl;
    cout << camisa_premium_mao_mangalarga.toString() << endl;
    cout << camisa_standard_comun_mangalarga.toString() << endl;
    cout << camisa_premium_comun_mangalarga.toString() << endl;
    */

    // creamos pantalones
    Pantalon * pantalon_standard_normal = new Pantalon(IPrenda::STANDARD, Pantalon::NORMAL);
    Pantalon * pantalon_standard_chupin = new Pantalon(IPrenda::STANDARD, Pantalon::CHUPIN);
    Pantalon * pantalon_premium_normal = new Pantalon(IPrenda::PREMIUM, Pantalon::NORMAL);
    Pantalon * pantalon_premium_chupin = new Pantalon(IPrenda::PREMIUM, Pantalon::CHUPIN);
    /*
    cout << pantalon_standard_normal.toString() << endl;
    cout << pantalon_standard_chupin.toString() << endl;
    cout << pantalon_premium_normal.toString() << endl;
    cout << pantalon_premium_chupin.toString() << endl;
    */
    // Creamos el stock
    Stock * stock_camisa_standard_mao_mangacorta = new Stock(camisa_standard_mao_mangacorta, 100);
    Stock * stock_camisa_premium_mao_mangacorta = new Stock(camisa_premium_mao_mangacorta, 100);
    Stock * stock_camisa_standard_comun_mangacorta = new Stock(camisa_standard_comun_mangacorta, 150);
    Stock * stock_camisa_premium_comun_mangacorta = new Stock(camisa_premium_comun_mangacorta, 150);
    Stock * stock_camisa_standard_mao_mangalarga = new Stock(camisa_standard_mao_mangalarga, 75);
    Stock * stock_camisa_premium_mao_mangalarga = new Stock(camisa_premium_mao_mangalarga, 75);
    Stock * stock_camisa_standard_comun_mangalarga = new Stock(camisa_standard_comun_mangalarga, 175);
    Stock * stock_camisa_premium_comun_mangalarga = new Stock(camisa_premium_comun_mangalarga, 175);

    /*
    cout << stock_camisa_standard_mao_mangacorta.toString() << endl;
    cout << stock_camisa_premium_mao_mangacorta.toString() << endl;
    cout << stock_camisa_standard_comun_mangacorta.toString() << endl;
    cout << stock_camisa_premium_comun_mangacorta.toString() << endl;
    cout << stock_camisa_standard_mao_mangalarga.toString() << endl;
    cout << stock_camisa_premium_mao_mangalarga.toString() << endl;
    cout << stock_camisa_standard_comun_mangalarga.toString() << endl;
    cout << stock_camisa_premium_comun_mangalarga.toString() << endl;   
    */

    Stock * stock_pantalon_standard_normal = new Stock( pantalon_standard_normal, 250);
    Stock * stock_pantalon_premium_normal = new Stock( pantalon_premium_normal, 250);
    Stock * stock_pantalon_standard_chupin = new Stock( pantalon_standard_chupin, 750);
    Stock * stock_pantalon_premium_chupin = new Stock( pantalon_premium_chupin, 750);

    /*
    cout << stock_pantalon_standard_normal->toString() << endl;
    cout << stock_pantalon_premium_normal->toString() << endl;
    cout << stock_pantalon_standard_chupin->toString() << endl;
    cout << stock_pantalon_premium_chupin->toString() << endl;    
    */

    tienda_lunar->agregarStock(stock_pantalon_standard_normal);
    tienda_lunar->agregarStock(stock_pantalon_premium_normal);
    tienda_lunar->agregarStock(stock_pantalon_standard_chupin);
    tienda_lunar->agregarStock(stock_pantalon_premium_chupin);

    tienda_lunar->agregarStock(stock_camisa_standard_mao_mangacorta);
    tienda_lunar->agregarStock(stock_camisa_premium_mao_mangacorta);
    tienda_lunar->agregarStock(stock_camisa_standard_comun_mangacorta);
    tienda_lunar->agregarStock(stock_camisa_premium_comun_mangacorta);
    tienda_lunar->agregarStock(stock_camisa_standard_mao_mangalarga);
    tienda_lunar->agregarStock(stock_camisa_premium_mao_mangalarga);
    tienda_lunar->agregarStock(stock_camisa_standard_comun_mangalarga);
    tienda_lunar->agregarStock(stock_camisa_premium_comun_mangalarga);

    tienda_lunar->listarStock();

    Pantalon * pantalon = new Pantalon(IPrenda::PREMIUM, Pantalon::CHUPIN);
    int cantidadPantalonChupinPremium = tienda_lunar->obtenerStock( pantalon );

    cout << "Cantidad: " + std::to_string(cantidadPantalonChupinPremium) << endl;

    float cotizacion = pantalon->calcularCotizacion(1, 100);

    cout << "Cotizacion: " + std::to_string(cotizacion) << endl;

    //(*pantalon == *pantalon_premium_chupin) ? printf("PANTALONES IGUALES") : printf("PANTALONES DISTINTOS");

    // cout << camisa_standard_mao_mangacorta.CaracteristicaToString(camisa_standard_mao_mangacorta.camisaCuello) << endl;
    //cout << camisa_standard_mao_mangacorta.CaracteristicaToString(camisa_standard_mao_mangacorta.camisaManga) << endl;


    return 0;
}