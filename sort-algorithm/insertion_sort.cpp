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
	for(i = 0; i < 10; i++) {
		temp = numbers[i];
		for(j = i - 1; j >= 0; j--) {
			if(numbers[j] > temp) {
				numbers[j+1]=numbers[j];
				numbers[j] = temp;
			}
			else {
				break;
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
