#include <iostream>

using namespace std;

void main() {
	int z=0,a;
	cout << "Enter the size of chessboard:"; cin >> a;

	cout << char(201);
	for (int g = 0; g < a * a * 2; g++) {
		cout << char(205);
	}
	cout << char(187);

	for (int i = 0; i < a; i++) {
		for (int h = 0; h < a; h++) {
			cout << "\n";
			cout << char(186);
			for (int d = 0; d < a; d++) {
				if ((z++) % 2 == 0) {
					for (int b = 0; b < a*2; b++) {
						cout << char(219);
					}
				}
				else {
					for (int b = 0; b < a*2; b++) {
						cout << char(255);
					}
				}
			}
			if (a % 2 == 0 ) {
				z++;
			}
			if (h < a - 1) {
				z--;
			}
			cout << char(186);
		}
	}
	cout << "\n";
	cout << char(200);
	for (int g = 0; g < a * a * 2; g++) {
		cout << char(205);
	}
	cout << char(188);

}
