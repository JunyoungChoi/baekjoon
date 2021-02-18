#include<iostream>
#include<queue>
#include<vector>
#include<string>
#include<cstdio>
using namespace std;
int N, M;
char maze[102][102] = { {0,}, };
bool visited[102][102] = { {false,} , };
queue<pair<int, int>> qpos;
queue<int> qdist;
void BFS() {
	pair<int, int> pos = qpos.front();
	qpos.pop();
	int posY = pos.first;
	int posX = pos.second;
	int distance = qdist.front();
	qdist.pop();
	if (posX == M && posY == N) {
		cout << distance;
		return;
	}
	if (maze[posY - 1][posX] == '1' && !visited[posY - 1][posX]) {
		qpos.push(make_pair(posY - 1, posX));
		qdist.push(distance + 1);
		visited[posY - 1][posX] = true;
	}
	if (maze[posY + 1][posX] == '1' && !visited[posY + 1][posX]) {
		qpos.push(make_pair(posY + 1, posX));
		qdist.push(distance + 1);
		visited[posY + 1][posX] = true;
	}
	if (maze[posY][posX - 1] == '1' && !visited[posY][posX - 1]) {
		qpos.push(make_pair(posY, posX - 1));
		qdist.push(distance + 1);
		visited[posY][posX - 1] = true;
	}	
	if (maze[posY][posX + 1] == '1' && !visited[posY][posX + 1]) {
		qpos.push(make_pair(posY, posX + 1));
		qdist.push(distance + 1);
		visited[posY][posX + 1] = true;
	}
	BFS();
}


int main() {
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		string m;
		cin >> m;
		m = "0" + m;
		sprintf(maze[i], m.c_str());
	}
	qpos.push(make_pair(1, 1));
	qdist.push(1);
	visited[1][1] = true;
	BFS();
	return 0;
}

