#include <iostream>
using namespace std;

int main() {
	string grade;
	cin >> grade;
	double res = 0;
	cout.precision(1);
	cout << fixed;

	switch (grade[0])
	{case 'A':
		res += 4.0;
		break;
	case 'B':
		res += 3.0;
		break;
	case 'C':
		res += 2.0;
		break;
	case 'D':
		res += 1.0;
		break;
	}
	switch (grade[1])
	{case '+':
		res += 0.3;
		break;
	case '-':
		res -= 0.3;
		break;
	}
	cout << res;
}