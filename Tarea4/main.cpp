#include <fstream>
#include <vector>
#include <iostream>

int main() {

	std::ifstream myFile;
	myFile.open("data2.bin", std::ios::out | std::ios::binary);
	std::vector<int> vector;
	int size;
	int valor, indice;

	std::cout << "Tamano" << std::endl;
	std::cin >> size;

	for (size_t i = 0; i < size; i++) {
		vector.push_back(0);
	}

	std::cout << "Indice a modificar" << std::endl;
	std::cin >> indice;

Valor:
	std::cout << "Valor a modificar" << std::endl;
	std::cin >> valor;

	if (valor > 2 || valor < 0) {
		std::cout << "Solo introducir '1' y '0' bro" << std::endl;
		goto Valor;
	}

	vector.at(indice) = valor;

	for (auto i = vector.begin(); i != vector.end(); ++i) {
		std::cout << *i << std::endl;

	}

	return 0;
}