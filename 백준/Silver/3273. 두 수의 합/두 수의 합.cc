#include <iostream>
#include <algorithm>
using namespace std;
int arr[100001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, x, low, high, cnt = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);

	cin >> x;

	low = 0;
	high = n - 1;

	while (low < high) {
		int sum = arr[low] + arr[high];
		if (sum == x) {
			cnt++;
			low++;
			high--;
		}
		else if (sum < x) low++;
		else high--;
	}
	cout << cnt;
}