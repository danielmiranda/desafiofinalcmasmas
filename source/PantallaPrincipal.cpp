#include "PantallaPrincipal.h"


void PantallaPrincipal::show()
{
	std::string option;
	bool exitCondition = false;

	do
	{
		this->clear();
		cout << this->center(MSG_TITULO + " - MENU PRINCIPAL") << endl;
		cout << MSG_SEPARADOR << endl;
		string tituloTienda = this->vendedor->obtenerTienda();
		cout << this->center(tituloTienda) << endl;
		cout << MSG_SEPARADOR << endl;
		string tituloVendedor = this->vendedor->obtenerNombre() + " | " + "cod: " + std::to_string(this->vendedor->obtenerCodigo());
		cout << this->center(tituloVendedor) << endl;
		cout << MSG_SEPARADOR << endl;
		cout << endl;
		this->showMenu();

		std::cin >> option;
		//std::system("cls");

		verOpciones(option.c_str(), exitCondition);

		std::cin.get();

	} while (!exitCondition);

	

}
void PantallaPrincipal::showCotizacion()
{
	std::string option;
	bool exitCondition = false;
	int paso = 0;
	IPrenda * prenda = NULL;
	float precioPrenda = 0;
	int cantidadPrenda = 0;

	do
	{
		this->clear();
		cout << this->center(MSG_TITULO + " - COTIZAR") << endl;
		cout << MSG_SEPARADOR << endl;
		this->showMenuCotizacion();

		

		if (paso == 40) {
			Cotizacion cotiza = prenda->obtenerCotizacion(cantidadPrenda, precioPrenda);
			this->tienda->agregarCotizacion(&cotiza);
			cout << cotiza.toString();
			cout << endl << MSG_SEPARADOR << endl;
			this->showMenuCotizacion();

			cin >> option;
			this->show();
			exitCondition = true;
			paso = 9999;
		}

		if (paso == 30) {

			int cantidadStock = this->tienda->obtenerStock(prenda);

			cout << "INFORMACION:" << endl;
			cout << "Existe " << cantidadStock << " unidades en stock de la prenda seleccionada" << endl << endl;
			cout << "Paso 5: Ingrese la cantidad de prendas a cotiza:" << endl;
			
			if (cantidadPrenda > cantidadStock ) {
				cout << endl << "ALERTA: No contamos con stock suficienta para completar la cotizacion! " << endl;
			}
			if (cantidadPrenda < 0) {
				cout << endl << "ALERTA: Debe completar la cantidad de prendas para realizar la cotizacion! " << endl;
			}
			cout << "CANTIDAD: ";

			cin >> cantidadPrenda;

			if (cantidadPrenda < cantidadStock && cantidadPrenda > 0) {
			
				paso = 40;
			}

			
		}

		if (paso == 20) {
			cout << "Paso 4: Ingrese el precio de la prenda a cotiza:" << endl;
			cout << "$ ";

			cin >> precioPrenda;
			paso = 30;
		}

		if (paso == 5) {
			Pantalon::ETipoPantalon tipoPantalon;
			Pantalon::ECalidad calidad;

			cout << "Paso 2.a: El pantalon a cotizar es chupin?:" << endl;
			cout << "1) Si" << endl;
			cout << "2) No" << endl;
			cin >> option;
			string str_option = std::string(option);
			verOpcionesCotizacion(str_option, exitCondition, paso);

			if (str_option == "1") {
				tipoPantalon = Pantalon::CHUPIN;
			}
			if (str_option == "2") {
				tipoPantalon = Pantalon::NORMAL;
			}

			cout << "Paso 3: Seleccione la calidad de la prenda" << endl;
			cout << "1) Standard" << endl;
			cout << "2) Premium" << endl;
			cin >> option;
			str_option = std::string(option);
			verOpcionesCotizacion(str_option, exitCondition, paso);
			if (str_option == "1") {
				calidad = Pantalon::STANDARD;
			}
			if (str_option == "2") {
				calidad = Pantalon::PREMIUM;
			}

			Pantalon* pantalon = new Pantalon(calidad, tipoPantalon);
			prenda = pantalon;

			paso = 20;

		}

		if (paso == 1) {
			Camisa::ETipoManga manga;
			Camisa::ETipoCuello cuello;
			Camisa::ECalidad calidad;

			cout << "Paso 2.a: La camisa a cotizar es manga corta?:" << endl;
			cout << "1) Si" << endl;
			cout << "2) No" << endl;
			cin >> option;
			string str_option = std::string(option);
			if (str_option == "1") {
				// Camisa
				manga = Camisa::CORTA;
			}
			if (str_option == "2") {
				// Pantalon
				manga = Camisa::LARGA;
			}

			cout << "Paso 2.b: La camisa a cotizar es cuello Mao?:" << endl;
			cout << "1) Si" << endl;
			cout << "2) No" << endl;
			cin >> option;
			str_option = std::string(option);
			if (str_option == "1") {
				cuello = Camisa::MAO;
			}
			if (str_option == "2") {
				cuello = Camisa::NORMAL;
			}

			cout << "Paso 3: Seleccione la calidad de la prenda" << endl;
			cout << "1) Standard" << endl;
			cout << "2) Premium" << endl;
			cin >> option;
			str_option = std::string(option);
			verOpcionesCotizacion(str_option, exitCondition, paso);
			if (str_option == "1") {
				calidad = Camisa::STANDARD;
			}
			if (str_option == "2") {
				calidad = Camisa::PREMIUM;
			}

			Camisa* camisa = new Camisa(calidad, cuello, manga);
			prenda = camisa;

			paso = 20;

		}

		if (paso == 0) {
			cout << "Paso 1: Seleccione la prenda a cotizar:" << endl;
			cout << "1) Camisa" << endl;
			cout << "2) Pantalon" << endl;
			cin >> option;
			string str_option = std::string(option);
			verOpcionesCotizacion(str_option, exitCondition, paso);
			if (str_option == "1") {
				// Camisa
				paso = 1;
			}
			if (str_option == "2") {
				// Pantalon
				paso = 5;
			}

		}

		std::cin.get();

	} while (!exitCondition);

}
void PantallaPrincipal::showMenu()
{
	cout << " SELECCIONE UNA OPCION DEL MENU" << endl;
	cout << endl;
	cout << " 1) Historial de Cotizaciones" << endl;
	cout << " 2) Realizar Cotizacion" << endl;
	cout << " 3) Salir" << endl;
	cout << endl;

}
void PantallaPrincipal::showMenuCotizacion()
{
	cout << " Presione 3 para volver al menu principal" << endl;
	cout << MSG_SEPARADOR << endl;
	cout << endl;

}

void PantallaPrincipal::clear()
{
	std::system("cls");
}
string PantallaPrincipal::center(string txt)
{
	int txtLenght = txt.length();
	int paddingSpace = 0;
	if (txtLenght < WIDTHSCREEN) {
		paddingSpace = (WIDTHSCREEN - txtLenght) / 2;
	}

	std::string spaces(paddingSpace, ' ');
	return spaces + txt;
}
void PantallaPrincipal::setTienda(Tienda * tienda)
{
	this->tienda = tienda;
}
void PantallaPrincipal::setVendedor(Vendedor* vendedor)
{
	this->vendedor = vendedor;
}
void PantallaPrincipal::showHistorial(string contenido)
{
	std::string option;
	bool exitCondition = false;

	do
	{
		this->clear();
		cout << this->center(MSG_TITULO + " - HISTORIAL DE COTIZACIONES") << endl;
		cout << MSG_SEPARADOR << endl;
		this->showMenuHistorial();
		cout << contenido << endl;

		std::cin >> option;
		//std::system("cls");

		verOpcionesHistorial(option.c_str(), exitCondition);

		std::cin.get();

	} while (!exitCondition);

}

void PantallaPrincipal::showMenuHistorial()
{
	cout << " Presione 3 para volver al menu principal" << endl;
	cout << MSG_SEPARADOR << endl;
	cout << endl;
}

void PantallaPrincipal::verOpciones(const char* option, bool& exitCondition)
{
	auto str_option = std::string(option);

	cout << "OPCION: " << str_option;

	if (str_option == "1")
	{
		string o = this->tienda->listarCotizaciones();
		this->showHistorial(o);
		exitCondition = true;
	}
	if (str_option == "2")
	{
		this->showCotizacion();
		exitCondition = true;
	}
	if (str_option == "3")
	{		
		std::cout.flush();
		exit(EXIT_SUCCESS);
	}
	else
	{
		cout << "OPCION INVALIDA: PRESIONE ENTER PARA CNOTINUAR";
		std::cin.get();
		exitCondition = false;
	}
}
void PantallaPrincipal::verOpcionesCotizacion(string str_option, bool& exitCondition, int& paso)
{

	if (str_option == "1" || str_option == "2")
	{
		exitCondition = false;
	}
	else if (str_option == "3")
	{
		this->show();
		exitCondition = true;
	}
	else
	{
		cout << "OPCION INVALIDA: PRESIONE ENTER PARA CNOTINUAR";
		std::cin.get();
		exitCondition = false;
	}
}
void PantallaPrincipal::verOpcionesHistorial(const char* option, bool& exitCondition)
{
	auto str_option = std::string(option);

	if (str_option == "3")
	{
		this->show();
		exitCondition = true;
	}
	else
	{
		cout << "OPCION INVALIDA: PRESIONE ENTER PARA CNOTINUAR";
		std::cin.get();
		exitCondition = false;
	}
}