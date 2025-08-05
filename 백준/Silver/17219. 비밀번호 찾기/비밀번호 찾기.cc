#include <iostream>
#include <map>
using namespace std;

map<string, string> addr;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		string address, password;
		cin >> address >> password;
		
		addr.insert(make_pair(address, password));
	}

	for (int i = 0; i < M; i++) {
		string str;
		cin >> str;
		cout << addr[str] << "\n";
	}
}