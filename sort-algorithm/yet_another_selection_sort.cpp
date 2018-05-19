#include <iostream>

using namespace std;

int numbers[] = { 31, 41, 59, 26, 53, 58, 97, 93, 23, 84 };
// why is this sorting algorithm unstable?
// try numbers[] = {2, 3, 2, 1}, remember to revise limits related with i and j below!!
// and you can try to debug with paper and pen.

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
		for(j = i + 1; j < 10; j++) {
			if(numbers[i] > numbers[j]) {
				temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
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
