#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
void solution(int N, int M, vector<int>* v);
int main()
{
	int N, M;
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		vector<int> v;
		v.push_back(i);
		solution(N, M, &v);
	}
	return 0;
}
void solution(int N, int M, vector<int>* v) {

	if (M == v->size())
	{
		for (vector<int>::iterator it = v->begin(); it != v->end(); it++) {
			cout << *it << " ";
		}
		cout << endl;
		return;
	}
	else {
		for (int i = 1; i <= N; i++) {
			vector<int> _v = *v;
			if (find(_v.begin(), _v.end(), i) == _v.end())
			{
				_v.push_back(i);
				solution(N, M, &_v); 
			}
			else {
				continue;
			}
		}
	}
}