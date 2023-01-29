#include "PantallaHistorial.h"
#include "PantallaPrincipal.h"

void PantallaHistorial::show(string contenido)
{
	std::string option;
	bool exitCondition = false;

	do
	{
		this->clear();
		cout << this->center(MSG_TITULO + " - HISTORIAL DE COTIZACIONES") << endl;
		cout << MSG_SEPARADOR << endl;
		this->showMenu();
		cout << contenido << endl;

		//showText("�Qu� desea hacer?");
		std::cin >> option;
		std::system("cls");

		verOpciones(option.c_str(), exitCondition);

		//showText(ANY_KEY_MESSAGE);
		std::cin.get();
	} while (!exitCondition);



	

}
void PantallaHistorial::showMenu()
{
	cout << " Presione 3 para volver al menu principal" << endl;
	cout << MSG_SEPARADOR << endl;
	cout << endl;
}

void PantallaHistorial::verOpciones(const char* option, bool& exitCondition)
{
	auto str_option = std::string(option);

	if (str_option == "3")
	{
		PantallaPrincipal* pantalla = new PantallaPrincipal();
		
		pantalla->show();
		//showMenuToTakeAWeapon();
		exitCondition = false;
	}
	else if (str_option == "x" || str_option == "X")
	{
		std::cout.flush();
		exit(EXIT_SUCCESS);
	}
	else
	{
		cout << "OPCION INVALIDA";
		std::cin.get();
		exitCondition = false;
	}
}
