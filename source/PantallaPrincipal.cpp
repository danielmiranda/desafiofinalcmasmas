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

		//std::cin >> option;
		//std::system("cls");


		if (paso == 3) {

			int cantidadStock = this->tienda->obtenerStock(prenda);

			cout << "INFORMACION:" << endl;
			cout << "Existe " << cantidadStock << " cantidades en stock de la prenda seleccionada" << endl << endl;
			cout << "Paso 5: Ingrese la cantidad de prendas a cotiza:" << endl;
			cout << "CANTIDAD: ";
			cin >> cantidadPrenda;

			cout << cantidadPrenda << endl;
			cin >> option;
			paso = 4;
		}

		if (paso == 2) {
			cout << "Paso 4: Ingrese el precio de la prenda a cotiza:" << endl;
			cout << "$ ";

			//Cotizacion cotiza = prenda->obtenerCotizacion(1, 100);
			//cout << cotiza.toString();

			cin >> precioPrenda;
			paso = 3;
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
			if (str_option == "1") {
				calidad = Camisa::STANDARD;
			}
			if (str_option == "2") {
				calidad = Camisa::PREMIUM;
			}

			Camisa* camisa = new Camisa(calidad, cuello, manga);
			prenda = camisa;

			


			paso = 2;

		}

		if (paso == 0) {
			cout << "Paso 1: Seleccione la prenda a cotizar:" << endl;
			cout << "1) Camisa" << endl;
			cout << "2) Pantalon" << endl;
			cin >> option;
			string str_option = std::string(option);
			if (str_option == "1") {
				// Camisa
				prenda = new Camisa();
				paso = 1;
			}
			if (str_option == "2") {
				// Pantalon
				prenda = new Pantalon();
				paso = 2;
			}
			//cout << str_option;
		}

		
		//std::cin >> option;
		//verOpcionesCotizacion(option.c_str(), exitCondition, paso);


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
void PantallaPrincipal::verOpcionesCotizacion(const char* option, bool& exitCondition, int& paso)
{
	auto str_option = std::string(option);

	cout << "OPCION: " << str_option;

	
	if (str_option == "1")
	{
		cout << "CAMISA: PRESIONE ENTER PARA CNOTINUAR";
		paso = 1;
		std::cin.get();
		exitCondition = false;
	}
	if (str_option == "2")
	{
		paso = 2;
		cout << "PANTALON: PRESIONE ENTER PARA CNOTINUAR";
		std::cin.get();
		exitCondition = false;
	}
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