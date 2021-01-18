#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int nTestcase;
	cin >> nTestcase;
	for (int i = 0; i < nTestcase; i++) {
	string sResult;
	cin >> sResult;
	bool bConti = false;
	int iAns = 0, iBonus = 0;
	for (char c : sResult) {
		if (c == 'O') {
			if (bConti)
				iAns += 1 + iBonus++;
			else
			{
				iAns++;
				iBonus++;
				bConti = true;
			}
		}
		else {
			bConti = false;
			iBonus = 0;
		}
	}
	cout << iAns << endl;
	}
}
