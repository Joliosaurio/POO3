
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

	void DFSUtil(int v, bool visited[]);
	void DFS(int v);
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


void Graph::DFSUtil(int v, bool visited[])
{
	// Mark the current node as visited and
	// print it
	visited[v] = true;
	cout << v << " ";

	// Recur for all the vertices adjacent
	// to this vertex
	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			DFSUtil(*i, visited);
}


void Graph::DFS(int v)
{
	
	bool *visited = new bool[V];
	for (int i = 0; i < V; i++)
		visited[i] = false;

	DFSUtil(v, visited);
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

	//cout << "Bts:  "
	//	<< "(start: 2) \n";
	//grafo.BFS(2);

	cout << "dfs:  "
		<< "(start : 2) \n";
	grafo.DFS(2);



	return 0;
}