#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int N;
	cin >> N;
	vector<pair<int, int>> WH;

	for (int i = 0; i < N; i++) {
		int W, H;
		cin >> W >> H;
		WH.push_back(make_pair(W, H));
	}
	for (vector<pair<int, int>>::iterator it = WH.begin(); it != WH.end(); it++) {
		int rank = 1;
		for (vector<pair<int, int>>::iterator it2 = WH.begin(); it2 != WH.end(); it2++) {
			if (it == it2)
				continue;
			if (it->first < it2->first && it->second < it2->second)
				rank++;
		}
		cout << rank << " ";
	}
	return 0;
}