#include <iostream>
#include <string>
using namespace std;

int main() {
	int T, H, W, N, a, b;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;

		if (N % H == 0) {
			a = H;
			b = N / H;
		}
		else {
			a = N % H;
			b = (N / H) + 1;
		}
		string room = "";

		room.append(to_string(a));
		if (b <= 9) room.append("0");
		room.append(to_string(b));
		
		cout << room << "\n";
	}
}