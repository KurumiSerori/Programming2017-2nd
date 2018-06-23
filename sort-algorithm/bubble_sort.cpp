#include <iostream>

using namespace std;

int numbers[] = { 31, 41, 59, 26, 53, 58, 97, 93, 23, 84 };

int main()
{
	int i, j;
	cout << "Before sort: ";
	for(i = 0; i < 10; i++) {
		cout << numbers[i] << ' ';
	}
	cout << endl;

	int temp;
	for(i = 9; i >= 0; i--) {
		for(j = 0; j < i; j++) {	// if we use j <= i here, then what problem will we find? You can have a try.
			if(numbers[j] > numbers[j+1]) {
				temp = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = temp;
			}
		}
	}

	cout << "After sort: ";
	for(i = 0; i < 10; i++) {
		cout << numbers[i] << ' ';
	}
	cout << endl;
	return 0;
}
