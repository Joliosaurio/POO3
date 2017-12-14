#include <iostream>
#include <queue>
#include <time.h>
#include <random>

using namespace std;

void randPat(int arr[]) //Genera Paciente Aleatorio
{
	srand(time(NULL));
	for(int i = 0; i <= 8; ++i) //sizeof(arr)
	{
		arr[i] = 1 + rand() % 100;
	}

}

void showpq(priority_queue <int> gq)
{
	priority_queue <int> g = gq;
	while (!g.empty())
	{
		cout << '\t' << g.top();
		g.pop();
	}
	cout << '\n';
}

int main()
{

	int testarr[8];
	randPat(testarr);
	priority_queue <int> pq;
	for(int i = 0; i< 8; ++i)
	{
		pq.push(testarr[i]);
	}

	cout << "La lista de prioridad es : ";
	showpq(pq);

	cout << "\ngquiz.size() : " << pq.size();
	cout << "\ngquiz.top() : " << pq.top();
	cout << "\ngquiz.pop() : ";
	pq.pop();
	showpq(pq);

	return 0;
}















//#include <iostream>
//#include <time.h>
//#include <random>
//#include "Heap.h"
//
//void randPat(int arr[]) //Genera Paciente Aleatorio
//{
//	srand(time(NULL));
//	for(int i = 0; i <= 8; ++i) //sizeof(arr)
//	{
//		arr[i] = 1 + rand() % 100;
//	}
//
//}
//
//
//
//int main()
//{
//	Heap heap(8);
//	//int testarr[8];
//	//randPat(testarr);
//	heap.Queue("Hla",1);
//	heap.Queue("GGEz",2);
//	heap.Queue(":v",3);
//	heap.print();
//	return 0;
//}