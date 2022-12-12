#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	int array[3][4], ki = 0, kj = 0, min = 0;;
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
	min = array[0][0];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			if (array[i][j] <  min) {
				min = array[i][j];
				ki = i; kj = j;
			}
	}
	cout << "Min Element = " << min << endl;
	cout << "position: " << ki << " " << kj;
	return 0;
}