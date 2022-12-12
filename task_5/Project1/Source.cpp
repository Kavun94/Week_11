#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	int array[3][4], ki = 0, kj = 0, max = 0;;
	srand(time(0));
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			array[i][j] = rand() % 99 + 10;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			cout << array[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			if (array[i][j] > max) {
				max = array[i][j];
				ki = i; kj = j;
			}
	}
	cout << "Max Element = " << max << endl;
	cout << "position: " << ki << " " << kj;
	return 0;
}