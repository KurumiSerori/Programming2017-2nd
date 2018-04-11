#include <iostream>

using namespace std;

int main()
{
	cout << "Input a number, the program will decide if the year is leap year.(C++ version)" << endl;
	int input;
	cin >> input;
	if (input % 100 == 0) {
		if (input % 400 == 0) {
			cout << "YES!" << endl;
		}
		else {
			cout << "NO!\n";	// We prefer using 'endl' on cout, commonly.
/* In C/C++, '//' can comment out following statements on same line while
 * '/ *' and '* /'(without the space) can comment out a block.
 * (in other words, makes the block ineffective)
 * note: '/ *' and '* /'(without the sapce) can not nest,
 * which means you cannot use block comment in another block comment
 */
		}
	}
	else if (input % 4 == 0) {
		cout << "YES!" << endl;
	}
	else {
		cout << "NO!" << endl;
	}
	return 0;
}
