#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M;
	cin >> N;
	vector<int> v(N);
	
	for (int i = 0; i < N; i++) cin >> v[i];
	sort(v.begin(), v.end());

	cin >> M;
	for (int i = 0; i < M; i++) {
		int tmp;
		cin >> tmp;
		auto L = lower_bound(v.begin(), v.end(), tmp);
		auto U = upper_bound(v.begin(), v.end(), tmp);
		cout << U - L << ' ';
	}
}