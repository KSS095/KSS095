#include <vector>
#include <iostream>

#define MAX 1000000
#define int long long
using namespace std;

int N, M, rr, ll, res;
vector <int> v;

signed main() {
	cin >> N >> M;
	int amax = 0;

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		v.push_back(a);
		amax = max(amax, a);
	}
	rr = amax;
	ll = 0;

	while (ll <= rr) {
		int mid = (ll + rr) / 2;
		int sum = 0;
		for (int i = 0; i < N; i++) {
			if (mid < v[i]) sum += v[i] - mid;
		}

		if (sum >= M) {
			if (res < mid) res = mid;
			ll = mid + 1;
		}
		else rr = mid - 1;
	}

	cout << res;
}