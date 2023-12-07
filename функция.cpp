#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	float S = 0;
	float u = 1;
	float i = 1;
	int n;
	int x;
	cin >> x;
	cin >> n;
	while (i <= n) {
		S += u;
		u *= n / i;
		++i;
	}
	cout << u;
	return 0;
}