#include <iostream>
using namespace std;

long long sum[100001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M;
	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		int tmp;
		cin >> tmp;
		
		sum[i] = sum[i - 1] + tmp;
	}

	for (int i = 0; i < M; i++) {
		int begin, end;
		cin >> begin >> end;

		cout << sum[end] - sum[begin - 1] << "\n";
	}
}