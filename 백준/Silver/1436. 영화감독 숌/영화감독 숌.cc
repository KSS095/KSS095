#include<iostream>
using namespace std;

int main()
{
	int N, name = 0, cnt = 0;
	cin >> N;

	while (cnt != N) {
		name++;
		int tmp = name;

		while (tmp != 0) {
			if (tmp % 1000 == 666) {
				cnt++;
				break;
			}
			else tmp /= 10;
		}
	}
	cout << name;
}