#include <vector>
#include <queue>
#include <iostream>

using namespace std;

const int MAX = 20001;
const int INF = 987654321;

int V, E, K;
vector<pair<int, int>> graph[MAX];

vector<int> dijkstra(int start, int vertex)
{
	vector<int> distance(vertex, INF);
	distance[start] = 0;

	priority_queue<pair<int, int>> pq;
	pq.push(make_pair(0, start));

	while (!pq.empty())
	{
		int cost = -pq.top().first;
		int curVertex = pq.top().second;
		pq.pop();

		if (distance[curVertex] < cost)
		{
			continue;
		}

		for (int i = 0; i < graph[curVertex].size(); i++)
		{
			int neighbor = graph[curVertex][i].first;
			int neighborDistance = cost + graph[curVertex][i].second;

			if (distance[neighbor] > neighborDistance)
			{
				distance[neighbor] = neighborDistance;
				pq.push(make_pair(-neighborDistance, neighbor));
			}
		}
	}
	return distance;
}

int main()
{
	cin >> V >> E >> K;

	V++;

	for (int i = 0; i < E; i++)
	{
		int u, v, w;
		cin >> u >> v >> w;

		graph[u].push_back(make_pair(v, w));
	}

	vector<int> result = dijkstra(K, V);

	for (int i = 1; i < V; i++)
	{
		if (result[i] == INF)
		{
			cout << "INF" << "\n";
		}
		else
		{
			cout << result[i] << "\n";
		}
	}
	return 0;
}