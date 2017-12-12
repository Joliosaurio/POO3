#include "ListaLigada.h"



void Lista::insertItem(Item * nuevo)
{
	if(!header)
	{
		header = nuevo;
		header->next = nuevo;
		header->prev = nuevo;
	}
	else
	{
		header->next->prev = nuevo;
		nuevo->next = header->next;
		nuevo->prev = header;
		header->next = nuevo;
		header = header->next;
	}
}

void Lista::insertSring(std::string str)
{
	Item * it = new Item(str);
	insertItem(it);
}

void Lista::remove()
{
	header->prev->next = header->next;
	header->next->prev = header->prev;
	Item * temp = header;
	header = header->next;
	delete temp;
}

void Lista::print()
{
	Item * it = header;
	printf("Header: %s\n", header->name.c_str());
	do
	{
		char* prefijo = (it == header) ? "H\t" : "\t";
		std::cout << prefijo << it->name.c_str() << std::endl;
		it = it->next;	
	} while (it != header);

}

