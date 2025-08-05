#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int K, sum = 0, tmp;
	vector<int> num;
	cin >> K;

	for (int i = 0; i < K; i++) {
		cin >> tmp;

		if (tmp != 0) num.push_back(tmp);
		else num.pop_back();
	}

	for (int i = 0; i < num.size(); i++)
		sum += num[i];
	cout << sum;
}