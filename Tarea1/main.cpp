#include <iostream>
#include <time.h>
#include <random>

void bubble(int arr[])
{
	clock_t tStart = clock();

	int i, j, n, temp, a;
	std::cout << "Define el tamaño de tu arreglo" << std::endl;
	std::cin >> n;


	for (i = 1; i<n; ++i)
	{
		for (j = 0; j<(n - i); ++j)
			if (arr[j]>arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
	}

	std::cout << "Arreglo despues del bubble sort:" << std::endl;
	for (i = 0; i < n; ++i)
		std::cout << " " << arr[i] << std::endl;

	printf("Time taken: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
}

void randN(int arr[]) //Genera Paciente Aleatorio
{
	int n;
	std::cout << "N de elentos de tu array: " << std::endl;
	std::cin >> n;
	srand(time(0));
	for (int i = 0; i <= n; ++i) //sizeof(arr)
	{
		arr[i] = 1 + rand() % n;
		//std::cout << arr[i] << std::endl;
	}

	std::cout << "Tu array se lleno de: " << n << " elementos aleatorios" << std::endl;

}

int divide(int *array, int start, int end) {
	int left;
	int right;
	int pivot;
	int temp;

	pivot = array[start];
	left = start;
	right = end;

	while (left < right) {
		while (array[right] > pivot) {
			right--;
		}

		while ((left < right) && (array[left] <= pivot)) {
			left++;
		}

		if (left < right) {
			temp = array[left];
			array[left] = array[right];
			array[right] = temp;
		}
	}

	
	temp = array[right];
	array[right] = array[start];
	array[start] = temp;


	return right;
}

void quicksort(int *array, int start, int end)
{

	int pivot;

	if (start < end) {
		pivot = divide(array, start, end);

		quicksort(array, start, pivot - 1);

		quicksort(array, pivot + 1, end);
	}

}




int main()
{
	int a;
	int tarr[100000];
	randN(tarr);
	std::cout << "Introduce el tamaño de tu array: ";
	std::cin >> a;
	//bubble(tarr);
	clock_t tStart = clock();
	quicksort(tarr, 0, a - 1);
	for (int i = 0; i < a; i++) 
		std::cout << tarr[i] << "-";
	printf("Time taken: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);

	system("Pause");

	return 0;
}
