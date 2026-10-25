#include <iostream>
using namespace std;

int main() {
	int a[100], n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	int maxEl, maxElIndex;
	bool maxInit = false;
	for (int i = 0; i < n; i++) {
		bool not5Exist = true;
		int x = a[i];
		while (x) {
			if (abs(x) % 10 == 5) {
				not5Exist = false;
				break;
			}
			x /= 10;
		}

		if (not5Exist && (!maxInit || a[i] > maxEl)) {
			maxEl = a[i];
			maxElIndex = i;
			maxInit = true;
		}
	}

	if (maxInit)
		cout << maxElIndex;
	else
		cout << "Not Found such elements!";
}
