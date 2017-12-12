#pragma once
#include <iostream>

class Lista
{
public:
	
	class Item
	{
	public:
		Item *prev;
		Item *next;
		std::string name;
		Item(std::string n)
		{
			name = n;
		}
	};

	Item* getHeader();
	void insertItem(Item * nuevo);
	void insertSring(std::string str);
	void remove();

	void prev()
	{
		header = header->prev;
	}
	void next()
	{
		header = header->next;
	}
	void print();
private:
	Item * header;
};