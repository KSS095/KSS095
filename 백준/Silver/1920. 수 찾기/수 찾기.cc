#include <iostream>
#include <algorithm>
using namespace std;
int A[100000], B[100000];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M;

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> A[i];
	sort(A, A + N);

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> B[i];
		cout << binary_search(A, A + N, B[i]) << "\n";
	}
}