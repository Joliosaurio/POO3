#include <iostream>
#include <fstream>


int main() {
	std::ofstream write("text.txt", std::ofstream::out | std::ofstream::trunc); //out: guarda, trunc: elimina si ya existe
	constexpr size_t sizeX = 10;
	constexpr size_t sizeY = 2;
	int arreglo[sizeX][sizeY] = { 0 };

	int x, y;
	std::cout << "X y Y" << std::endl;
	std::cin >> x >> y;
	std::cout << "Dato" << std::endl;
	std::cin >> arreglo[x][y];

	for (size_t i = 0; i < sizeX; i++)
		for (size_t j = 0; j < sizeY; j++) {
			std::cout << "a[" << i << "][" << j << "]: ";
			std::cout << arreglo[i][j] << std::endl;
			write << "a[" << i << "][" << j << "]: ";
			write << arreglo[i][j];
		}
	write.close();
	return 0;
	//TODO Meter en loop infinito y guardar el array al archivo (usar mismo for())
}
