#include <iostream>
#include <string>
using namespace std;

int main() {
	string result;
	int A, B, C, res, cnt[10] = { 0, };

	cin >> A >> B >> C;
	res = A * B * C;
	result = to_string(res);

	for (int i = 0; i < result.length(); i++)
		cnt[result[i] - 48]++;
	for (int i = 0; i < 10; i++)
		cout << cnt[i] << "\n";
}