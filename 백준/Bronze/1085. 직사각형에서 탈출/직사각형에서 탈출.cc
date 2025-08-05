#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int min_x = min(w - x, x);
	int min_y = min(h - y, y);
	cout << min(min_x, min_y);
}