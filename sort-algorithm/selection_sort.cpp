#include <iostream>

using namespace std;

int numbers[] = { 31, 41, 59, 26, 53, 58, 97, 93, 23, 84 };	// both numbers[] and numbers[10] can be used here.
// 6264338327950288419716939937510

int main()
{
	int i, j;
	cout << "Before sort: ";
	for(i = 0; i < 10; i++) {
		cout << numbers[i] << ' ';
	}
	cout << endl;

	// do selection sort
	int minIndex, temp;
	for(i = 0; i < 10; i++) {
		minIndex = i;
		for(j = i + 1; j < 10; j++) {
			if(numbers[j] < numbers[minIndex]) {
				minIndex = j;
			}
		}
		// swap numbers[i] and numbers[minIndex]
		temp = numbers[minIndex];
		numbers[minIndex] = numbers[i];
		numbers[i] = temp;
	}

	cout << "After sort: ";
	for(i = 0; i < 10; i++) {
		cout << numbers[i] << ' ';
	}
	cout << endl;
	return 0;
}
