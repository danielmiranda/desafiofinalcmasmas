#include "PantallaPrincipal.h"

void PantallaPrincipal::show()
{
	this->clear();
	cout << this->center(MSG_TITULO) << endl;
	cout << MSG_SEPARADOR << endl;
	string tituloTienda = this->vendedor->obtenerTienda();
	cout << this->center(tituloTienda) << endl;
	cout << MSG_SEPARADOR << endl;
	string tituloVendedor = this->vendedor->obtenerNombre() + " | " + std::to_string(this->vendedor->obtenerCodigo());
	cout << this->center(tituloVendedor) << endl;
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
	if (txtLenght < 80) {
		paddingSpace = (80 - txtLenght) / 2;
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
