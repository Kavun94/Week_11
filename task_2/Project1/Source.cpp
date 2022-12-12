#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	int array[6][4], k = 0;
	srand(time(0));
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 4; j++)
			array[i][j] = rand() % 9 + 1;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 4; j++)
			cout << array[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 4; i++) {
		k = 0;
		for (int j = 0; j < 6; j++)
			if (array[j][i] % 2 == 0) k++;
		cout << "Column " << i + 1 << " - " << k << endl;
	}
	return 0;
}