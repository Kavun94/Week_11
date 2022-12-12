#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	int array[5][7], k = 0;
	srand(time(0));
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 7; j++)
			array[i][j] = rand() % 10 + 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 7; j++)
			cout << array[i][j] << " ";
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < 5; i++) {
		k = 0;
		for (int j = 0; j < 7; j++)
			 k+=array[i][j];
		cout << "Sum line " << i + 1 << " = " << k << endl;
	}
	return 0;
}