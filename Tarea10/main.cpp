
#include<iostream>
#include <list>

using namespace std;


class Graph
{
	int V; 


	list<int> *adj;
public:
	Graph(int V); 

				  
	void addEdge(int v, int w);

	
	void BFS(int s);
};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
}

void Graph::BFS(int s)
{

	bool *visited = new bool[V];
	for (int i = 0; i < V; i++)
		visited[i] = false;

	
	list<int> queue;


	visited[s] = true;
	queue.push_back(s);

	list<int>::iterator i;

	while (!queue.empty())
	{
		
		s = queue.front();
		cout << s << " ";
		queue.pop_front();

		for (i = adj[s].begin(); i != adj[s].end(); ++i)
		{
			if (!visited[*i])
			{
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
}


int main()
{

	Graph grafo(4);
	grafo.addEdge(0, 1);
	grafo.addEdge(0, 2);
	grafo.addEdge(1, 2);
	grafo.addEdge(2, 0);
	grafo.addEdge(3, 3);
	grafo.addEdge(2, 3);

	cout << "Bts:  "
		<< "(starting from vertex 2) \n";
	grafo.BFS(2);

	return 0;
}