#include<vector>
#include<stack>
#include<queue>
#include<iostream>
using namespace std;
int N, M, V;
bool graph[1001][1001]{ {false,}, };
bool bfsvisited[1001]{ false, };
bool dfsvisited[1001]{ false, };
queue<int> bfs;

void BFS(queue<int> bfs) {
	if (bfs.empty()) {
		return;
	}
	int curLocation = bfs.front();
	cout << curLocation << " ";
	bfs.pop();
	for (int i = 1; i <= N; i++) {
		if (i != curLocation && graph[curLocation][i] && !bfsvisited[i]) {
			bfsvisited[i] = true;
			bfs.push(i);
		}
	}
	BFS(bfs);
}
void DFS(int curLocation) {
	cout << curLocation << " ";
	for (int i = 1; i <= N; i++) {
		if (i != curLocation && graph[curLocation][i] && !dfsvisited[i]) {
			dfsvisited[i] = true;
			DFS(i);
		}
	}
}

int main() {
	cin >> N >> M >> V;
	bfsvisited[V] = true;
	dfsvisited[V] = true;
	bfs.push(V);
	for (int i = 0; i < M; i++) {
		int start, end;
		cin >> start >> end;
		graph[start][end] = true;
		graph[end][start] = true;
	}
	DFS(V);
	cout << endl;
	BFS(bfs);
	return 0;
}
