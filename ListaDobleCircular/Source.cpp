#include <iostream>
#include <string>
#include "ListaLigada.h"
using namespace std;
int main()
{
	Lista *lista = new Lista();
	//lista->insertSring("Hola");
	//lista->insertSring("Mundo");
	//lista->insertSring("Esto");
	//lista->insertSring("Es");
	//lista->insertSring("Una");
	//lista->insertSring("Lista");
	//lista->prev();
	//lista->prev();
	//lista->prev();
	//lista->prev();
	//lista->print();
	string s1;
	int x;
	do
	{
	cout << "Estas en tu inventario ¿Que deseas hacer?" << endl;
	cout << "1.Agregar, 2.Quitar elemento, 3.Imprimir inventario, 4.Salir" << endl;
	cin >> x;
	string sobj;

		switch (x)
		{
		case 1:
			cout << "Ponle un nombre a tu objeto." << endl;
			cin >> sobj;
			lista->insertSring(sobj);
			break;
		case 2:
			cout << "Eliminando..." << endl;
			lista->remove();
			cout << "Aaand it's gone!" << endl;
			break;
		case 3:
			cout << "Tu inventario actual es: " << endl;
			
			lista->print();
			break;
		case 4:
			cout << "Adios" << endl;
		default:
			break;
		}
	} while (x != 4);
	system("Pause");
	return 0;
}