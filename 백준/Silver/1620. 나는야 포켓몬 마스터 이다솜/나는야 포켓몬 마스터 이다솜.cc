#include <iostream>
#include <string>
#include <map>
using namespace std;

string name[100001];
map<string, int> dict;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M;
	string str;
	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		cin >> str;
		name[i] = str;
		dict.insert(make_pair(str, i));
	}

	for (int i = 0; i < M; i++) {
		cin >> str;

		if (isdigit(str[0])) {
			int n;
			n = stoi(str);
			cout << name[n] << '\n';
		}
		else {
			auto it = dict.find(str);
			cout << it->second << "\n";
		}
	}
}