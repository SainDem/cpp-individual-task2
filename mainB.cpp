#include <iostream>
using namespace std;

int main() {
	int a[100], n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	int firstEl = -1, secondEl = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			if (firstEl == -1)
				firstEl = i;
			else
				secondEl = i;

			if (secondEl != -1)
				break;
		}
	}

	if (firstEl == -1 || secondEl == -1 || secondEl - firstEl == 1)
		cout << "There are no 2 zero nums or they are neighbours";
	else
	{
		int mult = 1;
		for (int i = firstEl + 1; i < secondEl; i++)
			mult *= a[i];
		cout << mult;
	}
}
