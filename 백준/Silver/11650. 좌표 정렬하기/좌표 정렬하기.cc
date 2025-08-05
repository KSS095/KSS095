#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N;
	pair<int, int> coord;
	vector<pair<int, int>> arr;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> coord.first >> coord.second;
		arr.push_back(coord);
	}
	sort(arr.begin(), arr.end());

	for (int i = 0; i < arr.size(); i++)
		cout << arr[i].first << " " << arr[i].second << "\n";
}