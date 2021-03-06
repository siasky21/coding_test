#include <vector>
#include <iostream>

using namespace std;

const int MAX = 501;
const int INF = 987654321;
const int START = 1;

int main()
{
	int TC, N, M, W;
	cin >> TC;

	while (TC--)
	{
		cin >> N >> M >> W;

		vector<vector<pair<int, int>>> edge(N + 1);
		vector<int> dis(N + 1, INF);
		dis.at(START) = 0;

		for (int m_idx = 0; m_idx < M; m_idx++)
		{
			int node_1, node_2, weight;
			cin >> node_1 >> node_2 >> weight;
			edge.at(node_1).push_back({ node_2, weight });
			edge.at(node_2).push_back({ node_1, weight });
		}

		for (int w_idx = 0; w_idx < W; w_idx++)
		{
			int from, to, weight;
			cin >> from >> to >> weight;
			edge.at(from).push_back({ to, -1 * weight });
		}

		int is_have_cycle = 0;
		for (int t_idx = 1; t_idx <= N; t_idx++) {
			for (int v_idx = 1; v_idx <= N; v_idx++) {
				int edge_size_ = edge.at(v_idx).size();
				for (int e_idx = 0; e_idx < edge_size_; e_idx++) {
					int from = v_idx;
					int to = edge.at(v_idx).at(e_idx).first;
					int weight = edge.at(v_idx).at(e_idx).second;

					if (dis.at(from) + weight < dis.at(to)) {
						dis.at(to) = dis.at(from) + weight;
						if (t_idx == N) is_have_cycle = 1;
					}
				}
			}
		}

		is_have_cycle ? printf("YES\n") : printf("NO\n");
	}
	return 0;
}